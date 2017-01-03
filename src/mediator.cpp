#include "game/mediator.hpp"

game::Mediator::Mediator()
{
    // User setup
    this->m_MainPlayer = new Player();

    // Default Window Setup
    this->m_ParentWindow = new game::DefaultWindow();
    this->m_ParentWindow->setGeometry(0, 0, 1000, 550);
    this->m_ParentWindow->show();

    // All others windows setup
    // TODO: Lazy Initialization
    this->m_Welcome = new game::WelcomeController(this->m_ParentWindow);
    this->m_Lobby = new game::LobbyController(this->m_ParentWindow);
    this->m_SelectPlayer = new game::SelectPlayerController();
    this->m_CreatePlayer = new game::CreatePlayerController();
    this->m_SelectPlace = new game::SelectPlaceController();

    // QObject::connect()
    QObject::connect(this->m_Welcome, SIGNAL(Sig_Key0_Clicked()), this, SLOT(OnWelcomeKey0_Clicked()));
}

game::Mediator::~Mediator()
{
    delete this->m_MainPlayer;
    delete this->m_ParentWindow;
    delete this->m_Welcome;
    delete this->m_Lobby;
    delete this->m_SelectPlace;
    delete this->m_SelectPlayer;
    delete this->m_CreatePlayer;
}

void game::Mediator::OnWelcomeKey0_Clicked()
{
    this->m_SelectPlayer->Startup();
}

void game::Mediator::Start()
{
    this->m_CurrentHolder = FN_WELCOME;
    this->m_Welcome->Startup();
    //this->m_FormControllers[FN_WELCOME]->Show();
}

game::Player* game::Mediator::GetPlayer()
{
    return m_MainPlayer;
}
