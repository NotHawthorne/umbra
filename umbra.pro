#-------------------------------------------------
#
# Project created by QtCreator 2015-06-19T19:26:10
#
#-------------------------------------------------

QT_VERSION = 5

QT       += widgets
QT       += multimedia
QT       += core gui
QT       += network
CONFIG   += openssl
CONFIG   += c++11
CONFIG   += static
CONFIG   += crypto
INCLUDEPATH += /home/nothawthorne/Projects/umbra/src/qca/include/QtCrypto
LIBS += -L/home/nothawthorne/Projects/umbra/src/qca/lib -lqca

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = umbra
TEMPLATE = app

DESTDIR = ../bin
CONFIG(debug, debug|release) {
        TARGET = umbra
        OBJECTS_DIR = ../bin/src
        MOC_DIR = ../bin/src
}

SOURCES += src/main.cpp\
    cryptocpp/validat1.cpp \
    cryptocpp/sha3.cpp \
    cryptocpp/gfpcrypt.cpp \
    cryptocpp/bench2.cpp \
    cryptocpp/algebra.cpp \
    cryptocpp/validat2.cpp \
    cryptocpp/salsa.cpp \
    cryptocpp/rijndael.cpp \
    cryptocpp/regtest.cpp \
    cryptocpp/panama.cpp \
    cryptocpp/osrng.cpp \
    cryptocpp/eccrypto.cpp \
    cryptocpp/dsa.cpp \
    cryptocpp/datatest.cpp \
    cryptocpp/bench.cpp \
    cryptocpp/validat3.cpp \
    cryptocpp/hex.cpp \
    cryptocpp/base32.cpp \
    cryptocpp/skipjack.cpp \
    cryptocpp/idea.cpp \
    cryptocpp/gf2n.cpp \
    cryptocpp/ec2n.cpp \
    cryptocpp/zdeflate.cpp \
    cryptocpp/iterhash.cpp \
    cryptocpp/cpu.cpp \
    cryptocpp/wake.cpp \
    cryptocpp/tea.cpp \
    cryptocpp/square.cpp \
    cryptocpp/randpool.cpp \
    cryptocpp/modes.cpp \
    cryptocpp/integer.cpp \
    cryptocpp/pubkey.cpp \
    cryptocpp/files.cpp \
    cryptocpp/cryptlib.cpp \
    cryptocpp/base64.cpp \
    cryptocpp/sha.cpp \
    cryptocpp/misc.cpp \
    cryptocpp/gost.cpp \
    cryptocpp/fipstest.cpp \
    cryptocpp/twofish.cpp \
    cryptocpp/queue.cpp \
    cryptocpp/gcm.cpp \
    cryptocpp/asn.cpp \
    cryptocpp/mars.cpp \
    cryptocpp/dlltest.cpp \
    cryptocpp/zinflate.cpp \
    cryptocpp/squaretb.cpp \
    cryptocpp/simple.cpp \
    cryptocpp/network.cpp \
    cryptocpp/md2.cpp \
    cryptocpp/hmac.cpp \
    cryptocpp/blumshub.cpp \
    cryptocpp/basecode.cpp \
    cryptocpp/3way.cpp \
    cryptocpp/zlib.cpp \
    cryptocpp/whrlpool.cpp \
    cryptocpp/wait.cpp \
    cryptocpp/shacal2.cpp \
    cryptocpp/rdtables.cpp \
    cryptocpp/mqueue.cpp \
    cryptocpp/fipsalgt.cpp \
    cryptocpp/emsa2.cpp \
    cryptocpp/dh2.cpp \
    cryptocpp/cryptlib_bds.cpp \
    cryptocpp/crc.cpp \
    cryptocpp/cmac.cpp \
    cryptocpp/cbcmac.cpp \
    cryptocpp/casts.cpp \
    cryptocpp/trdlocal.cpp \
    cryptocpp/strciphr.cpp \
    cryptocpp/socketft.cpp \
    cryptocpp/shark.cpp \
    cryptocpp/rw.cpp \
    cryptocpp/ripemd.cpp \
    cryptocpp/pkcspad.cpp \
    cryptocpp/md5.cpp \
    cryptocpp/gf2_32.cpp \
    cryptocpp/fips140.cpp \
    cryptocpp/esign.cpp \
    cryptocpp/eax.cpp \
    cryptocpp/dll.cpp \
    cryptocpp/default.cpp \
    cryptocpp/channels.cpp \
    cryptocpp/ccm.cpp \
    cryptocpp/camellia.cpp \
    cryptocpp/arc4.cpp \
    cryptocpp/xtrcrypt.cpp \
    cryptocpp/ttmac.cpp \
    cryptocpp/tigertab.cpp \
    cryptocpp/tiger.cpp \
    cryptocpp/tftables.cpp \
    cryptocpp/sosemanuk.cpp \
    cryptocpp/sharkbox.cpp \
    cryptocpp/seed.cpp \
    cryptocpp/rsa.cpp \
    cryptocpp/rc6.cpp \
    cryptocpp/rc2.cpp \
    cryptocpp/md4.cpp \
    cryptocpp/gf256.cpp \
    cryptocpp/eprecomp.cpp \
    cryptocpp/dh.cpp \
    cryptocpp/rng.cpp \
    cryptocpp/rc5.cpp \
    cryptocpp/rabin.cpp \
    cryptocpp/pssr.cpp \
    cryptocpp/pch.cpp \
    cryptocpp/nbtheory.cpp \
    cryptocpp/marss.cpp \
    cryptocpp/ida.cpp \
    cryptocpp/hrtimer.cpp \
    cryptocpp/gzip.cpp \
    cryptocpp/cast.cpp \
    cryptocpp/algparam.cpp \
    cryptocpp/adler32.cpp \
    cryptocpp/xtr.cpp \
    cryptocpp/vmac.cpp \
    cryptocpp/test.cpp \
    cryptocpp/serpent.cpp \
    cryptocpp/seal.cpp \
    cryptocpp/polynomi.cpp \
    cryptocpp/oaep.cpp \
    cryptocpp/mqv.cpp \
    cryptocpp/luc.cpp \
    cryptocpp/elgamal.cpp \
    cryptocpp/ecp.cpp \
    cryptocpp/dessp.cpp \
    cryptocpp/des.cpp \
    cryptocpp/blowfish.cpp \
    cryptocpp/bfinit.cpp \
    cryptocpp/authenc.cpp \
    cryptocpp/winpipes.cpp \
    cryptocpp/safer.cpp \
    cryptocpp/filters.cpp \
    src/messenger.cpp \
    src/umbra.cpp \
    src/settings.cpp \
    src/profile.cpp \
    src/loginPrompt.cpp \
    src/dukeSettings.cpp

