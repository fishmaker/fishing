#include "game/World/place.hpp"

#include <sstream>

QString game::Place::BGImage() const
{
    return m_BGImage;
}

void game::Place::setBGImage(const QString &BGImage)
{
    m_BGImage = BGImage;
}

game::UString game::Place::Description() const
{
    return m_Description;
}

void game::Place::setDescription(const game::UString &Description)
{
    m_Description = Description;
}

game::UString game::Place::Name() const
{
    return m_Name;
}

void game::Place::setName(const game::UString &Name)
{
    m_Name = Name;
}

void game::Place::p_SetName(game::LString &a_Data)
{
    this->m_Name = a_Data;
}

void game::Place::p_SetDescription(game::LString &a_Data)
{
    this->m_Description = a_Data;
}

void game::Place::p_SetBGImage(game::LString &a_Data)
{
    this->m_BGImage.fromStdString(a_Data);
}

void game::Place::p_SetDepthMap(game::LString &a_Data)
{
    i32 row, a_Depth;
    i32 i = 0;
    std::istringstream a_SS(a_Data);
    a_SS >> row;
    while (a_SS >> a_Depth) {
        this->m_ArrayMap[row][i++] = a_Depth;
    }
}

void game::Place::p_SetFishMap(game::LString &a_Data)
{
    fishplaceinfo_t a_tmp;
    std::istringstream a_SS(a_Data);
    a_SS >> a_tmp.ID >> a_tmp.count;
    this->m_FishMap.push_back(a_tmp);
}

game::Place::Place()
{
    this->m_mInitializer["Name"] = std::bind(&Place::p_SetName, this, std::placeholders::_1);
    this->m_mInitializer["Description"] = std::bind(&Place::p_SetDescription, this, std::placeholders::_1);
    this->m_mInitializer["BGImage"] = std::bind(&Place::p_SetBGImage, this, std::placeholders::_1);
    this->m_mInitializer["depth"] = std::bind(&Place::p_SetDepthMap, this, std::placeholders::_1);
    this->m_mInitializer["fish"] = std::bind(&Place::p_SetFishMap, this, std::placeholders::_1);

}

game::Place::~Place()
{
    
}
