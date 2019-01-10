#include<iostream>
#include<iomanip>

using namespace std;

void boardOutput(char output[10][10]);

int main()
{
srand(time(NULL));
char userBoard[10][10];
char userAttack[10][10];
char aiBoard[10][10];

for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				userBoard[i][j] = '-';
        userAttack[i][j] = '-';
        aiBoard[i][j] = '-';
			}
    }

    cout << boardOutput(userBoard[][]) << endl;
return 0;
}

void boardOutput(char output[10][10])
{
  for (int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << setw(2) << output[i][j]; //loop used to output the prize board
    }
    cout << endl;
  }

}
