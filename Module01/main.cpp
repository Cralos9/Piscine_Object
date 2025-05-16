#include "Worker.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Workshop.hpp"

int main()
{
    Workshop Sonae;
    Worker Steve;
    Worker Bob;
    Shovel shovel;
    Shovel shovel2;
    Steve.giveTool(&shovel);
    Steve.giveTool(&shovel2);
    Steve.requestJob(Sonae);
    Sonae.addWorker(Steve);
    Sonae.layoffWorker(Steve);
    std::vector<Tool *> vec = Steve.get_Tools();
    for( std::vector<Tool *>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << (*it)->get_type() << ": " << *it << std::endl;
    }
    std::cout << std::endl;
    Bob.giveTool(&shovel);
    Bob.giveTool(&shovel2);
    vec = Steve.get_Tools();
    for( std::vector<Tool *>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << (*it)->get_type() << ": " << *it << std::endl;
    }
    std::cout << std::endl << "Bob Tools:" << std::endl;
    vec = Bob.get_Tools();
    for( std::vector<Tool *>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << (*it)->get_type() << ": " << *it << std::endl;
    }
    Bob.requestJob(Sonae);
    Sonae.addWorker(Bob);

    Sonae.executeWorkDay();
}