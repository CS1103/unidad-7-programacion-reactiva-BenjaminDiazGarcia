#ifndef OBSERVERPATTERN_WINDOW_H
#define OBSERVERPATTERN_WINDOW_H

#include <vector>
#include "Component.h"

using namespace std;


class Component;

class Window {
    int disponibles;
    vector <Component*> controls;
public:
    explicit Window(int capacidad):disponibles{capacidad}{}
    void addComponent(Component*);
    void removeComponent(Component*);
    void notify ();
    void setStatus(int);
};


#endif