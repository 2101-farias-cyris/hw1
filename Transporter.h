#ifndef TRANSPORTER_H_INCLUDED
#define TRANSPORTER_H_INCLUDED

#include <iostream>
#include <string.h>
#include <stdbool.h>
#include "Cargo.h"

using namespace std;

class Transporter {
public:
    virtual void loadItem(Cargo cargo) = 0;
    virtual void unloadItem(Cargo cargo) = 0;
    virtual void emptyAllItems() = 0;
    virtual bool isEmpty() = 0;
    virtual int numberOfItems() = 0;
    virtual void loadPerson(Person person) = 0;
    virtual void unloadPerson(Person person) = 0;
    virtual void emptyAllPeople() = 0;
    virtual int numberOfPeople() = 0;
};

#endif