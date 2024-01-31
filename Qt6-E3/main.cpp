#include <QCoreApplication>
#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QTextStream>
#include <QDebug>

using namespace std;

void do_cpp(){
    string name;
    cout << "Please enter your name:";
    getline(cin, name);
    cout << "Hello" << name << endl;
}

void do_qt(){
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Please enter your name:";
    qout.flush();
    QString name = qin.readLine();
    qout << "Hello " << name;
    qout.flush();
}

void do_mixed(){
    QTextStream qin(stdin);
    qInfo() << "Please enter your name";
    QString name = qin.readLine();
    qInfo() << "Hello" << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do_mixed();
    return a.exec();
}
