#include "include/game/View/selectplaceview.hpp"
#include "ui_selectplaceview.h"

SelectPlaceView::SelectPlaceView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectPlaceView)
{
    ui->setupUi(this);
}

SelectPlaceView::~SelectPlaceView()
{
    delete ui;
}
