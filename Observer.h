//
// Created by Pietro Zarri on 03/02/18.
//

#ifndef LAB_PROGRAMMAZIONE_OBSERVER_H
#define LAB_PROGRAMMAZIONE_OBSERVER_H


class Observer {
protected:
    virtual ~Observer() {};
    virtual void updat() =0;
};


#endif //LAB_PROGRAMMAZIONE_OBSERVER_H
