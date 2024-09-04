#include <iostream>
#include <memory>

#include <SimpleEngineCore/Application.hpp>

class MyApp : public SimpleEngine::Application
{
    void on_update() override
    {
        std::cout << "Update frame: " << frame++ << std::endl;
    }
    int frame = 0;
};

int main()
{
    auto myApp = std::make_unique<MyApp>();

    int returnCode = myApp->start(640, 480, "myApp");

    return returnCode;
}