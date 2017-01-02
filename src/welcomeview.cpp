#include "game/View/welcomeview.hpp"
#include "ui_welcomeview.h"

game::WelcomeView::WelcomeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WelcomeView)
{
    ui->setupUi(this);

    this->m_Model = new game::WelcomeModel();
    this->m_Controller = new game::WelcomeController();
}

game::WelcomeView::~WelcomeView()
{
    delete ui;
    delete this->m_Model;
    delete this->m_Controller;
}

void game::WelcomeView::Startup()
{
    this->m_Controller->setView(this);
    this->m_Controller->setModel(this->m_Model);
}

void game::WelcomeView::Endup()
{

}
