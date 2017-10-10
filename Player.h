#ifndef PLAYER_H
#define PLAYER_H
#include<string>

class Player {

	// class private properties
	private: 
		std::string firstName;
		std::string lastName;
	 	int jerseyNumber;
	
	// class public methods
	public:
		
		// setter and getters for properties
		//void setFirstName(std::string fName);
		//std::string getFirstName();
		//void setLastName(std::string lName);
		//std::string getLastName();
		//void setJerseyNumber(std::string jNumb);
		//std::string getJerseyNumber();
		
		// constructor
		Player();
		Player(std::string fName, std::string lName, int jNumb);
		
		// destructor
		~Player();

		// member methods
		void enterPlayer();
		void printPlayers();
};

#endif 
