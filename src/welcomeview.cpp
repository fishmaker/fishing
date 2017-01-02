#include "game/View/welcomeview.hpp"

game::WelcomeView::WelcomeView(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(game::WelcomeModel::s_Geometry);
}

game::WelcomeView::~WelcomeView()
{

}

void game::WelcomeView::setModel(game::WelcomeModel *Model)
{
    m_Model = Model;
}
