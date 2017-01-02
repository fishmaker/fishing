#include <QApplication>

#include "game/gameengine.hpp"

#include "game/globaldatabase.hpp"
#include "game/fish.hpp"

#include "game/Controller/welcomecontroller.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game::WelcomeController a_Controller;

    a_Controller.Show();

    return a.exec();
}
