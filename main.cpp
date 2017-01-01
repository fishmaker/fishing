#include <QApplication>

#include "game/gameengine.hpp"

#include "game/globaldatabase.hpp"
#include "game/fish.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game::GlobalDatabase gb;

    game::Fish *tmp = gb.GetNewFish(0, 10, 10, L"Марьянка", L"Опарыш");


    return a.exec();
}
