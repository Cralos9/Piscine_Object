#include "Hammer.hpp"

Hammer::Hammer()
{
    _type = "Hammer";
    currentWorker = NULL;
    numberOfUses = 10;
}

Hammer::~Hammer()
{
    currentWorker->removeTool(this);
}

void Hammer::use()
{
    std::cout << "Hammer time" << std::endl;
    numberOfUses--;
}
