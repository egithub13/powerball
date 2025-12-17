#include "mainwindow.h"

#include <QApplication>

#include <QPalette>
#include <QStyleFactory>

void setDarkPalette(QApplication &app)
{
    app.setStyle(QStyleFactory::create("Fusion"));

    QPalette dark;

    dark.setColor(QPalette::Window, QColor(53, 53, 53));
    dark.setColor(QPalette::WindowText, Qt::white);
    dark.setColor(QPalette::Base, QColor(42, 42, 42));
    dark.setColor(QPalette::AlternateBase, QColor(66, 66, 66));
    dark.setColor(QPalette::ToolTipBase, Qt::white);
    dark.setColor(QPalette::ToolTipText, Qt::white);
    dark.setColor(QPalette::Text, Qt::white);
    dark.setColor(QPalette::Button, QColor(53, 53, 53));
    dark.setColor(QPalette::ButtonText, Qt::white);
    dark.setColor(QPalette::BrightText, Qt::red);
    dark.setColor(QPalette::Link, QColor(42, 130, 218));
    dark.setColor(QPalette::Highlight, QColor(42, 130, 218));
    dark.setColor(QPalette::HighlightedText, Qt::black);

    app.setPalette(dark);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    setDarkPalette(app);

    MainWindow w;
    w.show();

    return app.exec();
}

