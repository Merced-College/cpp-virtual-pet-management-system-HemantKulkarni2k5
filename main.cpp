#include <iostream>
#include <vector>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Dragon.h"

int main() {
    // Create pets dynamically
    Pet* myDog = new Dog("Buddy", 3, "Golden Retriever");
    Pet* myCat = new Cat("Whiskers", 2, "Feather Toy");
    Pet* myDragon = new Dragon("Drako", 100, 20, 10);

    // Store all pets in a vector
    std::vector<Pet*> pets = { myDog, myCat, myDragon };

    // Iterate and use polymorphism
    for (Pet* pet : pets) {
        pet->printInfo();
        pet->makeSound();
        std::cout << "----------------------\n";
    }

    // Special method for Dragon
    Dragon* dragonPtr = dynamic_cast<Dragon*>(myDragon);
    if (dragonPtr) {
        dragonPtr->breatheFire();
    }

    // Cleanup memory
    for (Pet* pet : pets) {
        delete pet;
    }

    return 0;
}
