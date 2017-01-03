#include "game/View/lobbyview.hpp"

game::LobbyView::LobbyView(QWidget *parent)
    : QWidget(parent)
{
    this->setGeometry(0, 0, 1000, 550);
}

game::LobbyView::~LobbyView()
{

}

void game::LobbyView::Setup()
{
    this->m_Labels[0].setParent(this);
    this->m_Labels[0].setGeometry(370, 320, 64, 64);
    //this->m_Labels[0].setPixmap();
    this->m_Labels[0].show();

    this->m_Labels[1].setParent(this);
    this->m_Labels[1].setGeometry(370, 320, 64, 64);
    //this->m_Labels[1].setPixmap();
    this->m_Labels[1].show();

    this->m_Labels[2].setParent(this);
    this->m_Labels[2].setGeometry(370, 320, 64, 64);
    //this->m_Labels[2].setPixmap();
    this->m_Labels[2].show();

    this->m_Labels[3].setParent(this);
    this->m_Labels[3].setGeometry(370, 320, 64, 64);
    //this->m_Labels[3].setPixmap();
    this->m_Labels[3].show();

    this->m_Labels[4].setParent(this);
    this->m_Labels[4].setGeometry(370, 320, 64, 64);
    //this->m_Labels[4].setPixmap();
    this->m_Labels[4].show();

    this->m_Labels[5].setParent(this);
    this->m_Labels[5].setGeometry(370, 320, 64, 64);
    //this->m_Labels[5].setPixmap();
    this->m_Labels[5].show();

    this->m_Labels[6].setParent(this);
    this->m_Labels[6].setGeometry(370, 320, 64, 64);
    //this->m_Labels[6].setPixmap();
    this->m_Labels[6].show();

    this->m_Labels[7].setParent(this);
    this->m_Labels[7].setGeometry(370, 320, 64, 64);
    //this->m_Labels[7].setPixmap();
    this->m_Labels[7].show();

    this->m_Labels[8].setParent(this);
    this->m_Labels[8].setGeometry(370, 320, 64, 64);
    //this->m_Labels[8].setPixmap();
    this->m_Labels[8].show();

    this->m_Labels[9].setParent(this);
    this->m_Labels[9].setGeometry(370, 320, 64, 64);
    //this->m_Labels[9].setPixmap();
    this->m_Labels[9].show();
}
