#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>

#include "dukeSettings.h"
#include "ui_dukeSettings.h"

dukeSettings::dukeSettings(QWidget *parent) :
    QDockWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::dukeSettings)
{
    ui->setupUi(this);
}

dukeSettings::~dukeSettings()
{
    delete ui;
}

void dukeSettings::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void dukeSettings::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}
