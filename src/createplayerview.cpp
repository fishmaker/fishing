#include "game/View/createplayerview.hpp"

#include <QStyle>
#include <QApplication>
#include <QDesktopWidget>

game::CreatePlayerView::CreatePlayerView(QWidget *a_Parent)
    : QWidget(a_Parent)
{
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, game::szL3Dimensions, qApp->desktop()->availableGeometry()));
    this->setWindowModality(Qt::ApplicationModal);
}

game::CreatePlayerView::~CreatePlayerView()
{

}

void game::CreatePlayerView::Setup()
{
    this->m_Labels[0].setText(QString("Please enter your name"));
    this->m_Labels[0].setGeometry(70, 30, 181, 16);
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].show();

    this->m_Buttons[0].setGeometry(80, 100, 151, 31);
    this->m_Buttons[0].setText(QString("Play"));
    this->m_Buttons[0].setParent(this);
    this->m_Buttons[0].show();

    this->m_LineEdit[0].setGeometry(30, 50, 241, 23);
    this->m_LineEdit[0].setParent(this);
    this->m_LineEdit[0].show();
}
