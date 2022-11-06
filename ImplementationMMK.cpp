//Rayyan Mridha
//MMK Implementation
//11-5-22

#include "MMK.h"

//Scorpian

//Constructor
Scorpian::Scorpian() : special(0), heavy(0), small(0), health(5000)
{ }

//Set functions
void Scorpian::setSpecial(int damage)
{
	special = damage;
}
void Scorpian::setHeavy(int damage)
{
	heavy = damage;
}
void Scorpian::setSmall(int damage)
{
	small = damage;
}
void Scorpian::setHealth(int newHealth)
{
	if (newHealth < 0)
	{
		health = 0;
	}
	else
	{
		health = newHealth;
	}
}

//Get functions
int Scorpian::getSpecial()
{
	return special;
}
int Scorpian::getHeavy()
{
	return heavy;
}
int Scorpian::getSmall()
{
	return small;
}
int Scorpian::getHealth()
{
	return health;
}
string Scorpian::getAttribute()
{
	return attribute;
}

//Member functions
void Scorpian::specialAtk()
{
	cout << "Scorpian used his dagger swing to deal " << special << " damage!" << endl;
}
void Scorpian::heavyAtk()
{
	cout << "Scorpian used his heavy attack to deal " << heavy << " damage!" << endl;
}

void Scorpian::smallAtk()
{
	cout << "Scorpian used his small attack to deal " << small << " damage!" << endl;
}


//Subzero

//Constructor
Subzero::Subzero() : special(0), heavy(0), small(0), health(5000)
{ }
//Set functions
void Subzero::setSpecial(int damage)
{
	special = damage;
}
void Subzero::setHeavy(int damage)
{
	heavy = damage;
}
void Subzero::setSmall(int damage)
{
	small = damage;
}
void Subzero::setHealth(int newHealth)
{
	if (newHealth < 0)
	{
		health = 0;
	}
	else
	{
		health = newHealth;
	}
}

//Get functions
int Subzero::getSpecial()
{
	return special;
}
int Subzero::getHeavy()
{
	return heavy;
}
int Subzero::getSmall()
{
	return small;
}
int Subzero::getHealth()
{
	return health;
}
string Subzero::getAttribute()
{
	return attribute;
}

//Member functions
void Subzero::specialAtk()
{
	cout << "Subzero used his ice blade to deal " << special << " damage!" << endl;
}
void Subzero::heavyAtk()
{
	cout << "Subzero used his heavy attack to deal " << heavy << " damage!" << endl;
}
void Subzero::smallAtk()
{
	cout << "Subzero used his small attack to deal " << small << " damage!" << endl;
}
