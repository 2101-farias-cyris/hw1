//not sure yet how to make a makerfile did not go over that in cs202 at my other collge will ask questions in class.

#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <string.h>
#include "Person.h"
#include "Train.h"
#include "Transporter.h"
#include "Bus.h"


using namespace std;

class Bus : public Transporter
{
public:
    Bus() {}
    virtual ~Bus() {}

    vector<Person> Getpersons() { return persons; }
    void Setpersons(vector<Person> val) { persons = val; }

    void loadPerson(Person person) {
        this->persons.push_back(person);
        this->sortPeople();
    }

    void unloadPerson(Person person) {
        bool found = false;

        for (int i = 0; i < this->persons.size(); i++) {
            if (this->persons.at(i).getName() == person.getName()) {
                this->persons.erase(this->persons.begin() + i);
            }
        }

        if (found == true) {
            cout << "Person has got off the bus" << endl;
            this->sortPeople();
        }

        else {
            cout << "Person is not found" << endl;
        }
    }

    void emptyAllPeople() {
        this->persons.clear();
    }

    int numberOfPeople() {
        return this->persons.size();
    }

    void sortPeople() {
        Person temp;
        //need a loop to sort the pepole
        for (int i = 0; i < this->persons.size(); i++) {
            for (int j = 0; j < this->persons.size() - i - 1; j++) {
                if (this->persons.at(j).getHeight() < this->persons.at(j + 1).getHeight()) {
                    temp = this->persons.at(j);
                    this->persons.at(j) = this->persons.at(j + 1);
                    this->persons.at(j + 1) = temp;
                }
            }
        }
    }

    bool isEmpty() {
        if (this->persons.size() == 0) {
            return true;
        }

        else {
            return false;
        }
    }

    virtual void loadItem(Cargo cargo) {}
    virtual void unloadItem(Cargo cargo) {}
    virtual void emptyAllItems() {}
    virtual int numberOfItems() {}

protected:

private:
    vector<Person> persons;
};
#endif
