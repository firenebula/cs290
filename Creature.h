/*Creature.h  This is the interface for an abstract class that will serve as a template for 
battling creatures.
Author: John Brown
Creatued: 2/15/15
*********************************************************/


#ifndef CREATURE_H
#define CREATURE_H
#include<string>
#include<random>
#include<time.h>
#include<iostream>

enum status{normal, cutHeel}; // used to represent creature size.  feature could be expanded
enum size {small, average};// used to represent creature size.  feature could be expanded

class Creature{


protected:
	int armor,// creature ability to soak damage
		strength; //creature life force
	std::string name; //creature name
	size mySize; 
	status myStatus;
	int roll(int, int);// used for all dice rolls
	int statusDamage(int);
	int statusAttack(int);

public:
	virtual int attack() = 0;// virtual functions
	virtual int defend(int) = 0;
	void subLife(int);
	int getLife();
	std::string getName();
	
};





#endif