#include <iostream>
#include <string>
#include <vector>
#include "Dog.h"
#include "display.h"

using namespace std;

vector<Animal*> arr;

int main(){

    int N;
    cin >> N;

  for (int i = 0; i < N; i++) {
    char type;
    string name;
    int age;

    cin >> type;
    cin >> name;
    cin >> age;

    if (type == 'D') {//if dog create dog
      arr.push_back(new Dog(name, age));
    }

    if (type == 'A') {//if not dog 

      Animal* animal  = new Animal;

      animal->setName(name);
      animal->setAge(age);

      arr.push_back(animal);
    } 
    
  }

  display(arr);

}