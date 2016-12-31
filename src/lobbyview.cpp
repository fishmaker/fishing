#include "game/View/lobbyview.hpp"
#include "ui_lobbyview.h"

LobbyView::LobbyView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LobbyView)
{
    ui->setupUi(this);
}

LobbyView::~LobbyView()
{
    delete ui;
}
