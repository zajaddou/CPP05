#include <iostream>

class Car
{
    public:
        class Engine
        {
            public:
                void start();
        };
};

void Car::Engine::start()
{
    std::cout << "vroom" << std::endl;
}

int main()
{
    Car::Engine e;
    
    e.start();

    return 0;
}