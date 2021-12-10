#include "calibrationwidget.h"
#include "./ui_calibrationwidget.h"

CalibrationWidget::CalibrationWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalibrationWidget)
{
    ui->setupUi(this);
}

CalibrationWidget::~CalibrationWidget()
{
    delete ui;
}

