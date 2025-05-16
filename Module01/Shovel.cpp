#include "Shovel.hpp"

Shovel::Shovel()
{
    _type = "Shovel";
    currentWorker = NULL;
    numberOfUses = 10;
}

Shovel::~Shovel()
{
    currentWorker->removeTool(this);
}

void Shovel::use()
{
    std::cout << "I must dig" << std::endl;
    numberOfUses--;
}
