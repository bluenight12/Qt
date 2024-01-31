#ifndef QOPENCV_H
#define QOPENCV_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QOpenCV;
}
QT_END_NAMESPACE

class QOpenCV : public QMainWindow
{
    Q_OBJECT

public:
    QOpenCV(QWidget *parent = nullptr);
    ~QOpenCV();

private:
    Ui::QOpenCV *ui;
};
#endif // QOPENCV_H
