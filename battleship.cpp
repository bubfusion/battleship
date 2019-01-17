#include<iostream>
#include<iomanip>

using namespace std;

void boardOutput(char output[][10]);

int main()
{
srand(time(NULL));
char userBoard[10][10];
char userAttack[10][10];
char aiBoard[10][10];
char direction;
int down;
int across;
bool check = false;
int aiDirectionNum;
char aiDiretionChar;

for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				userBoard[i][j] = '-';
        userAttack[i][j] = '-';
        aiBoard[i][j] = '-';
			}
    }

		cout << "This is your board!" << endl;
    boardOutput(userBoard);
	while(check == false){
		cout << "This is a destroyer and will take up 2 tiles" << endl << "##" << endl;
		cout << "Please input either vertical or horizontal(h,v): ";
		cin >> direction;

			cout << "How many spaces down would you like to move the destroyer?" << endl;
			cin >> down;
			cout << "How many spaces across would you like to go?" << endl;
			cin >> across;

			if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-') {
				check = true;
			}
			else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-'){
				check = true;
			}
			else{
				cout << "Your ship can not be placed in this spot. Please choose another" << endl;
			}
		}
			if(direction == 'v')
			{
				userBoard[down][across] = 'D';
				userBoard[down+1][across] = 'D';
			}
			if(direction == 'h')
			{
				userBoard[down][across] = 'D';
				userBoard[down][across+1] = 'D';
			}

			boardOutput(userBoard);
			check = false;
		while(check == false){
			cout << "This is a sub and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the sub?" << endl;
				cin >> down;
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across;

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-') {
					check = true;
				}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-'){
					check = true;
				}
				else{
					cout << "Your ship can not be placed in this spot. Please choose another" << endl;
				}
			}

				if(direction == 'v')
				{
					userBoard[down][across] = 'S';
					userBoard[down+1][across] = 'S';
					userBoard[down+2][across] = 'S';
				}
				if(direction == 'h')
				{
					userBoard[down][across] = 'S';
					userBoard[down][across+1] = 'S';
					userBoard[down][across+2] = 'S';
				}
boardOutput(userBoard);
check = false;
	while(check == false){
			cout << "This is a battleship and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the battleship?" << endl;
				cin >> down;
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across;

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-') {
						check = true;
					}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-'){
				check = true;
			}
				else{
					cout << "Your ship can not be placed in this spot. Please choose another" << endl;
				}
								}

				if(direction == 'v')
				{
					userBoard[down][across] = 'B';
					userBoard[down+1][across] = 'B';
					userBoard[down+2][across] = 'B';
				}
				if(direction == 'h')
				{
					userBoard[down][across] = 'B';
					userBoard[down][across+1] = 'B';
					userBoard[down][across+2] = 'B';
				}
boardOutput(userBoard);
check = false;
	while(check == false){
			cout << "This is a cruiser and will take up 4 tiles" << endl << "####" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the cruiser?" << endl;
				cin >> down;
				cout << "How many spaces across would you like to go?" << endl;
				cin >> across;

				if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-' && userBoard[down+3][across] == '-') {
						check = true;
					}
				else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-' && userBoard[down][across+3] == '-'){
				check = true;
								}
								else{
									cout << "Your ship can not be placed in this spot. Please choose another" << endl;
								}
							}
				if(direction == 'v')
				{
					userBoard[down][across] = 'C';
					userBoard[down+1][across] = 'C';
					userBoard[down+2][across] = 'C';
					userBoard[down+3][across] = 'C';
				}
				if(direction == 'h')
				{
					userBoard[down][across] = 'C';
					userBoard[down][across+1] = 'C';
					userBoard[down][across+2] = 'C';
					userBoard[down][across+3] = 'C';
				}
				boardOutput(userBoard);
				check = false;

				while(check == false){
				cout << "This is an aircraft carrier and will take up 5 tiles" << endl << "#####" << endl;
				cout << "Please input either vertical or horizontal(h,v): ";
				cin >> direction;

					cout << "How many spaces down would you like to move the aircraft?" << endl;
					cin >> down;
					cout << "How many spaces across would you like to go?" << endl;
					cin >> across;

					if (direction == 'v' && userBoard[down][across] == '-' && userBoard[down+1][across] == '-' && userBoard[down+2][across] == '-' && userBoard[down+3][across] == '-'&& userBoard[down+4][across] == '-') {
							check = true;
						}
					else if (direction == 'h' && userBoard[down][across] == '-' && userBoard[down][across+1] == '-' && userBoard[down][across+2] == '-' && userBoard[down][across+3] == '-' && userBoard[down][across+4] == '-'){
					check = true;
									}
									else{
										cout << "Your ship can not be placed in this spot. Please choose another" << endl;
									}
								}

					if(direction == 'v')
					{
						userBoard[down][across] = 'A';
						userBoard[down+1][across] = 'A';
						userBoard[down+2][across] = 'A';
						userBoard[down+3][across] = 'A';
						userBoard[down+4][across] = 'A';
					}
					if(direction == 'h')
					{
						userBoard[down][across] = 'A';
						userBoard[down][across+1] = 'A';
						userBoard[down][across+2] = 'A';
						userBoard[down][across+3] = 'A';
						userBoard[down][across+4] = 'A';
					}
			boardOutput(userBoard);
			check = false;

			cout << endl;


