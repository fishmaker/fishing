#include "game/View/shopview.hpp"
#include "ui_shopview.h"

ShopView::ShopView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShopView)
{
    ui->setupUi(this);
}

ShopView::~ShopView()
{
    delete ui;
}
