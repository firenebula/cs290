/*Creature.cpp  This is the implementation for an abstract class that will serve as a template for
battling creatures.
Author: John Brown
Creatued: 2/15/15
*********************************************************/

#include "Creature.h"


//no constructor as function is virtual


/*Creature::roll
This function takes two ints as parameters and retuns an int.  This function handles all dice rolls 
for creatures.  First int is number of rolls, second int is number of sides on die.  Resulting roll 
is returned
********************************************************************************/
int Creature::roll(int num, int sides){

	
	int result = 0;

	for (int i = 0; i < num; i++){


		result += (rand() % sides) + 1;

	}
	
	


		return result;
	
}

/*Creature::sublife
This function takes one int as a parameters and does not return a value. This function 
handles reducing a creatures strength value.  Stregnth value is reduced by the amount passed in.
********************************************************************************/
void Creature::subLife(int damage){

	this->strength -= damage;

	if (this->strength < 0)
		this->strength = 0;
}

/*Creature::getLife
This function takes no parameters and returns an int. This function
returns the Creatures current stregnth value
********************************************************************************/

int Creature::getLife(){


	return this->strength;
}

/*Creature::getName
This function takes no parameters and returns a string. This function
returns the string representing the creature's name
********************************************************************************/
std::string Creature::getName(){

	return this->name;
}

/*Creature::statusDamage
This function takes one int as a parameters and returns an int. This function
handles special damage types.  Special damage is retuned by attacking creatures as 
a negative number.  Based on the negative number "code" based in as an int, this function 
will update a creatures variables accordingly
********************************************************************************/
int Creature::statusDamage(int damageCode)
{
	int retDamage = 0;
	if (damageCode == -1){
		retDamage = 12;

		if (this->mySize != small){
			this->myStatus = cutHeel;
			std::cout << this->name << "'s achilles tendon has been cut.  Attacks are now halved." << std::endl;
		}
	}

		return retDamage;
}

/*Creature::statusAttack
This function takes one int as a parameter and returns an int.  This function handles 
damage that is modified due to an abnormal status.  The function returns the corrected 
damage amount.
********************************************************************************/
int Creature::statusAttack(int damage){

	if (this->myStatus = cutHeel)
		return damage/2;

	else
	return damage;

}