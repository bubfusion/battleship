#include<iostream>
#include<iomanip>

using namespace std; //standered setup for program

void boardOutput(char output[][10]); //fucntion used to output any array/board in the game

void playerShot(char aiBoard[][10], int playerShotAcross, int playerShotDown, char userAttack[][10]); //function used for the player shooting at the enemy ship
void aiShot(char userBoard[][10],int aiShotDown,int aiShotAcross); //fucntion used for the computer to shoot at the player
bool gameOver(char userBoard[][10],char aiBoard[][10]); //fucntion used to check if the game is over
int main()
{
srand(time(NULL));
char userBoard[10][10]; // initalizes players board
char userAttack[10][10]; //board used to represent players shots
char aiBoard[10][10]; // holds ai boats
char direction; // user inputted direction
int down; // user inputted down number
int across; // user inputted across number
bool check = false; // used in multiple parts of code to check if something is done
int aiDirectionNum; // ai random direction (0 or 1)
char aiDiretionChar; // takes ai direction number and make it into a h or v
int playerShotDown; // player input for shooting down
int playerShotAcross; // player input for shooting across
int aiShotDown; // ai random down shooting
int aiShotAcross; // ai random across shooting
bool game; //semi useless bool that keeps the game running but became useless when I added the gameOver fucntion

for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				userBoard[i][j] = '-';
        userAttack[i][j] = '-'; //generates 3 boards and fills them empty
        aiBoard[i][j] = '-';
			}
    }

		cout << "This is your board!" << endl; //friendly message
    boardOutput(userBoard); //outputs the empty board
	while(check == false){ //while loop used so if user inputs a number that isnt avialble it lets them reinput a spot
		cout << "This is a destroyer and will take up 2 tiles" << endl << "##" << endl;
		cout << "Please input either vertical or horizontal(h,v): ";
		cin >> direction; // gets users direction

			cout << "How many spaces down would you like to move the destroyer?" << endl;
			cin >> down; //gets user down number
			cout << "How many spaces across would you like to go?" << endl;
			cin >> across; // gets user across number

			if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-'){  //makes sure user can place ship
				check = true;
			}
			else if(direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-'){ //makes sure user can place ship
				check = true;
			}
			else{
				cout << "Your ship can not be placed in this spot. Please choose another" << endl; //doesnt allow user to place ship on top of another ship
			}
		}
			if(direction == 'v')
			{
				userBoard[down][across] = 'D';
				userBoard[down+1][across] = 'D'; //changes userboard to D in spots that the user inputted
			}
			if(direction == 'h')
			{
				userBoard[down][across] = 'D';
				userBoard[down][across+1] = 'D'; //changes userboard to D in spots that the user inputted
			}

			boardOutput(userBoard); //outputs board
			check = false; //resets the var
		while(check == false){
			cout << "This is a sub and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction; //gets user direction

				cout << "How many spaces down would you like to move the sub?" << endl;
				cin >> down; // gets where player player wants ship down
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across; // gets where player player wants ship across

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-')  { //makes sure user can place ship
					check = true;
				}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-'){ //makes sure user can place ship
					check = true;
				}
				else{
					cout << "Your ship can not be placed in this spot. Please choose another" << endl; //makes sure ship isnt on ship
				}
			}

				if(direction == 'v') //if vertical then it adds the ships to userboard
				{
					userBoard[down][across] = 'S';
					userBoard[down+1][across] = 'S';
					userBoard[down+2][across] = 'S';
				}
				if(direction == 'h') //if horizontal then it adds the ships to userboard
				{
					userBoard[down][across] = 'S';
					userBoard[down][across+1] = 'S';
					userBoard[down][across+2] = 'S';
				}
boardOutput(userBoard); //outputs board
check = false; // resets var
	while(check == false){
			cout << "This is a battleship and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction; //gets direction

				cout << "How many spaces down would you like to move the battleship?" << endl;
				cin >> down; //gets down
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across; //gets across

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-') { //checks to make sure ship can be placed
						check = true;
					}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-'){ //checks to make sure ship can be placed
				check = true;
			}
				else{
					cout << "Your ship can not be placed in this spot. Please choose another" << endl; //ship cant be on top of another ship
				}
								}

				if(direction == 'v') //if vertical then creates ships
				{
					userBoard[down][across] = 'B';
					userBoard[down+1][across] = 'B';
					userBoard[down+2][across] = 'B';
				}
				if(direction == 'h') //if horizontal then creates ships
				{
					userBoard[down][across] = 'B';
					userBoard[down][across+1] = 'B';
					userBoard[down][across+2] = 'B';
				}
