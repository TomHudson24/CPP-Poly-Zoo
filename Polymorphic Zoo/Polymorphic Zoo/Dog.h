#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
private:
    const std::string m_Animal_Type = "Dog";
    std::string m_Name = "Unnamed";
    std::string m_Hair_Type;
    float m_Age;
    Vector2 m_Pos;
public:

    Dog(Vector2& pos, float& age, std::string& name) : m_Pos(pos), m_Age(age), m_Name(name) { std::cout << "Dog Constructor\n"; }//constructor

    ~Dog() { std::cout <<"Dog Destructor\n"; }

    std::string GetType() override { return m_Animal_Type; }

    void SetName(std::string& name) override { m_Name = name; }

    std::string GetName() override { return m_Name; }

    void SetHairType(std::string& hairType) override { m_Hair_Type = hairType; }
    
    std::string GetHairType() override { return m_Hair_Type; }

    void SetAge(float& age) override { m_Age = age; }

    float GetAge() override { return m_Age; }

    void SetPosition(Vector2& pos) override { m_Pos = pos; }

    Vector2 GetPosition() override { return m_Pos; }
};

