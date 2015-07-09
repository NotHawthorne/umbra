#ifndef UERROR_H
#define UERROR_H

#include <QDialog>

namespace Ui {
class uError;
}

class uError : public QDialog
{
    Q_OBJECT

public:
    explicit uError(QWidget *parent = 0);
    ~uError();
    Ui::uError *ui;

private:
};

#endif // UERROR_H
