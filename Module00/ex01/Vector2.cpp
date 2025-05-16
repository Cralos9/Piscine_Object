#include "Vector2.hpp"


Vector2::Vector2(float x, float y)
{
    this->_position = std::make_pair(x , y);
}

std::pair<float, float> Vector2::get_pos()
{
    return(this->_position);
}