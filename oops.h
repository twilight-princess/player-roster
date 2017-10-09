#include <iostream>
#include <stdlib.h>

#ifndef PLAYER_H_EXISTS
#define PLAYER_H_EXISTS

class Player {
	//class properties
	private: 
		string firstName;
		string lastName;
		int jerseyNumber;
	//class methods
	public:
		//setter and getters for properties
		void setFirstName(string name);
		string getFirstName();
		void setLastName(string name);
		string getLastName();
		void setJerseyNumber(int number);
		int getJerseyNumber();
		//default constructor
		Player();
		Player(string fName, string lName, int jNumber);
		//destructor
		~Player();
};

#endif 
