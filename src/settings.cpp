#include <QtWidgets>
#include <QtNetwork>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QSoundEffect>

#include "src/settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    connect(ui->previewButton, SIGNAL(clicked()), this, SLOT(previewColor()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

settings::~settings()
{
    delete ui;
}

void settings::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}
void settings::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}


void settings::previewColor() {
    QString ss;
    ss.append("color: ");
    ss.append(ui->themeColorBox->text());
    ui->colorBox->setStyleSheet(ss);
}
