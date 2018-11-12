#pragma once

class HelloWorld
{
public:
    void hello_world();
};

extern "C" {
    HelloWorld* new_hello_world();
    void hello_world(HelloWorld* h);
}