boardOutput(userBoard); //outputs board
check = false; //resets var
	while(check == false){
			cout << "This is a cruiser and will take up 4 tiles" << endl << "####" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction; //gets direction

				cout << "How many spaces down would you like to move the cruiser?" << endl;
				cin >> down; // gets down
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across; // gets across

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-' && userBoard[down+3][across] == '-') { //makes sure ship can be placed
						check = true;
					}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-' && userBoard[down][across+3] == '-'){ //makes sure ship can be placed
				check = true;
								}
								else{
									cout << "Your ship can not be placed in this spot. Please choose another" << endl; // no ship on ship action here
								}
							}
				if(direction == 'v') //if vertical places ship vertical
				{
					userBoard[down][across] = 'C';
					userBoard[down+1][across] = 'C';
					userBoard[down+2][across] = 'C';
					userBoard[down+3][across] = 'C';
				}
				if(direction == 'h') //if horizontal then places ship horizontal
				{
					userBoard[down][across] = 'C';
					userBoard[down][across+1] = 'C';
					userBoard[down][across+2] = 'C';
					userBoard[down][across+3] = 'C';
				}
				boardOutput(userBoard); //outputs userboard
				check = false; //resets var

				while(check == false){
				cout << "This is an aircraft carrier and will take up 5 tiles" << endl << "#####" << endl;
				cout << "Please input either vertical or horizontal(h,v): ";
				cin >> direction; // gets direction

					cout << "How many spaces down would you like to move the aircraft?" << endl;
					cin >> down; //gets down
					cout << "How many spaces across would you like to go?" << endl;
					cin >> across; // gets across

					if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-' && userBoard[down+3][across] == '-'&& userBoard[down+4][across] == '-') { //makes sure ship can be placed
							check = true;
						}
					else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-' && userBoard[down][across+3] == '-' && userBoard[down][across+4] == '-'){ //makes sure ship can be placed
					check = true;
									}
									else{
										cout << "Your ship can not be placed in this spot. Please choose another" << endl; //no ship on ship action
									}
								}

					if(direction == 'v') //places ship vertical
					{
						userBoard[down][across] = 'A';
						userBoard[down+1][across] = 'A';
						userBoard[down+2][across] = 'A';
						userBoard[down+3][across] = 'A';
						userBoard[down+4][across] = 'A';
					}
					if(direction == 'h') //places ship horizontal
					{
						userBoard[down][across] = 'A';
						userBoard[down][across+1] = 'A';
						userBoard[down][across+2] = 'A';
						userBoard[down][across+3] = 'A';
						userBoard[down][across+4] = 'A';
					}
			boardOutput(userBoard); // outputs board
			check = false;

			cout << endl;


//Ai code

		while(check == false){


			aiDirectionNum = rand()%2; // creates random number for direction

			if(aiDirectionNum == 1) //converts to a char
			{
				aiDiretionChar = 'h';
				down = rand()%10; //creates random down
				across = rand()%9; //creates random across
			}
			else
			{
				aiDiretionChar = 'v';
				down = rand()%9; //creates random down
				across = rand()%10; //creates random across
			}


			if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-') {
				check = true; //makes sure ship can be placed
			}
			else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-'){
				check = true; //makes sure ship can be placed
			}
		}


			if(aiDiretionChar == 'v') //places ship
			{
				aiBoard[down][across] = 'D';
				aiBoard[down+1][across] = 'D';
			}
			if(aiDiretionChar == 'h') //places ship
			{
				aiBoard[down][across] = 'D';
				aiBoard[down][across+1] = 'D';
			}



check = false; // var reset

