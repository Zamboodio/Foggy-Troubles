// Sean Cassell
// CS44-0910 Lab 6 Program A
// Program determines number as prime
#include <iostream> //required for cin, cout
//#include <iomanip>
//#include <cmath>
using namespace std;

bool isPrime(int);

int main()
{
    // old
    int val;

    // old
    // if count determined more than 2 multiplication numbers, return not prime
	int count = 0;

    int n;
	int p1;
	int p2;
	int p3;

	// user enters number
    cout << "Enter integer to see if it is prime: ";
    cin >> n;

		// 0 and 1 not prime
		//(n == 0 || n == 1)
		//cout << n << " means not prime. " << endl;

		// when division equals 1
		p1 = (n / n);

        // when division equals same number
		p2 = (n / 1);
		p3 = p2 / 1;

		if (p1 == 1 && p3 == n)
            cout << n << " means prime. " << endl;
        else
            cout << n << " means not prime. " << endl;

        /*if (count >= 3)
            cout << count << " means not prime. " << endl;
        else
            cout << count << " means prime. " << endl;
            */

    cin.ignore();
    cin.get();
	return 0;
}

/*
    cout << "Enter integer to see if it is prime: ";
    cin >> val;


    // indicate whether number is even or odd
    if (isPrime(val))
        cout << val << " is even. " << endl;
    else
        cout << val << " is odd. " << endl;

    return 0;
}

bool isPrime(int n)
{
    bool status = true;

    if (n % 2 != 0)
        status = false;

    return status;
}*/
