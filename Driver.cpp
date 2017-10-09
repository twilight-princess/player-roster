#include"Player.h"
#include"Player.cpp"
#include<iostream>
#include<stdlib.h>
#include<string>

int main(){
	
	bool keepGoing = true;
	while (keepGoing == true) {
		std::cout << "Welcome to our CSCI 240 Roster Editor!" << std::endl;	
		std::cout << " " << std::endl;	
		std::cout << "1) Add New Player" << std::endl;	
		std::cout << "2) View Player(s)" << std::endl;	
		std::cout << "3) Exit Program" << std::endl;	
		std::cout << " " << std::endl;	

		std::cout << "Please enter your selection: "; 
		std::string choice;
		std::cin >> choice;

		if (choice == "1"){
			Player * noobPlayer;
			noobPlayer = new Player();
			noobPlayer->enterPlayer();
			delete noobPlayer;
		
		}else if (choice == "2"){
			std::cout << "***IUPUI Football Roster***" << std::endl;
			std::cout << getJerseyNumber() << ") ";
			std::cout << getFirstName() << " ";
			std::cout << getLastName();
			
		}else if (choice == "3"){
			keepGoing = false;
			std::cout << "Thank you for using our program - Goodbye!" << std::endl;
		}else{	
			std::cout << "Invalid choice! Please select option #1, #2, or #3." << std::endl;
			main(); 	
		}
	}
	
	return 0;
}
