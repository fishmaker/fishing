#include "include/game/View/welcomeview.hpp"
#include "ui_welcomeview.h"

WelcomeView::WelcomeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WelcomeView)
{
    ui->setupUi(this);
}

WelcomeView::~WelcomeView()
{
    delete ui;
}
