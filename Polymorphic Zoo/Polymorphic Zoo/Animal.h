#pragma once
#include "Entity.h"
class Animal :
    public Entity
{
private:
  
public:
    Animal() { std::cout<< "Animal Constructor\n"; }
    virtual ~Animal() { std::cout << "Animal Destructor\n"; }
    std::string GetType() override { return "Animal"; }
    std::string GetName() override { return "Unnamed Animal"; }
    virtual void SetHairType(std::string& hairType) {}
    virtual std::string GetHairType() { return "No Hair Type Given."; }
    virtual void SetAge(float& age) = 0;
    virtual float GetAge() = 0;
};

