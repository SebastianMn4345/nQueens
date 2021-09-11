//Getting my old self back for being a dumbass
//I will complete this problem
#include <iostream> 
#include <vector>

using namespace std;

const int BOARD_SIZE = 4;

void setMatrix(int (*qArray)[BOARD_SIZE]);

void printMatrix(int (*qArray)[BOARD_SIZE]);

bool placeQueen(int x, int y, int(*qArray)[BOARD_SIZE]);

int main()
{
    int qArray[BOARD_SIZE][BOARD_SIZE];

    setMatrix(qArray);

    printMatrix(qArray);

    int x, y;

    cout << "please choose an x-coordinate between 0-3" << endl;
    cin >> x;
    cout << "please choose a y-coordinate between 0-3" << endl;
    cin >> y;
    cout << endl;

    placeQueen(x, y, qArray);

    printMatrix(qArray);


return 0;
}

bool placeQueen(int x, int y, int(*qArray)[BOARD_SIZE])
{
  

    return 0;
}





















void setMatrix(int (*qArray)[BOARD_SIZE])
{
    for(int i = 0; i < BOARD_SIZE; i++)
    {
        for(int j = 0; j < BOARD_SIZE; j++)
        {
            qArray[i][j] = 0;
        }
    }
}


void printMatrix(int (*qArray)[BOARD_SIZE])
{
    for(int i = 0; i < BOARD_SIZE; i++)
    {
        for(int j = 0; j < BOARD_SIZE; j++)
        {
            cout << qArray[i][j] << " ";
        }
        cout << endl;
    }
}