#include"Player.h"
#include<iostream>

// default constructor
Player::Player(){

	// reference current object
	this->firstName = "0";
	this->lastName = "0";
	this->jerseyNumber = 0;

}

// constructor
Player::Player(std::string fName, std::string lName, int jNumb){

	this->firstName = fName;
	this->lastName = lName;
	this->jerseyNumber = jNumb;
}

// destructor
Player::~Player(){

}

// saves new players into the roster
void Player::enterPlayer(){

	std::cout << "Please enter a first name: ";
	std::cin >> this->firstName;
	std::cout << "Please enter a last name: ";
	std::cin >> this->lastName;
	std::cout << "Please enter a jersey number: ";
	std::cin >> this->jerseyNumber;
}

// prints players
void Player::printPlayers(){
	
	std::cout << jerseyNumber << ") " << firstName << " " << lastName << std::endl;
}

