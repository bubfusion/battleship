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

		cout << "This is a destroyer and will take up 2 tiles" << endl << "##" << endl;
		cout << "Please input either vertical or horizontal(h,v): ";
		cin >> direction;

			cout << "How many spaces down would you like to move the destroyer?" << endl;
			cin >> down;
			cout << "How mant spaces across would you like to go?" << endl;
			cin >> across;

			if(direction == 'v' && down < 9 && across < 10)
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


return 0;
}

void boardOutput(char output[][10])
{
  for (int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      cout << setw(2) << output[i][j]; //loop used to output the prize board
    }
    cout << endl;
  }

}
