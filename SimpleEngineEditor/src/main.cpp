#include <iostream>
#include <memory>

#include <SimpleEngineCore/Application.hpp>

class MyApp : public SimpleEngine::Application
{
    void on_update() override
    {
        
    }
};

int main()
{
    auto myApp = std::make_unique<MyApp>();

    int returnCode = myApp->start(640, 480, "myApp");

    return returnCode;
}