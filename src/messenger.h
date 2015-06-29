#ifndef MESSENGER_H
#define MESSENGER_H

#include <QDockWidget>

namespace Ui {
class messenger;
}

class messenger : public QDockWidget
{
    Q_OBJECT

public:
    explicit messenger(QWidget *parent = 0);
    ~messenger();
    Ui::messenger *ui;

protected:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    QPoint dragPosition;
    std::vector<QString> *conversations;
};

#endif // MESSENGER_H
