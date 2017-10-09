#include<iostream>
#include"Player.h"

// default constructor
Player::Player(){

	// reference current object
	this->firstName = "0";
	this->lastName = "0";
	this->jerseyNumber = "0";

}

// constructor
Player::Player(std::string fName, std::string lName, std::string jNumb){

	this->firstName = fName;
	this->lastName = lName;
	this->jerseyNumber = jNumb;
}

// destructor
Player::~Player(){

}


void Player::enterPlayer(){

	std::cout << "Please enter a first name: ";
	std::string fName;
	std::cin >> fName;
	this->firstName = fName;
	std::cout << "Please enter a last name: ";
	std::string lName;
	std::cin >> lName;
	this->lastName = lName;
	std::cout << "Please enter a jersey number: ";
	std::string jNumb;
	std::cin >> jNumb;
	this->jerseyNumber = jNumb;
}

void Player::printPlayers(){
	
	std::cout << "***IUPUI Football Roster***" << std::endl;
	std::cout << jNumb << ") ";
	std::cout << fName << " ";
	std::cout << lName;
}

