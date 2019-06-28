#ifndef OBSERVERPATTERN_COMPONENT_H
#define OBSERVERPATTERN_COMPONENT_H

#include <functional>
#include <SFML/Graphics.hpp>
#include "Event.h"
#include "Window.h"
#include "Notification.h"

using namespace std;

class Component {
protected:
    function<void(sf::Event)> clickEvent;
    function<void(sf::Event)> mouseMoveEvent;
private:
    string id;
    sf::Window parent;
public:
    void update(Notification *msg);
    void onClick(function<void(Event)>);
    void onMouseMove(function<void(Event)>);
    void draw();
};

#endif