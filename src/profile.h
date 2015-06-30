#ifndef PROFILE_H
#define PROFILE_H

#include <QDockWidget>

namespace Ui {
class profile;
}

class profile : public QDockWidget
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = 0);
    ~profile();
    Ui::profile *ui;

private slots:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    QPoint dragPosition;
};

#endif // PROFILE_H
