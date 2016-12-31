#include "include/game/View/fishingview.hpp"
#include "ui_fishingview.h"

FishingView::FishingView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FishingView)
{
    ui->setupUi(this);
}

FishingView::~FishingView()
{
    delete ui;
}
