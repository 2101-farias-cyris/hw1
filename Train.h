#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string.h>
#include <vector>
#include "Transporter.h"
#include "Cargo.h"

using namespace std;

class Train : public Transporter
{
public:
	Train() {
	}

	virtual ~Train() {}

	vector<Cargo> Getcargo() { return cargo; }

	void Setcargo(vector<Cargo> val) { this->cargo = val; }

	int numberOfItems() {
		return this->cargo.size();
	}

	void loadItem(Cargo cargo) {
		this->cargo.push_back(cargo);
	}

	void unloadItem(Cargo cargo) {
		bool found = false;

		for (int i = 0; i < this->cargo.size(); i++) {
			if (this->cargo.at(i).getType() == cargo.getType()) {
				this->cargo.erase(this->cargo.begin() + i);
				found = true;
			}
		}

		if (found == true) {
			cout << "Cargo is not found" << endl;
		}

		else {
			cout << "Cargo does not exist" << endl;
		}
	}

	bool isEmpty() {
		if (this->cargo.size() == 0) {
			return true;
		}

		else {
			return false;
		}
	}

	void emptyAllItems() {
		this->cargo.clear();
	}

	void loadPerson(Person person) {}
	void unloadPerson(Person person) {}
	void emptyAllPeople() {}
	int numberOfPeople() {}

protected:

private:
	vector<Cargo> cargo;
};

#endif 