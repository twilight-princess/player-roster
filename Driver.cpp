#include"Player.h"
#include<iostream>
#include<stdlib.h>
#include<string>

int main(){

	Player * roster = new Player[11];
	int playerNum = 0;
	
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
			roster[playerNum].enterPlayer();
			playerNum++;
		
		}else if (choice == "2"){
			
			std::cout << "***IUPUI Football Roster***" << std::endl;
			for (int j=0; j < playerNum; j++) {
				roster[j].printPlayers();
			}	
			std::cout << "***************************" << std::endl;
			
		}else if (choice == "3"){
			keepGoing = false;
			std::cout << "Thank you for using our program - Goodbye!" << std::endl;
		}else{	
			std::cout << "Invalid choice! Please select option #1, #2, or #3." << std::endl;
			main(); 	
		}
	}
	delete[] roster;
	return 0;
}

