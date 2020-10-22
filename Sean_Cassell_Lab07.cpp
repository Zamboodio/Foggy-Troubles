// Sean Cassell
// CS44-0910 Lab 7 Program 1
// Program simulates a magic square using a three-dimensional array
// Program accepts three-dimensional array as an argument,
// and determines whether the array is a Lo Shu Magic Square or not
#include <iostream> //required for cin, cout
using namespace std;

    const int CORRECTSUM = 15;
    const int SIZE = 3;
    int loShu[SIZE][SIZE] = {{0, 0, 0},
                             {0, 0, 0},
                             {0, 0, 0}};

bool isLoShu(); // Prototype

int SUM;
//int SUMrow;
//int SUMcol;

int main()
{
    string text;

    // potential to enter dimensions
    cout << "Question 1: What is the constant unchanging number of rows, and \n"
         << "number of columns that the array that you will use, will always have? ";
    getline(cin, text);
    cout << endl;

    cout << "Question 2: What is the sum that the 3 elements in a row, a column, \n"
         << "or a diagonal will always add up to? ";
    getline(cin, text);
    cout << "(Add all unique/unrepeated numbers then divide by SIZE)" << endl;
    cout << endl;

    cout << "Question 3: How many different tests (i.e. if statements) will you \n"
         << "have to do to determine if the square is a Lo Shu square? ";
    getline(cin, text);
    cout << endl;

    cout << "Question 4: Shown above are the values of a true Lo Shu Magic Square. \n"
         << "Can you think of a different arrangement of numbers that \n"
         << "will also result in a Lo Shu Magic Square? What are they? ";
    //getline(cin, text);
    cout << endl << endl;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
        {
            cout << "Enter element for row " << i+1 << ", column " << j+1 << ": ";
            cin >> loShu[i][j];
        }
    cout << (isLoShu() ? "It's a Lo Shu!" : "It's not a Lo Shu!") << endl;
    return 0;
}

bool isLoShu()
{

/*
// diagonal up sum
for (int i = 0; i < SIZE; i++)
    {
    {
        for (int i = 0; i < SIZE; i++)
        SUM += loShu[i][i];
    }

    cout << SUM << endl;
    //SUM = 0;
    }
*/

// row sum
for (int i = 0; i < SIZE; i++)
    {
    {
        for (int j = 0; j < SIZE; j++)
        SUM += loShu[i][j];
    }

    cout << SUM << endl;
    SUM = 0;
    //SUMrow -= 15;
    }

// column sum
for (int j = 0; j < SIZE; j++)
    {
    {
        for (int i = 0; i < SIZE; i++)
        SUM += loShu[j][i];
    }

    cout << SUM << endl;
    SUM = 0;
    //SUMcol -= 15;
    }
/*
// diagonal down sum
for (int j = 0; j < SIZE; j++)
    {
    {
        for (int j = 0; j < SIZE; j++)
        SUM += loShu[j][j];
    }

    cout << SUM << endl;
    SUM = 0;
    }
*/
 /*
    // if all sums = 5, true Lo Shu
    //if (SUM == 15)
    //cout << SUM << endl;
    if (SUM == CORRECTSUM)
        {
            bool isLoShu = true;
        }
        */
    // if must be true
    // sum of row 1 = 5
    // sum of row 2 = 5
    // sum of col 1 = 5
    // sum of col 2 = 5
    // sum of dia 1 = 5
    // sum of dia 2 = 5
    //diagonal wont work even if row and column would
}
/* Example:
Question 1: What is the constant unchanging number of rows, and
number of columns that the array that you will use, will always have? 3

Question 2: What is the sum that the 3 elements in a row, a column,
or a diagonal will always add up to? 15
(Add all unique/unrepeated numbers then divide by SIZE)

Question 3: How many different tests (i.e. if statements) will you
have to do to determine if the square is a Lo Shu square? 1

Question 4: Shown above are the values of a true Lo Shu Magic Square.
Can you think of a different arrangement of numbers that
will also result in a Lo Shu Magic Square? What are they?

Enter element for row 1, column 1: 6
Enter element for row 1, column 2: 1
Enter element for row 1, column 3: 8
Enter element for row 2, column 1: 7
Enter element for row 2, column 2: 5
Enter element for row 2, column 3: 3
Enter element for row 3, column 1: 2
Enter element for row 3, column 2: 9
Enter element for row 3, column 3: 4
15
15
15
15
15
15
It's a Lo Shu!

Process returned 0 (0x0)   execution time : 40.374 s
Press any key to continue.
*/
