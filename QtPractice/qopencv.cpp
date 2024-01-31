#include "qopencv.h"
#include "./ui_qopencv.h"
#include "opencv2/opencv.hpp"

QOpenCV::QOpenCV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QOpenCV)
{
    ui->setupUi(this);

}

QOpenCV::~QOpenCV()
{
    delete ui;
}
