#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Criação e exibição da janela principal
    MainWindow mainWindow;
    mainWindow.show();

    // Inicia o loop principal do aplicativo
    return app.exec();
}
