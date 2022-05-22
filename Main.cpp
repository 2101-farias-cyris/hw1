#include <iostream>
#include <string.h>
#include "Person.h"
#include "Train.h"
#include "Bus.h"

using namespace std;

int main() {
    Train train;
    Bus bus;

    Cargo cargo("Most weight", 33.6);
    Cargo cargo2("least weight", 50);

    Person person("bob", 6.10);
    Person person2("cyris", 5.7);

    train.loadItem(cargo);
    train.loadItem(cargo2);

    bus.loadPerson(person);
    bus.loadPerson(person2);

    cout << "Cargo: " << train.numberOfItems() << endl;
    cout << "How many pepole:" << bus.numberOfPeople() << endl;

    return 0;
}