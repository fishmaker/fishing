#include "game/fish.hpp"

#include <sstream>

game::UString game::Fish::Name() const
{
    return m_Name;
}

void game::Fish::setName(const game::UString &Name)
{
    m_Name = Name;
}

game::UString game::Fish::Description() const
{
    return m_Description;
}

void game::Fish::setDescription(const game::UString &Description)
{
    m_Description = Description;
}

QString game::Fish::ImagePath() const
{
    return m_ImagePath;
}

void game::Fish::setImagePath(const QString &ImagePath)
{
    m_ImagePath = ImagePath;
}

game::catchtype_e game::Fish::FishType() const
{
    return m_FishType;
}

void game::Fish::setFishType(const game::catchtype_e &FishType)
{
    m_FishType = FishType;
}

game::fishactions_e game::Fish::Actions() const
{
    return m_Actions;
}

void game::Fish::setActions(const game::fishactions_e &Actions)
{
    m_Actions = Actions;
}

game::r64 game::Fish::MinWeight() const
{
    return m_MinWeight;
}

void game::Fish::setMinWeight(const game::r64 &MinWeight)
{
    m_MinWeight = MinWeight;
}

game::r64 game::Fish::MaxWeight() const
{
    return m_MaxWeight;
}

void game::Fish::setMaxWeight(const game::r64 &MaxWeight)
{
    m_MaxWeight = MaxWeight;
}

game::r64 game::Fish::Price() const
{
    return m_Price;
}

void game::Fish::setPrice(const game::r64 &Price)
{
    m_Price = Price;
}

game::r64 game::Fish::Expirience() const
{
    return m_Expirience;
}

void game::Fish::setExpirience(const game::r64 &Expirience)
{
    m_Expirience = Expirience;
}

game::i32 game::Fish::BitingTime() const
{
    return m_BitingTime;
}

void game::Fish::setBitingTime(const game::i32 &BitingTime)
{
    m_BitingTime = BitingTime;
}

game::i32 game::Fish::FreqBite() const
{
    return m_FreqBite;
}

void game::Fish::setFreqBite(const game::i32 &FreqBite)
{
    m_FreqBite = FreqBite;
}

game::i32 game::Fish::PlayerReaction() const
{
    return m_PlayerReaction;
}

void game::Fish::setPlayerReaction(const game::i32 &PlayerReaction)
{
    m_PlayerReaction = PlayerReaction;
}

game::i32 game::Fish::CatchTime() const
{
    return m_CatchTime;
}

void game::Fish::setCatchTime(const game::i32 &CatchTime)
{
    m_CatchTime = CatchTime;
}

game::i32 game::Fish::Frequency() const
{
    return m_Frequency;
}

void game::Fish::setFrequency(const game::i32 &Frequency)
{
    m_Frequency = Frequency;
}

game::r64 game::Fish::FishSpeed() const
{
    return m_FishSpeed;
}

void game::Fish::setFishSpeed(const game::r64 &FishSpeed)
{
    m_FishSpeed = FishSpeed;
}

const game::tableDepthSize_t* game::Fish::vDepthSize() const
{
    return &m_vDepthSize;
}

const game::tableTimeActivity_t* game::Fish::vTimeActivity() const
{
    return &m_vTimeActivity;
}

const game::tableBaitCatch_t* game::Fish::vBaitCatch() const
{
    return &m_vBaitCatch;
}

void game::Fish::p_SetName(game::LString &a_Data)
{
    this->m_Name = a_Data;
}

void game::Fish::p_SetDescription(game::LString &a_Data)
{
    this->m_Description = a_Data;
}

void game::Fish::p_SetImage(game::LString &a_Data)
{
    this->m_ImagePath = QString::fromStdString(a_Data);
}

void game::Fish::p_SetType(game::LString &a_Data)
{
    this->m_FishType = static_cast<catchtype_e>(std::stoi(a_Data));
}

void game::Fish::p_SetActions(game::LString &a_Data)
{
    this->m_Actions = static_cast<fishactions_e>(std::stoi(a_Data));
}

void game::Fish::p_SetMinWeight(game::LString &a_Data)
{
    this->m_MinWeight = std::stod(a_Data);
}

void game::Fish::p_SetMaxWeight(game::LString &a_Data)
{
    this->m_MaxWeight = std::stod(a_Data);
}

void game::Fish::p_SetPrice(game::LString &a_Data)
{
    this->m_Price = std::stod(a_Data);
}

