#include "include/game/View/travelview.hpp"
#include "ui_travelview.h"

TravelView::TravelView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TravelView)
{
    ui->setupUi(this);
}

TravelView::~TravelView()
{
    delete ui;
}
