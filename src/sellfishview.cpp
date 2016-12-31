#include "game/View/sellfishview.hpp"
#include "ui_sellfishview.h"

SellFishView::SellFishView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SellFishView)
{
    ui->setupUi(this);
}

SellFishView::~SellFishView()
{
    delete ui;
}
