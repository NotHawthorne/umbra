#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>

#include "loginPrompt.h"
#include "ui_loginPrompt.h"

loginPrompt::loginPrompt(QWidget *parent) :
    QDockWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::loginPrompt)
{
    ui->setupUi(this);
}

loginPrompt::~loginPrompt()
{
    delete ui;
}

void loginPrompt::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void loginPrompt::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}
