#ifndef CARGO_H_INCLUDED
#define CARGO_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Cargo {
private:
    string type;
    float weight;

public:
    Cargo() {
    }

    Cargo(string type, float weight) {
        this->type = type;
        this->weight = weight;
    }

    void setType(string type) {
        this->type = type;
    }

    string getType() {
        return this->type;
    }

    void setWeight(float weight) {
        this->weight = weight;
    }

    float getWeight() {
        return this->weight;
    }
};

#endif 