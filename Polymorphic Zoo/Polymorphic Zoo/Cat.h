#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
private:
    const std::string m_Animal_Type = "Cat";
    std::string m_Name;
    std::string m_Hair_Type;
    float m_Age;
    Vector2 m_Pos;
public:
    Cat(Vector2 pos = { 0.0f,0.0f }, float age = -1, const std::string& name = "Unnamed") : m_Pos(pos), m_Age(age), m_Name(name) { std::cout << "Cat Constructor\n"; }//constructor
    
    ~Cat() { std::cout << "Cat Destructor\n"; }
    
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

