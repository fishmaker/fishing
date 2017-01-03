#include "game/View/selectplaceview.hpp"

game::SelectPlaceView::SelectPlaceView(QWidget *a_Parent)
    : QWidget(a_Parent)
{    
    this->setGeometry(0, 0, 300, 200);
}

game::SelectPlaceView::~SelectPlaceView()
{

}

void game::SelectPlaceView::Setup()
{
    this->m_Labels[0].setGeometry(210, 200, 16, 16);
    this->m_Labels[0].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[0].setText(QString("O"));
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].show();

    this->m_Labels[1].setGeometry(250, 270, 16, 16);
    this->m_Labels[1].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[1].setText(QString("O"));
    this->m_Labels[1].setParent(this);
    this->m_Labels[1].show();

    this->m_Labels[2].setGeometry(380, 300, 16, 16);
    this->m_Labels[2].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[2].setText(QString("O"));
    this->m_Labels[2].setParent(this);
    this->m_Labels[2].show();

    this->m_Labels[3].setGeometry(360, 160, 16, 16);
    this->m_Labels[3].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[3].setText(QString("O"));
    this->m_Labels[3].setParent(this);
    this->m_Labels[3].show();

    this->m_Labels[4].setGeometry(550, 170, 16, 16);
    this->m_Labels[4].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[4].setText(QString("O"));
    this->m_Labels[4].setParent(this);
    this->m_Labels[4].show();

    this->m_Labels[5].setGeometry(440, 250, 16, 16);
    this->m_Labels[5].setFont(QFont("Sans serif", 14, 75));
    this->m_Labels[5].setText(QString("O"));
    this->m_Labels[5].setParent(this);
    this->m_Labels[5].show();

}
