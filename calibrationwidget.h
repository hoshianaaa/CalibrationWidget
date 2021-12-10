#ifndef CALIBRATIONWIDGET_H
#define CALIBRATIONWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CalibrationWidget; }
QT_END_NAMESPACE

class CalibrationWidget : public QWidget
{
    Q_OBJECT

public:
    CalibrationWidget(QWidget *parent = nullptr);
    ~CalibrationWidget();

private:
    Ui::CalibrationWidget *ui;
};
#endif // CALIBRATIONWIDGET_H
