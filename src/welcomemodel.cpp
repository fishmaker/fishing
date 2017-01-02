#include "game/Model/welcomemodel.hpp"

const QRect game::WelcomeModel::s_Geometry = QRect(0, 0, 1600, 900);

game::WelcomeModel::WelcomeModel(QWidget *a_Parent)
    : m_Parent(a_Parent)
{
    this->m_Labels[0] = new QLabel(this->m_Parent);

    Setup();
}

game::WelcomeModel::~WelcomeModel()
{

}

void game::WelcomeModel::Setup()
{
    this->m_Labels[0]->setGeometry(0, 0, 20, 14);
    this->m_Labels[0]->setText("Hello!");
    this->m_Labels[0]->show();
}








