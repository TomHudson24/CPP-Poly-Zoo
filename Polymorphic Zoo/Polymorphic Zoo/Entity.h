#pragma once
#include <string>
#include <iostream>
class Vector2
{
public:
	float x, y;
};

class Entity
{
public:
	Entity() { std::cout << "Base Constructor\n"; }
	virtual ~Entity() { std::cout << "Base Destructor\n"; }
	virtual std::string GetType() { return "Entity"; }
	virtual std::string GetName() { return "Unnamed Entity"; }
	virtual void SetName(std::string& name) = 0;
	virtual void SetPosition(Vector2& pos) = 0;
	virtual Vector2 GetPosition() = 0;
};