HEADERS  += \
    src/crypto.h \
    cryptocpp/rw.h \
    cryptocpp/queue.h \
    cryptocpp/panama.h \
    cryptocpp/factory.h \
    cryptocpp/cryptlib.h \
    cryptocpp/config.h \
    cryptocpp/blowfish.h \
    cryptocpp/validate.h \
    cryptocpp/sha3.h \
    cryptocpp/secblock.h \
    cryptocpp/misc.h \
    cryptocpp/gfpcrypt.h \
    cryptocpp/eccrypto.h \
    cryptocpp/stdcpp.h \
    cryptocpp/osrng.h \
    cryptocpp/filters.h \
    cryptocpp/square.h \
    cryptocpp/rijndael.h \
    cryptocpp/mqueue.h \
    cryptocpp/pubkey.h \
    cryptocpp/idea.h \
    cryptocpp/gf2n.h \
    cryptocpp/gcm.h \
    cryptocpp/files.h \
    cryptocpp/argnames.h \
    cryptocpp/smartptr.h \
    cryptocpp/pwdbased.h \
    cryptocpp/skipjack.h \
    cryptocpp/integer.h \
    cryptocpp/cpu.h \
    cryptocpp/wake.h \
    cryptocpp/oids.h \
    cryptocpp/modes.h \
    cryptocpp/mars.h \
    cryptocpp/twofish.h \
    cryptocpp/gost.h \
    cryptocpp/algparam.h \
    cryptocpp/xtr.h \
    cryptocpp/trunhash.h \
    cryptocpp/seal.h \
    cryptocpp/rsa.h \
    cryptocpp/ripemd.h \
    cryptocpp/rc2.h \
    cryptocpp/oaep.h \
    cryptocpp/md2.h \
    cryptocpp/ida.h \
    cryptocpp/3way.h \
    cryptocpp/zinflate.h \
    cryptocpp/xtrcrypt.h \
    cryptocpp/wait.h \
    cryptocpp/vmac.h \
    cryptocpp/ttmac.h \
    cryptocpp/tea.h \
    cryptocpp/socketft.h \
    cryptocpp/shark.h \
    cryptocpp/serpentp.h \
    cryptocpp/rng.h \
    cryptocpp/resource.h \
    cryptocpp/polynomi.h \
    cryptocpp/hex.h \
    cryptocpp/cmac.h \
    cryptocpp/ccm.h \
    cryptocpp/basecode.h \
    cryptocpp/arc4.h \
    cryptocpp/adhoc.cpp.proto \
    cryptocpp/winpipes.h \
    cryptocpp/shacal2.h \
    cryptocpp/serpent.h \
    cryptocpp/seed.h \
    cryptocpp/rc6.h \
    cryptocpp/pssr.h \
    cryptocpp/nr.h \
    cryptocpp/gf256.h \
    cryptocpp/gf2_32.h \
    cryptocpp/eprecomp.h \
    cryptocpp/ecp.h \
    cryptocpp/dll.h \
    cryptocpp/bench.h \
    cryptocpp/authenc.h \
    cryptocpp/algebra.h \
    cryptocpp/trdlocal.h \
    cryptocpp/tiger.h \
    cryptocpp/seckey.h \
    cryptocpp/salsa.h \
    cryptocpp/safer.h \
    cryptocpp/rc5.h \
    cryptocpp/pch.h \
    cryptocpp/nbtheory.h \
    cryptocpp/modarith.h \
    cryptocpp/md5.h \
    cryptocpp/hrtimer.h \
    cryptocpp/hmac.h \
    cryptocpp/gzip.h \
    cryptocpp/fltrimpl.h \
    cryptocpp/esign.h \
    cryptocpp/ec2n.h \
    cryptocpp/dsa.h \
    cryptocpp/dh2.h \
    cryptocpp/dh.h \
    cryptocpp/default.h \
    cryptocpp/channels.h \
    cryptocpp/base32.h \
    cryptocpp/asn.h \
    cryptocpp/aes.h \
    cryptocpp/zdeflate.h \
    cryptocpp/words.h \
    cryptocpp/whrlpool.h \
    cryptocpp/rabin.h \
    cryptocpp/pkcspad.h \
    cryptocpp/md4.h \
    cryptocpp/fips140.h \
    cryptocpp/emsa2.h \
    cryptocpp/elgamal.h \
    cryptocpp/eax.h \
    cryptocpp/crc.h \
    cryptocpp/cast.h \
    cryptocpp/blumshub.h \
    cryptocpp/base64.h \
    cryptocpp/zlib.h \
    cryptocpp/strciphr.h \
    cryptocpp/sosemanuk.h \
    cryptocpp/simple.h \
    cryptocpp/sha.h \
    cryptocpp/randpool.h \
    cryptocpp/network.h \
    cryptocpp/modexppc.h \
    cryptocpp/mdc.h \
    cryptocpp/luc.h \
    cryptocpp/lubyrack.h \
    cryptocpp/iterhash.h \
    cryptocpp/des.h \
    cryptocpp/cbcmac.h \
    cryptocpp/camellia.h \
    cryptocpp/mqv.h \
    cryptocpp/dmac.h \
    cryptocpp/adler32.h \
    src/messenger.h \
    src/umbra.h \
    src/settings.h \
    src/constructors.h \
    src/profile.h \
    src/loginPrompt.h \
    src/dukeSettings.h

FORMS    += \
    src/messenger.ui \
    src/umbra.ui \
    src/settings.ui \
    src/profile.ui \
    src/loginPrompt.ui \
    src/dukeSettings.ui

RESOURCES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/ -lssl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/ -lssl
else:unix: LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/ -lssl

INCLUDEPATH += $$PWD/../../../../../usr/lib/x86_64-linux-gnu
DEPENDPATH += $$PWD/../../../../../usr/lib/x86_64-linux-gnu

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/libssl.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/libssl.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/ssl.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/ssl.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/libssl.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/ -lcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/ -lcrypto
else:unix: LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/ -lcrypto

INCLUDEPATH += $$PWD/../../../../../usr/lib/x86_64-linux-gnu
DEPENDPATH += $$PWD/../../../../../usr/lib/x86_64-linux-gnu

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/libcrypto.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/libcrypto.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/crypto.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/crypto.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/libcrypto.a