while(check == false){


	aiDirectionNum = rand()%2; // creates random number for direction

	if(aiDirectionNum == 1) //convert
	{
		aiDiretionChar = 'h';
		down = rand()%10; //random down
		across = rand()%8; //random across
	}
	else
	{
		aiDiretionChar = 'v';
		down = rand()%8; //random down
		across = rand()%10; // random across
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-') {
		check = true; //makes sure ship can be placed
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-'){
		check = true;  //makes sure ship can be placed
	}
}


if(aiDiretionChar == 'v') //places ship
{
	aiBoard[down][across] = 'S';
	aiBoard[down+1][across] = 'S';
	aiBoard[down+2][across] = 'S';
}
if(aiDiretionChar == 'h')  //places ship
{
	aiBoard[down][across] = 'S';
	aiBoard[down][across+1] = 'S';
	aiBoard[down][across+2] = 'S';
}


check = false; // var reset

while(check == false){

	aiDirectionNum = rand()%2; // creates random number for direction

	if(aiDirectionNum == 1) //converts
	{
		aiDiretionChar = 'h'; //horizontal stuff
		down = rand()%10;
		across = rand()%8;
	}
	else
	{
		aiDiretionChar = 'v'; //vertical stuff
		down = rand()%8;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-') {
		check = true; //makes sure ship can be placed
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-'){
		check = true; //makes sure ship can be placed
	}
}


if(aiDiretionChar == 'v')
{
	aiBoard[down][across] = 'B';
	aiBoard[down+1][across] = 'B';
	aiBoard[down+2][across] = 'B';
}
if(aiDiretionChar == 'h')
{
	aiBoard[down][across] = 'B';
	aiBoard[down][across+1] = 'B';
	aiBoard[down][across+2] = 'B';
}

check = false;

while(check == false){


	aiDirectionNum = rand()%2; // creates random number for direction

	if(aiDirectionNum == 1)
	{
		aiDiretionChar = 'h'; //horizontal stuff
		down = rand()%10;
		across = rand()%7;
	}
	else
	{
		aiDiretionChar = 'v'; //vertical stuff
		down = rand()%7;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-' && aiBoard[down+3][across] == '-') {
		check = true; //makes sure ship can be placed
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-' && aiBoard[down][across+3] == '-'){
		check = true; //makes sure ship can be placed
	}
}


if(aiDiretionChar == 'v') //ship placement
{
	aiBoard[down][across] = 'C';
	aiBoard[down+1][across] = 'C';
	aiBoard[down+2][across] = 'C';
	aiBoard[down+3][across] = 'C';
}
if(aiDiretionChar == 'h')
{
	aiBoard[down][across] = 'C';
	aiBoard[down][across+1] = 'C';
	aiBoard[down][across+2] = 'C';
	aiBoard[down][across+3] = 'C';
}

check = false;



while(check == false){

	aiDirectionNum = rand()%2; // creates random number for direction

	if(aiDirectionNum == 1) // h or v
	{
		aiDiretionChar = 'h'; //horizontal outcome
		down = rand()%10;
		across = rand()%6;
	}
	else
	{
		aiDiretionChar = 'v'; //vectical outcomes
		down = rand()%6;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-' && aiBoard[down+3][across] == '-' && aiBoard[down+4][across] == '-') {
		check = true; //makes sure ship can be placed
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-' && aiBoard[down][across+3] == '-' && aiBoard[down][across+4] == '-'){
		check = true; //makes sure ship can be placed
	}
}


if(aiDiretionChar == 'v') //places ship
{
	aiBoard[down][across] = 'A';
	aiBoard[down+1][across] = 'A';
	aiBoard[down+2][across] = 'A';
	aiBoard[down+3][across] = 'A';
	aiBoard[down+4][across] = 'A';
}
if(aiDiretionChar == 'h') //places ship
{
	aiBoard[down][across] = 'A';
	aiBoard[down][across+1] = 'A';
	aiBoard[down][across+2] = 'A';
	aiBoard[down][across+3] = 'A';
	aiBoard[down][across+4] = 'A';
}





	while(game = true) //bascially a useless while loop
	{
		if (gameOver(userBoard,aiBoard) == false) //calls function to check if game is over.
		{
			return 1;
		}
		cout << "Input how many spaces down you would like to attack" << endl;
		cin >> playerShotDown; //asks user where they want to shoot
		cout << "Input how many spaces across you would like to attack" << endl;
		cin >> playerShotAcross; //asks user where they want to shoot
		playerShot(aiBoard,playerShotDown,playerShotAcross,userAttack); //calls player shot function
		boardOutput(userAttack); //outputs user attck board
		aiShot(userBoard,aiShotDown,aiShotAcross); // calls ai shot function
		boardOutput(userBoard); //outputs the users board

	}

