#include "Component.h"
#include <iostream>

using namespace std;

void Component::onClick(std::function<void(Event)> foo) {

}

void Component::onMouseMove(std::function<void(Event)> foo) {

}

void Component::draw() {

}

void Component::update(Notification *msg) {
    cout << "El cliente: " << id << "\nRecibió el mensaje de que hay " << msg->get_value() << " espacio(s) disponible(s).\n" <<endl;
}
