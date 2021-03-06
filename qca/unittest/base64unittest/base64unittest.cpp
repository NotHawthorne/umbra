/**
 * base64unittest.cpp
 *
 * Copyright (C)  2004-2006  Brad Hards <bradh@frogmouth.net>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <QtCrypto>
#include <QtTest/QtTest>

#ifdef QT_STATICPLUGIN
#include "import_plugins.h"
#endif

class Base64UnitTest : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test1_data();
    void test1();
    void test2_data();
    void test2();
private:
    QCA::Initializer* m_init;
};

void Base64UnitTest::initTestCase()
{
    m_init = new QCA::Initializer;
}

void Base64UnitTest::cleanupTestCase()
{
    delete m_init;
}

void Base64UnitTest::test1_data()
{
    QTest::addColumn<QString>("raw");
    QTest::addColumn<QString>("encoded");

    // these are from the Botan test suite. Note that these are hex encoded!
    QTest::newRow("31") << QString("31") << QString("4d513d3d");
    QTest::newRow("235c91") << QString("235c91") << QString("49317952");
    QTest::newRow("414") << QString("4142634452313236")
			 << QString("51554a6a524649784d6a593d");
    QTest::newRow("241") << QString("241bb300a3989a620659")
			 << QString("4a42757a414b4f596d6d494757513d3d");
    QTest::newRow("313") << QString("31323537374343666671333435337836")
			 << QString("4d5449314e7a644451325a6d63544d304e544e344e673d3d");
    QTest::newRow("60e") << QString("60e8e5ebb1a5eac95a01ec7f8796b2dce471")
			 << QString("594f6a6c3637476c36736c614165782f68356179334f5278");
    QTest::newRow("3134") << QString("31346d354f33313333372c31274d754e7354307050346231333a29")
			  << QString("4d5452744e55387a4d544d7a4e7977784a303131546e4e554d4842514e4749784d7a6f70");
}


void Base64UnitTest::test2_data()
{
    QTest::addColumn<QString>("raw");
    QTest::addColumn<QString>("encoded");

    // these are from Python 2.3's tests for base64
    QTest::newRow("www.python.org") << QString("www.python.org")
				    << QString("d3d3LnB5dGhvbi5vcmc=");
    QTest::newRow("a") << QString("a") << QString("YQ==");
    QTest::newRow("ab") << QString("ab") << QString("YWI=");
    QTest::newRow("abc") << QString("abc") << QString("YWJj");
    QTest::newRow("empty") << QString("") << QString("");
    QTest::newRow("a-Z") << QString("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#0^&*();:<>,. []{}")
			 << QString("YWJjZGVmZ2hpamtsbW5vcHFyc3R1dnd4eXpBQkNERUZHSElKS0xNTk9QUVJTVFVWV1hZWjAxMjM0NTY3ODkhQCMwXiYqKCk7Ojw+LC4gW117fQ==");

    // these are generated by Python 2.3. I removed the trailing newline
    QTest::newRow("31") << QString("31") << QString("MzE=");
    QTest::newRow("QCA_2.0") << QString("QCA_2.0") << QString("UUNBXzIuMA==");
    QTest::newRow("j-0") << QString("jh/*-*/*-/4983589230")
			 << QString("amgvKi0qLyotLzQ5ODM1ODkyMzA=");
}

void Base64UnitTest::test1()
{
    QCA::Base64 base64Object;

    QFETCH(QString, raw);
    QFETCH(QString, encoded);

    QCOMPARE(QCA::arrayToHex(base64Object.encode(QCA::hexToArray(raw)).toByteArray()), encoded);
    QCOMPARE(QCA::arrayToHex(base64Object.decode(QCA::hexToArray(encoded)).toByteArray()), raw);
}

void Base64UnitTest::test2()
{
    QCA::Base64 base64Object;

    QFETCH(QString, raw);
    QFETCH(QString, encoded);

    QCOMPARE( base64Object.encodeString(raw), encoded );
    QCOMPARE( base64Object.decodeString(encoded), raw );
}

QTEST_MAIN(Base64UnitTest)

#include "base64unittest.moc"
