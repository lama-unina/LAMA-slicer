//
// Created by LAMA-unina
//

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QPushButton button("test", nullptr);
    button.resize(100, 50);
    button.show();
    return QApplication::exec();
}