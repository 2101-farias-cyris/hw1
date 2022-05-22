#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
    string name;
    float height;

public:
    Person() {
    }

    Person(string name, float height) {
        this->name = name;
        this->height = height;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

    void setHeight(float height) {
        this->height = height;
    }

    int getHeight() {
        return this->height;
    }
};

#endif