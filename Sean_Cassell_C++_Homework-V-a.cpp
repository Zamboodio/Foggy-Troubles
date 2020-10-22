// Sean Cassell
// CS44-0910 Homework V Program a
// Program determines Largest, Smallest, and Mean from file input
#include <iostream> //required for cin, cout
#include <iomanip> // limit decimal places
#include <cstdlib> // rand and srand
#include <ctime>   // time fucntion
#include <fstream> // file access
using namespace std;

int main()
{
    int ncount = 1000;
    int i;
    int smallest;
    int largest;
    int sum;
    int rNum[1000];
    double mean;
    ofstream outfile;

    cout << "Sean Cassell's Statistics Program \n\n";
    cout << "Amount of numbers entered: " << ncount << endl;

    // open file named Random.txt
    outfile.open("Random.txt");

    // Get system time
    unsigned seed = time(0);

    // Seed random number generator
    srand(seed);

    // generate 1000 numbers
    for (int i = 1; i <= ncount; ++i)
        {
            rNum[i] = 1 + rand() % 999;

            // write numbers to file
            outfile << rNum[i] << endl;
            //cout << rNum[i] << endl;
        }
    // close file
    outfile.close();

    //reading from file
    //create file objects
    ifstream infile;

    // open file
    infile.open("Random.txt");

    // make sure the file exists
    if (!infile.is_open ()) //file not found
    cout << "File not found" << endl;

    else
    {
        while (!infile.eof())
        {
        // find largest number
        largest = rNum[0];
        for (int i = 0; i <= ncount; i++)
        {
            if (largest < rNum[i])
                largest = rNum[i];
        }
        // find smallest number
        smallest = rNum[0];
        for (i = 0; i < ncount; i++)
        {
            if (smallest > rNum[i])
                smallest = rNum[i];
        }
            // read the numbers from file
            infile >> rNum[i];
        }
        // display range
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;

        for (int i = 1; i <= ncount; i++)
        {
            sum += rNum[i];
        }

        // mean is calculated by sum / ncount
        mean = sum / ncount;
        cout << "Mean value: " << mean << endl;

        // close file
        infile.close();
    }

    cout << "\nProgrammed by Sean Cassell " << endl;

    // wait for enter key press
    //cin.ignore();
    cin.get();
    return 0;
} // end main

/* Example:
Sean Cassell's Statistics Program

Amount of numbers entered: 1000
Largest number: 998
Smallest number: 1
Mean value: 496

Programmed by Sean Cassell

Process returned 0 (0x0)   execution time : 0.124 s
Press any key to continue.
*/
