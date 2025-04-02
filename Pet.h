#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet {
protected:
    std::string name;
    std::string species;
    int age;
    int hungerLevel; // 0 (full) to 10 (starving)

public:
    // Constructors
    Pet();
    Pet(const std::string& name, const std::string& species, int age, int hungerLevel);

    // Virtual Destructor
    virtual ~Pet();

    // Accessors (Getters)
    std::string getName() const;
    std::string getSpecies() const;
    int getAge() const;
    int getHungerLevel() const;

    // Mutators (Setters)
    void setName(const std::string& name);
    void setSpecies(const std::string& species);
    void setAge(int age);
    void setHungerLevel(int level);

    // CompareTo
    int compareTo(const Pet& other) const;

    // Virtual functions for polymorphism
    virtual void printInfo() const;
    virtual void makeSound() const;
};

#endif
