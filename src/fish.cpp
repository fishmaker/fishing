#include "game/fish.hpp"

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

game::UString game::Fish::PlaceName() const
{
    return m_PlaceName;
}

void game::Fish::setPlaceName(const game::UString &PlaceName)
{
    m_PlaceName = PlaceName;
}

game::UString game::Fish::BaitName() const
{
    return m_BaitName;
}

void game::Fish::setBaitName(const game::UString &BaitName)
{
    m_BaitName = BaitName;
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

game::Fish::Fish()
{
    
}

game::Fish::~Fish()
{
    
}
