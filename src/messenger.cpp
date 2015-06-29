#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>

#include "messenger.h"
#include "ui_messenger.h"

messenger::messenger(QWidget *parent) :
    QDockWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::messenger)
{
    ui->setupUi(this);
    conversations = new std::vector<QString>;
}

messenger::~messenger()
{
    delete ui;
}
void messenger::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void messenger::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}
