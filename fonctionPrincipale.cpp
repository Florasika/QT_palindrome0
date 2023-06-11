#include <QApplication>
#include "palindrome.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Palindrome fenetre;
    fenetre.show();


    return app.exec();
}
