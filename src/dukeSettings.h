#ifndef DUKESETTINGS_H
#define DUKESETTINGS_H

#include <QDockWidget>

namespace Ui {
class dukeSettings;
}

class dukeSettings : public QDockWidget
{
    Q_OBJECT

public:
    explicit dukeSettings(QWidget *parent = 0);
    ~dukeSettings();
    Ui::dukeSettings *ui;

protected:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    QPoint dragPosition;
};

#endif // DUKESETTINGS_H
