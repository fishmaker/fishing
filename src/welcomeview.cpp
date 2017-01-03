#include "game/View/welcomeview.hpp"

game::WelcomeView::WelcomeView(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(0, 0, 896, 504); // TODO: from settings
}

game::WelcomeView::~WelcomeView()
{

}

void game::WelcomeView::Setup()
{
    this->m_Labels[0].setGeometry(110, 120, 311, 71);
    this->m_Labels[0].setFont(QFont("Sans serif", 48));
    this->m_Labels[0].setText(QString("Welcome"));
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].show();

    this->m_PushButtons[0].setGeometry(50, 250, 211, 21);
    this->m_PushButtons[0].setText(QString("Single Player"));
    this->m_PushButtons[0].setParent(this);
    this->m_PushButtons[0].show();

    this->m_PushButtons[1].setGeometry(50, 280, 211, 21);
    this->m_PushButtons[1].setText(QString("Multi Player"));
    this->m_PushButtons[1].setParent(this);
    this->m_PushButtons[1].show();

    this->m_PushButtons[2].setGeometry(50, 310, 211, 21);
    this->m_PushButtons[2].setText(QString("Settings"));
    this->m_PushButtons[2].setParent(this);
    this->m_PushButtons[2].show();

    this->m_PushButtons[3].setGeometry(50, 340, 211, 21);
    this->m_PushButtons[3].setText(QString("Record Table"));
    this->m_PushButtons[3].setParent(this);
    this->m_PushButtons[3].show();

    this->m_PushButtons[4].setGeometry(50, 370, 211, 21);
    this->m_PushButtons[4].setText(QString("Exit"));
    this->m_PushButtons[4].setParent(this);
    this->m_PushButtons[4].show();
}
