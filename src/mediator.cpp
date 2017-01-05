#include "game/mediator.hpp"

#include <QtCore>
#include <QStyle>
#include <QWidget>
#include <QApplication>
#include <QDesktopWidget>

#include "game/common/globalsettings.hpp"
#include "game/Controller/welcomecontroller.hpp"
#include "game/Controller/lobbycontroller.hpp"
#include "game/Controller/selectplayercontroller.hpp"
#include "game/Controller/createplayercontroller.hpp"
#include "game/Controller/selectplacecontroller.hpp"
#include "game/Controller/fishinggamecontroller.hpp"

game::Mediator::Mediator()
{
    // Default Window Setup
    this->m_ParentWindow = new game::DefaultWindow();
    this->m_ParentWindow->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, game::szL1Dimensions, qApp->desktop()->availableGeometry()));
    this->m_ParentWindow->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->m_ParentWindow->show();

    // All others windows setup
    // TODO: Lazy Initialization
    this->m_Forms[FN_WELCOME] = new game::WelcomeController(this->m_ParentWindow);
    this->m_Forms[FN_LOBBY] = new game::LobbyController(this->m_ParentWindow);
    this->m_Forms[FN_SELECTPLAYER] = new game::SelectPlayerController();
    this->m_Forms[FN_CREATENEW] = new game::CreatePlayerController();
    this->m_Forms[FN_SELECTPLACE] = new game::SelectPlaceController();
    this->m_Forms[FN_FISHINGGAME] = new game::FishingGameController(this->m_ParentWindow);

    // QObject::connect()
    QObject::connect(this->m_Forms[FN_WELCOME], SIGNAL(Sig_Key0_Clicked()), this, SLOT(OnWelcomeKey0_Clicked()));
    QObject::connect(this->m_Forms[FN_SELECTPLAYER], SIGNAL(Sig_Key0_Clicked()), this, SLOT(OnSelectPlayerKey0_Clicked()));
    QObject::connect(this->m_Forms[FN_SELECTPLAYER], SIGNAL(Sig_Key1_Clicked()), this, SLOT(OnSelectPlayerKey1_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key0_Clicked()), this, SLOT(OnLobbyKey0_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key1_Clicked()), this, SLOT(OnLobbyKey1_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key2_Clicked()), this, SLOT(OnLobbyKey2_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key3_Clicked()), this, SLOT(OnLobbyKey3_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key4_Clicked()), this, SLOT(OnLobbyKey4_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key5_Clicked()), this, SLOT(OnLobbyKey5_Clicked()));
    QObject::connect(this->m_Forms[FN_LOBBY], SIGNAL(Sig_Key6_Clicked()), this, SLOT(OnLobbyKey6_Clicked()));
}

game::Mediator::~Mediator()
{
    delete this->m_Forms[FN_SELECTPLAYER];
    delete this->m_Forms[FN_CREATENEW];
    delete this->m_Forms[FN_SELECTPLACE];
    delete this->m_Forms[FN_WELCOME];
    delete this->m_Forms[FN_LOBBY];
    delete this->m_ParentWindow;    // must be last!
}

void game::Mediator::OnWelcomeKey0_Clicked()
{
    dynamic_cast<IFormBase*>(this->m_Forms[FN_SELECTPLAYER])->Startup();
}

void game::Mediator::OnSelectPlayerKey0_Clicked()
{
    // TODO: check correctness
    // TODO: check file corrupt
    // TODO: read player
    // TODO: throw exceptions
    dynamic_cast<IFormBase*>(this->m_Forms[FN_LOBBY])->Startup();
    dynamic_cast<IFormBase*>(this->m_Forms[FN_SELECTPLAYER])->Endup();
    dynamic_cast<IFormBase*>(this->m_Forms[FN_WELCOME])->Endup();
}

void game::Mediator::OnSelectPlayerKey1_Clicked()
{
    dynamic_cast<IFormBase*>(this->m_Forms[FN_CREATENEW])->Startup();
    dynamic_cast<IFormBase*>(this->m_Forms[FN_SELECTPLAYER])->Endup();
}

void game::Mediator::Start()
{
    dynamic_cast<IFormBase*>(this->m_Forms[FN_WELCOME])->Startup();
}

void game::Mediator::OnLobbyKey0_Clicked()
{
    dynamic_cast<IFormBase*>(this->m_Forms[FN_SELECTPLACE])->Startup();
}

void game::Mediator::OnLobbyKey1_Clicked()
{
    // TODO: DEBUG - remove it
    dynamic_cast<IFormBase*>(this->m_Forms[FN_LOBBY])->Endup();
    dynamic_cast<IFormBase*>(this->m_Forms[FN_FISHINGGAME])->Startup();
}

void game::Mediator::OnLobbyKey2_Clicked()
{

}

void game::Mediator::OnLobbyKey3_Clicked()
{

}

void game::Mediator::OnLobbyKey4_Clicked()
{

}

void game::Mediator::OnLobbyKey5_Clicked()
{

}

void game::Mediator::OnLobbyKey6_Clicked()
{
    QApplication::quit();
}
