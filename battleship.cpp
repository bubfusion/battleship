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
			if(direction == 'v' && down < 9 && across < 10 && check == true)
			{
				userBoard[down][across] = '#';
				userBoard[down+1][across] = '#';
			}
			if(direction == 'h' && down < 10 && across < 9)
			{
				userBoard[down][across] = '#';
				userBoard[down][across+1] = '#';
			}

			boardOutput(userBoard);
			check = false;
		while(check == false){
			cout << "This is a sub and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the destroyer?" << endl;
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

				if(direction == 'v' && down < 8 && across < 10)
				{
					userBoard[down][across] = '#';
					userBoard[down+1][across] = '#';
					userBoard[down+2][across] = '#';
				}
				if(direction == 'h' && down < 9 && across < 8)
				{
					userBoard[down][across] = '#';
					userBoard[down][across+1] = '#';
					userBoard[down][across+2] = '#';
				}
boardOutput(userBoard);
check = false;
	while(check == false){
			cout << "This is a battleship and will take up 3 tiles" << endl << "###" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the destroyer?" << endl;
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

				if(direction == 'v' && down < 8 && across < 10)
				{
					userBoard[down][across] = '#';
					userBoard[down+1][across] = '#';
					userBoard[down+2][across] = '#';
				}
				if(direction == 'h' && down < 9 && across < 8)
				{
					userBoard[down][across] = '#';
					userBoard[down][across+1] = '#';
					userBoard[down][across+2] = '#';
				}
boardOutput(userBoard);
check = false;
	while(check == false){
			cout << "This is a battleship and will take up 4 tiles" << endl << "####" << endl;
			cout << "Please input either vertical or horizontal(h,v): ";
			cin >> direction;

				cout << "How many spaces down would you like to move the destroyer?" << endl;
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
				if(direction == 'v' && down < 7 && across < 10)
				{
					userBoard[down][across] = '#';
					userBoard[down+1][across] = '#';
					userBoard[down+2][across] = '#';
					userBoard[down+3][across] = '#';
				}
				if(direction == 'h' && down < 8 && across < 7)
				{
					userBoard[down][across] = '#';
					userBoard[down][across+1] = '#';
					userBoard[down][across+2] = '#';
					userBoard[down][across+3] = '#';
				}
				boardOutput(userBoard);
				check = false;

				while(check == false){
				cout << "This is an aircraft carrier and will take up 5 tiles" << endl << "#####" << endl;
				cout << "Please input either vertical or horizontal(h,v): ";
				cin >> direction;

					cout << "How many spaces down would you like to move the destroyer?" << endl;
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
								
					if(direction == 'v' && down < 6 && across < 10)
					{
						userBoard[down][across] = '#';
						userBoard[down+1][across] = '#';
						userBoard[down+2][across] = '#';
						userBoard[down+3][across] = '#';
						userBoard[down+4][across] = '#';
					}
					if(direction == 'h' && down < 7 && across < 6)
					{
						userBoard[down][across] = '#';
						userBoard[down][across+1] = '#';
						userBoard[down][across+2] = '#';
						userBoard[down][across+3] = '#';
						userBoard[down][across+4] = '#';
					}
			boardOutput(userBoard);
			check = false;
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
