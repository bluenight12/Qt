#include <QCoreApplication>

#include "test.h"
#include "cat.h"

//클래스의 복사는 허용되지 않는다
void testing(Cat &cat){
    qInfo() << "Address : " << &cat;
}

void testing2(Cat *cat){
    qInfo() << "Address : " << cat;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    kitty.setObjectName("Kitty");
    testing(kitty);
    testing2(&kitty);

    Cat death;
    death.setObjectName("Grim Reaper");
    testing(death);
    testing2(&death);

    Test test;

    //Connect the signal and the slot
    QObject::connect(&test, &Test::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    test.dostuff();
    int value = a.exec();
    qInfo() << "Exit value:" << value;

    return value;
}