void game::Fish::p_SetExpirience(game::LString &a_Data)
{
    this->m_Expirience = std::stod(a_Data);
}

void game::Fish::p_SetBitingTime(game::LString &a_Data)
{
    this->m_BitingTime = std::stoi(a_Data);
}

void game::Fish::p_SetFreqBite(game::LString &a_Data)
{
    this->m_FreqBite = std::stoi(a_Data);
}

void game::Fish::p_SetPlayerReaction(game::LString &a_Data)
{
    this->m_PlayerReaction = std::stoi(a_Data);
}

void game::Fish::p_SetCatchTime(game::LString &a_Data)
{
    this->m_CatchTime = std::stoi(a_Data);
}

void game::Fish::p_Frequency(game::LString &a_Data)
{
    this->m_Frequency = std::stoi(a_Data);
}

void game::Fish::p_SetFishSpeed(game::LString &a_Data)
{
    this->m_FishSpeed = std::stod(a_Data);
}

void game::Fish::p_SetDepthSize(game::LString &a_Data)
{
    i32 a_Depth, a_Percents;
    std::stringstream a_SS(a_Data);
    a_SS >> a_Depth >> a_Percents;
    this->m_vDepthSize.v.push_back(std::make_pair(a_Depth, static_cast<percents_e>(a_Percents)));
}

void game::Fish::p_SetTimeActivity(game::LString &a_Data)
{
    i32 a_Date, a_Percents;
    std::stringstream a_SS(a_Data);
    a_SS >> a_Date >> a_Percents;
    this->m_vTimeActivity.v.push_back(std::make_pair(static_cast<daytimes_e>(a_Date), static_cast<percents_e>(a_Percents)));
}

void game::Fish::p_SetBaitCatch(game::LString &a_Data)
{
    i32 a_ID, a_Percent;
    std::stringstream a_SS(a_Data);
    a_SS >> a_ID >> a_Percent;
    this->m_vBaitCatch.v.push_back(std::make_pair(a_ID, static_cast<percents_e>(a_Percent)));
}

game::Fish::Fish()
{
    this->m_mInitializer["Name"] = std::bind(&Fish::p_SetName, this, std::placeholders::_1);
    this->m_mInitializer["Description"] = std::bind(&Fish::p_SetDescription, this, std::placeholders::_1);
    this->m_mInitializer["Image"] = std::bind(&Fish::p_SetImage, this, std::placeholders::_1);
    this->m_mInitializer["Type"] = std::bind(&Fish::p_SetType, this, std::placeholders::_1);
    this->m_mInitializer["Actions"] = std::bind(&Fish::p_SetActions, this, std::placeholders::_1);
    this->m_mInitializer["MinWeight"] = std::bind(&Fish::p_SetMinWeight, this, std::placeholders::_1);
    this->m_mInitializer["MaxWeight"] = std::bind(&Fish::p_SetMaxWeight, this, std::placeholders::_1);
    this->m_mInitializer["Price"] = std::bind(&Fish::p_SetPrice, this, std::placeholders::_1);
    this->m_mInitializer["Expirience"] = std::bind(&Fish::p_SetExpirience, this, std::placeholders::_1);
    this->m_mInitializer["BitingTime"] = std::bind(&Fish::p_SetBitingTime, this, std::placeholders::_1);
    this->m_mInitializer["FreqBite"] = std::bind(&Fish::p_SetFreqBite, this, std::placeholders::_1);
    this->m_mInitializer["PlayerReaction"] = std::bind(&Fish::p_SetPlayerReaction, this, std::placeholders::_1);
    this->m_mInitializer["CatchTime"] = std::bind(&Fish::p_SetCatchTime, this, std::placeholders::_1);
    this->m_mInitializer["Frequency"] = std::bind(&Fish::p_Frequency, this, std::placeholders::_1);
    this->m_mInitializer["FishSpeed"] = std::bind(&Fish::p_SetFishSpeed, this, std::placeholders::_1);
    this->m_mInitializer["DepthSize"] = std::bind(&Fish::p_SetDepthSize, this, std::placeholders::_1);
    this->m_mInitializer["TimeActivity"] = std::bind(&Fish::p_SetTimeActivity, this, std::placeholders::_1);
    this->m_mInitializer["BaitCatch"] = std::bind(&Fish::p_SetBaitCatch, this, std::placeholders::_1);
}

game::Fish::~Fish()
{
    
}
