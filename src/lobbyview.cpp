#include "game/View/lobbyview.hpp"

game::LobbyView::LobbyView(QWidget *parent)
    : QWidget(parent)
{
    this->setGeometry(game::L1Dimensions);
    this->m_Palette.setBrush(QPalette::Background, QBrush(QImage(":/data/images/f10001.jpg")));
    this->setAutoFillBackground(true);
    this->setPalette(this->m_Palette);
}

game::LobbyView::~LobbyView()
{

}

void game::LobbyView::Setup()
{
    /*
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
    */

    this->m_Buttons[0].setParent(this);
    this->m_Buttons[0].setGeometry(30, 40, 171, 31);
    this->m_Buttons[0].setText(QString("Select Place"));
    this->m_Buttons[0].show();

    this->m_Buttons[1].setParent(this);
    this->m_Buttons[1].setGeometry(30, 80, 171, 31);
    this->m_Buttons[1].setText(QString("Shop"));
    this->m_Buttons[1].show();

    this->m_Buttons[2].setParent(this);
    this->m_Buttons[2].setGeometry(30, 120, 171, 31);
    this->m_Buttons[2].setText(QString("Sell Fish"));
    this->m_Buttons[2].show();

    this->m_Buttons[3].setParent(this);
    this->m_Buttons[3].setGeometry(30, 160, 171, 31);
    this->m_Buttons[3].setText(QString("Travel"));
    this->m_Buttons[3].show();

    this->m_Buttons[4].setParent(this);
    this->m_Buttons[4].setGeometry(30, 200, 171, 31);
    this->m_Buttons[4].setText(QString("Food"));
    this->m_Buttons[4].show();

    this->m_Buttons[5].setParent(this);
    this->m_Buttons[5].setGeometry(30, 240, 171, 31);
    this->m_Buttons[5].setText(QString("Settings"));
    this->m_Buttons[5].show();

    this->m_Buttons[6].setParent(this);
    this->m_Buttons[6].setGeometry(30, 480, 171, 31);
    this->m_Buttons[6].setText(QString("Exit"));
    this->m_Buttons[6].show();
}
