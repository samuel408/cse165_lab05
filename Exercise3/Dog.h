#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog : public Animal {//dog inherits Animal

 public:
    Dog(string name, int age) {
      this->name = name;
      this->age = age;
            cout << "Creating Dog" << endl;

    }
    void feed() {
      cout << "Dog food, please!" << endl;
    }

    ~Dog() {//destructor
      cout << "Deleting Dog" << endl;
    }
};


#endif