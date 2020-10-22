// Sean Cassell
// CS44-0910 Homework V Program b
// Program determines Largest, Smallest, and Mean from file input
// Moves data to CassellS-Random.txt
#include <iostream> //required for cin, cout
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

    // reading from file
    // create file objects
    ifstream infile;
    string filename;

    // user enters file named CassellS-Random.txt
    cout << "Try CassellS-Random.txt " << endl;
    cout << "Enter file name: ";
    cin >> filename;

    // open file
    infile.open("Random.txt");

    if (infile)
        {
            while (infile >> rNum[i])
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

        for (int i = 1; i <= ncount; i++)
        {
            sum += rNum[i];
        }

        // close file
        infile.close();
        }





    else
    {
        // make sure the file exists
        if (!infile.is_open ()) //file not found
        cout << "File not found" << endl;
/*
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

        for (int i = 1; i <= ncount; i++)
        {
            sum += rNum[i];
        }

        // close file
        infile.close();
    }
*/
    ofstream outfile;

    // open file named Random.txt
    outfile.open("CassellS-Random.txt");

    cout << "Sean Cassell's Statistics Program \n\n";
    cout << "Amount of numbers entered: " << ncount << endl;
    // display range
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    // mean is calculated by sum / ncount
    mean = sum / ncount;
    cout << "Mean value: " << mean << endl;

    cout << "\nProgrammed by Sean Cassell " << endl;
/*
    //reading from file
    //create file objects
    ifstream infile;
    string filename;

    // user enters file named CassellS-Random.txt
    cout << "Enter file name: ";
    cin >> filename;
*/
    // close file
    outfile.close();

    // wait for enter key press
    //cin.ignore();
    cin.get();
    return 0;
}
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
