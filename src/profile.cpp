#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>

#include "src/profile.h"
#include "ui_profile.h"

profile::profile(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
}

profile::~profile()
{
    delete ui;
}

void profile::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void profile::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}
