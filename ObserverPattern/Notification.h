//
// Created by Benjamin Diaz on 2019-06-28.
//

#ifndef OBSERVERPATTERN_NOTIFICATION_H
#define OBSERVERPATTERN_NOTIFICATION_H


class Notification{
    friend class Window;
    int disponibles;
public:
    explicit Notification(int disponibles):disponibles{disponibles} {}
    int get_value(){ return disponibles; };
};


#endif //OBSERVERPATTERN_NOTIFICATION_H
