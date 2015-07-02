#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDockWidget>

namespace Ui {
class settings;
}

class settings : public QDockWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = 0);
    ~settings();
    Ui::settings *ui;

protected:
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private slots:
    void previewColor();
    void enableAddressBox();
    void disableAddressBox();
    void toggleAddressBox();

private:
    QPoint dragPosition;
};

#endif // SETTINGS_H
