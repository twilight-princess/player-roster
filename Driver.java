import java.util.Scanner;

public class Driver extends Player 
{
	public static void main(String [] args)
	{
		
		int playerNum = 0;
		Player roster[] = new Player[11];
		
			
		boolean keepGoing = true;
		while (keepGoing == true){
			System.out.println("Welcome to our CSCI 240 Roster Editor!");
			System.out.println(" ");
			System.out.println("1) Add New Player");
			System.out.println("2) View Players");
			System.out.println("3) Exit Program");
			System.out.println(" ");
		
			Scanner userChoice = new Scanner(System.in);
			System.out.println("Please enter your selection: ");
			String choice = userChoice.nextLine();
			System.out.println(choice);

			if (choice == "1"){
				roster[playerNum].enterPlayer();
				playerNum++;
			
			}else if (choice == "2"){
				System.out.println("***IUPUI Football Roster***");
				for (int j=0; j < playerNum; j++) {
					roster[j].getList();
				}
				System.out.println("**************************");

			}else if ( choice == "3") {
				keepGoing = false;
				System.out.println("Thank you for using our program - Goodbye!");
				main(args);
			}
		}

}
		
		//System.out.println(newPlayer.getList());

	}

