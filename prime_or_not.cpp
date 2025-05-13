#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaring variables
    int num, sqrt_num;
    float squareroot;

    // Asking user to input the number to be considered
    cout << "\nI can help you to determine whether a number is prime or not!";
    cout << "\nEnter the number: ";
    cin >> num;

    // Doing basic checks (Removes number less than 1 since they are neither prime nor composite)
    if (num <= 1)
    {
        cout << "\nThe number is " << num << ". So it can't be determined as neither prime nor composite";
        exit(0);
    }

    // Dividing by 2 and 3 to check they are prime or composite
    if (num % 2 == 0)
    {
        cout << "\nThe number is composite, since it can be divided by 2";
        exit(0);
    }

    if (num % 3 == 0)
    {
        cout << "\nThe number is composite, since it can be divided by 3";
        exit(0);
    }

    // Now moving to advanced checks.
    // If a number is composite, one of the factor will be always less than the square root of number itself.
    // We only need to check untill this factor.
    squareroot = sqrt(num);
    sqrt_num = ceil(squareroot);

    // Now we checking whether the number is factor of any prime number (untill the squareroot)
    for (int i = 5; i <= sqrt_num; i += 6)
    {
        if (num % i == 0)
        {
            cout << "\nThe number is composite since it can be divided by " << i;
            exit(0);
        }

        if (num % (i+2) == 0)
        {
            cout << "\nThe number is composite since it can be divided by " << (i + 2);
            exit(0);
        }
    }

    // Printing if none of these works (it is prime)
    cout << "\nThe number you provided is a prime number.";
    return 0;
}