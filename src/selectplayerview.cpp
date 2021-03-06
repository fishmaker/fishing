#include "game/View/selectplayerview.hpp"

#include <QStyle>
#include <QApplication>
#include <QDesktopWidget>

game::SelectPlayerView::SelectPlayerView(QWidget *a_Parent)
    : QWidget(a_Parent)
{
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, game::szL3Dimensions, qApp->desktop()->availableGeometry()));
    this->setWindowModality(Qt::ApplicationModal);
}

game::SelectPlayerView::~SelectPlayerView()
{

}

void game::SelectPlayerView::Setup()
{
    this->m_ComboBox[0].setGeometry(20, 60, 261, 23);
    this->m_ComboBox[0].setParent(this);
    this->m_ComboBox[0].show();

    this->m_Labels[0].setText(QString("Select player"));
    this->m_Labels[0].setGeometry(110, 30, 91, 16);
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].show();

    this->m_Buttons[0].setGeometry(80, 100, 151, 31);
    this->m_Buttons[0].setText(QString("Play"));
    this->m_Buttons[0].setParent(this);
    this->m_Buttons[0].show();

    this->m_Buttons[1].setGeometry(80, 140, 151, 31);
    this->m_Buttons[1].setText(QString("Register"));
    this->m_Buttons[1].setParent(this);
    this->m_Buttons[1].show();
}