//Ai code

		while(check == false){


			aiDirectionNum = rand()%2;

			if(aiDirectionNum == 1)
			{
				aiDiretionChar = 'h';
				down = rand()%10;
				across = rand()%9;
			}
			else
			{
				aiDiretionChar = 'v';
				down = rand()%9;
				across = rand()%10;
			}


			if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-') {
				check = true;
			}
			else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-'){
				check = true;
			}
		}


			if(aiDiretionChar == 'v' && down < 9 && across < 10 && check == true)
			{
				aiBoard[down][across] = '#';
				aiBoard[down+1][across] = '#';
			}
			if(aiDiretionChar == 'h' && down < 10 && across < 9)
			{
				aiBoard[down][across] = '#';
				aiBoard[down][across+1] = '#';
			}



check = false;

while(check == false){


	aiDirectionNum = rand()%2;

	if(aiDirectionNum == 1)
	{
		aiDiretionChar = 'h';
		down = rand()%10;
		across = rand()%8;
	}
	else
	{
		aiDiretionChar = 'v';
		down = rand()%8;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-') {
		check = true;
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-'){
		check = true;
	}
}


if(aiDiretionChar == 'v' && down < 8 && across < 10)
{
	aiBoard[down][across] = '#';
	aiBoard[down+1][across] = '#';
	aiBoard[down+2][across] = '#';
}
if(aiDiretionChar == 'h' && down < 9 && across < 8)
{
	aiBoard[down][across] = '#';
	aiBoard[down][across+1] = '#';
	aiBoard[down][across+2] = '#';
}


check = false;

while(check == false){

	aiDirectionNum = rand()%2;

	if(aiDirectionNum == 1)
	{
		aiDiretionChar = 'h';
		down = rand()%10;
		across = rand()%8;
	}
	else
	{
		aiDiretionChar = 'v';
		down = rand()%8;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-') {
		check = true;
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-'){
		check = true;
	}
}


if(aiDiretionChar == 'v' && down < 8 && across < 10)
{
	aiBoard[down][across] = '#';
	aiBoard[down+1][across] = '#';
	aiBoard[down+2][across] = '#';
}
if(aiDiretionChar == 'h' && down < 9 && across < 8)
{
	aiBoard[down][across] = '#';
	aiBoard[down][across+1] = '#';
	aiBoard[down][across+2] = '#';
}

check = false;

while(check == false){


	aiDirectionNum = rand()%2;

	if(aiDirectionNum == 1)
	{
		aiDiretionChar = 'h';
		down = rand()%10;
		across = rand()%7;
	}
	else
	{
		aiDiretionChar = 'v';
		down = rand()%7;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-' && aiBoard[down+3][across] == '-') {
		check = true;
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-' && aiBoard[down][across+3] == '-'){
		check = true;
	}
}


if(aiDiretionChar == 'v' && down < 7 && across < 10)
{
	aiBoard[down][across] = '#';
	aiBoard[down+1][across] = '#';
	aiBoard[down+2][across] = '#';
	aiBoard[down+3][across] = '#';
}
if(aiDiretionChar == 'h' && down < 8 && across < 7)
{
	aiBoard[down][across] = '#';
	aiBoard[down][across+1] = '#';
	aiBoard[down][across+2] = '#';
	aiBoard[down][across+3] = '#';
}

check = false;



while(check == false){

	aiDirectionNum = rand()%2;

	if(aiDirectionNum == 1)
	{
		aiDiretionChar = 'h';
		down = rand()%10;
		across = rand()%6;
	}
	else
	{
		aiDiretionChar = 'v';
		down = rand()%6;
		across = rand()%10;
	}


	if (aiDiretionChar == 'v' && aiBoard[down][across] == '-' && aiBoard[down+1][across] == '-' && aiBoard[down+2][across] == '-' && aiBoard[down+3][across] == '-' && aiBoard[down+4][across] == '-') {
		check = true;
	}
	else if (aiDiretionChar == 'h' && aiBoard[down][across] == '-' && aiBoard[down][across+1] == '-' && aiBoard[down][across+2] == '-' && aiBoard[down][across+3] == '-' && aiBoard[down][across+4] == '-'){
		check = true;
	}
}


if(aiDiretionChar == 'v' && down < 6 && across < 10)
{
	aiBoard[down][across] = '#';
	aiBoard[down+1][across] = '#';
	aiBoard[down+2][across] = '#';
	aiBoard[down+3][across] = '#';
	aiBoard[down+4][across] = '#';
}
if(aiDiretionChar == 'h' && down < 7 && across < 6)
{
	aiBoard[down][across] = '#';
	aiBoard[down][across+1] = '#';
	aiBoard[down][across+2] = '#';
	aiBoard[down][across+3] = '#';
	aiBoard[down][across+4] = '#';
}

boardOutput(aiBoard);

return 0;
}

void boardOutput(char output[][10])
{
  for (int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      cout << setw(2) << output[i][j];
    }
    cout << endl;
  }

}
