#pragma once

#include <iostream>
#include <vector>

class Vector2
{
    public:
        Vector2(float x, float y);
        std::pair<float, float> get_pos();
    private:
        std::pair<float, float> _position; 
        
};