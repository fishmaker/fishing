#include "game/Controller/hotelcontroller.hpp"

game::HotelController::HotelController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new HotelView();
    this->m_View->Setup();
}

game::HotelController::~HotelController()
{

}

void game::HotelController::Startup()
{
    this->m_View->show();
}

void game::HotelController::Endup()
{
    this->m_View->hide();

}
