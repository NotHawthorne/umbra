#include "src/uError.h"
#include "ui_uError.h"

uError::uError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uError)
{
    ui->setupUi(this);
}

uError::~uError()
{
    delete ui;
}
