#include <QApplication>

#include "game/globaldatabase.hpp"

#include "game/mediator.hpp"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game::Mediator a_Mediator;

    a_Mediator.Start();

    return a.exec();
}
