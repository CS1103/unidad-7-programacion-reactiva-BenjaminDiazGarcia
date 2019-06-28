#include "Window.h"

void Window::addComponent(Component *comp) {
    controls.push_back(comp);
}

void Window::removeComponent(Component* comp) {
    auto item = find(begin(controls), end(controls), comp);
    if (item != end(controls))
        controls.erase(item);
}

void Window::notify() {
    for (auto con:controls) {
        con->update(new Notification(disponibles));
    }
}

void Window::setStatus(int disponibles) {
    this->disponibles = disponibles;
    notify();
}
