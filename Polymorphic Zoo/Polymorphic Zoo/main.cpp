#include <iostream>
#include "Dog.h"
#include "Cat.h"

void PrintType(Entity* entity)
{
	std::cout <<"Type: " <<entity->GetType() << std::endl;
}
void PrintName(Entity* entity)
{
	std::cout << "Name: " <<entity->GetName() << std::endl;
}
void PrintPosition(Entity* entity)
{
	std::cout <<"Current position: " << entity->GetPosition().x << "(x), " << entity->GetPosition().y << "(y)"<< std::endl;
}
void PrintHairType(Animal* animal)
{
	std::cout <<"Hair Type: "<< animal->GetHairType() << std::endl;
}
void PrintAge(Animal* animal)
{
	std::cout <<"Age: " <<animal->GetAge() << "yrs old"<< std::endl;
}

int main()
{
	std::string fur = "Fur";

	
	std::string dogName = "Alfie";
	float dogAge = 4.0f;
	Vector2 dogPos = { 0.0f,1.0f };

	Dog* dog = new Dog(dogPos, dogAge, dogName);
	dog->SetHairType(fur);

	PrintType(dog);
	PrintName(dog);
	PrintAge(dog);
	PrintHairType(dog);
	PrintPosition(dog);
	delete dog;
	
	//dog->SetName(dogName);
	
	//dog->SetAge(dogAge);
	//dog->SetPosition(dogPos);


	std::cout << "\n";
	
	Cat* cat = new Cat();
	std::string catName = "Jhin";
	float catAge = 2.5f;
	Vector2 catPos = { 2.0f,0.0f };
	
	cat->SetName(catName);
	cat->SetHairType(fur);
	cat->SetAge(catAge);
	cat->SetPosition(catPos);

	PrintType(cat);
	PrintName(cat);
	PrintAge(cat);
	PrintHairType(cat);
	PrintPosition(cat);
	delete cat;

	return 1;
}