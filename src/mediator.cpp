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

game::Mediator::Mediator()
{
    // User setup
    this->m_MainPlayer = new Player();

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

    // QObject::connect()
    QObject::connect(this->m_Forms[FN_WELCOME], SIGNAL(Sig_Key0_Clicked()), this, SLOT(OnWelcomeKey0_Clicked()));
}

game::Mediator::~Mediator()
{
    delete this->m_MainPlayer;
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

void game::Mediator::Start()
{
    this->m_CurrentHolder = FN_WELCOME;
    dynamic_cast<IFormBase*>(this->m_Forms[FN_WELCOME])->Startup();
}

game::Player* game::Mediator::GetPlayer()
{
    return m_MainPlayer;
}
