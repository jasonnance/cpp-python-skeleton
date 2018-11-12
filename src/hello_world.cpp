#include <iostream>

#include "hello_world.hpp"

void HelloWorld::hello_world()
{
    std::cout << "Hello" << std::endl;
}

extern "C" {
    HelloWorld* new_hello_world()
    {
        return new HelloWorld();
    }

    void hello_world(HelloWorld* h)
    {
        h->hello_world();
    }
}
