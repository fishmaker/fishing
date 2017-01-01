#include "game/globaldatabase.hpp"

game::GlobalDatabase::GlobalDatabase()
{
    // Initialize ID-s
    this->m_FishesID = 0;

    // Bind functions
    // TODO: ADD A LOT OF FISHES HERE
    // Example:
    this->m_mFishesDB[this->m_FishesID++] = std::bind(&game::GlobalDatabase::CreateFish,
                                                      this,
                                                      game::CC_FISH,
                                                      game::UString(L"Плотва"),
                                                      game::UString(L"Обитает в реке, питается крабами, курит бамбук"),
                                                      QString(":/1.png"),
                                                      game::CT_NORMAL,
                                                      std::placeholders::_6,
                                                      0.001,
                                                      1.0,
                                                      std::placeholders::_9,
                                                      std::placeholders::_10,
                                                      std::placeholders::_11,
                                                      6,
                                                      100,
                                                      2000,
                                                      15000);
}

game::GlobalDatabase::~GlobalDatabase()
{

}

game::Fish* game::GlobalDatabase::CreateFish(const catchclass_e a_CatchClass,
                                             UString a_Name,
                                             UString a_Description,
                                             QString a_ImagePath,
                                             const catchtype_e a_FishType,
                                             const r64 a_Weight,
                                             const r64 a_Price,
                                             const i32 a_Expirience,
                                             const i32 a_Depth,
                                             UString a_PlaceName,
                                             UString a_BaitName,
                                             const i32 a_BitingTime,
                                             const i32 a_FreqBite,
                                             const i32 a_PlayerReactionTime,
                                             const i32 a_MaxCatchTime)
{
    return new Fish(a_CatchClass, std::move(a_Name), std::move(a_Description), std::move(a_ImagePath), a_FishType, a_Weight, a_Price, a_Expirience, a_Depth, std::move(a_PlaceName), std::move(a_BaitName), a_BitingTime, a_FreqBite, a_PlayerReactionTime, a_MaxCatchTime);
}


game::Fish* game::GlobalDatabase::GetNewFish(game::i32 a_ID, const game::r64 a_Weight, const game::i32 a_Depth, game::UString &&a_PlaceName, game::UString &&a_BaitName)
{
    return this->m_mFishesDB[a_ID](game::CC_FISH, game::UString(L"Unused"), game::UString(L"Unused"), QString("Unused"), game::CT_NORMAL, a_Weight, -1.0, -1.0, a_Depth, std::move(a_PlaceName), std::move(a_BaitName), -1, -1, -1, -1);
}
