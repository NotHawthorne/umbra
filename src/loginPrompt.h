#ifndef LOGINPROMPT_H
#define LOGINPROMPT_H

#include <QDockWidget>

namespace Ui {
class loginPrompt;
}

class loginPrompt : public QDockWidget
{
    Q_OBJECT

public:
    explicit loginPrompt(QWidget *parent = 0);
    ~loginPrompt();
    Ui::loginPrompt *ui;

protected:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    QPoint dragPosition;
};

#endif // LOGINPROMPT_H