return 0; // end of main



}

void playerShot(char aiBoard[][10], int playerShotAcross, int playerShotDown,char userAttack[][10])
	{
	bool check = false; //check that ends function when it is done
	while(check == false){

		if(userAttack[playerShotDown][playerShotAcross] == 'O' || userAttack[playerShotDown][playerShotAcross] == 'X') //if statement checks if that spot has already been attacked and if so makes user reinput
		{
			cout << "You already attacked here!" << endl;
			cout << "Input how many spaces down you would like to attack" << endl;
			cin >> playerShotDown;
			cout << "Input how many spaces across you would like to attack" << endl;
			cin >> playerShotAcross;
			check = false;
		}
		else if(aiBoard[playerShotDown][playerShotAcross] == '-') // if statement that checks if the user missed
			{
				cout << "Your shot missed" << endl;
				userAttack[playerShotDown][playerShotAcross] = 'O';
				check = true;
			}
		else if(aiBoard[playerShotDown][playerShotAcross] != '-') // if statement that checks if the user hit
		{
			cout << "Your shot hit!" << endl;
			userAttack[playerShotDown][playerShotAcross] = 'X';
			check = true;
		}
	}
}

void aiShot(char userBoard[][10],int aiShotDown,int aiShotAcross)
	{
	bool check = false; //check that ends fucntion when true
	while(check == false)
		{
		aiShotDown = rand()%11; //creates random down cord
		aiShotAcross = rand()%11; //creates random across cord
		if(userBoard[aiShotDown][aiShotAcross] == 'X'|| userBoard[aiShotDown][aiShotAcross] == 'O') // if statement that checks if ai already attacked this spot
		{
			check = false;
		}
		else if(userBoard[aiShotDown][aiShotAcross] != '-') //checks if ai missed
		{
			cout << "The ai hit his shot!" << endl;
			userBoard[aiShotDown][aiShotAcross] = 'X';
			check = true;
		}
		else if(userBoard[aiShotDown][aiShotAcross] == '-') //checks if ai hit
		{
			cout << "The ai missed his shot" << endl;
			userBoard[aiShotDown][aiShotAcross] = 'O';
			check = true;
		}
	}
}



	bool gameOver(char userBoard[][10],char aiBoard[][10]) //checks if game is over
	{
		int playerships = 0;
		int aiShips = 0;
		for (int i = 0; i < 10; i++)
	  {
	    for(int j = 0; j < 10; j++)
	    {
	      if(userBoard[i][j] == 'A' || userBoard[i][j] == 'S'|| userBoard[i][j] == 'B'|| userBoard[i][j] == 'C' || userBoard[i][j] == 'D') // goes through aray to check if there are any ships left
				{
					playerships = playerships + 1; //adds 1 if there are any ships
				}
	    }
	  }
		for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(aiBoard[i][j] == 'A' || aiBoard[i][j] == 'S'|| aiBoard[i][j] == 'B'|| aiBoard[i][j] == 'C' || aiBoard[i][j] == 'D') // goes through aray to check if there are any ships left
				{
					aiShips = aiShips + 1; //adds 1 if there are any ships
				}
			}
		}
		if (aiShips == 0) {
			cout << "The player wins!" << endl; //checks to see if player wins because there are no ai ships
			return false;
		}
		else if (playerships == 0) {
			cout << "Ai wins!" << endl; //checks to see if ai  wins because there are no player ships
			return false;
		}
		else
		{
			return true;
		}
	}





void boardOutput(char output[][10])
{
  for (int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      cout << setw(2) << output[i][j]; //goes through aray and outputs everything
    }
    cout << endl;
  }

}
