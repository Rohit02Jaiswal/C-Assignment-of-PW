#include <iostream>
#include <math.h>
using namespace std;

// Find factorial..................
int fact(int n)
{
    if (n == 0)
    {
        cout << "0" << endl;
    }
    if (n == 1)
    {
        cout << "1" << endl;
    }
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    cout << result << endl;
}

// Find Armstrong Number between given range................
void armstrong()
{
    for (int i = 1; i < 500; i++)
    {
        int remainder, ans = 0, t = i;
        while (t != 0)
        {
            remainder = t % 10;
            ans = (remainder * remainder * remainder) + ans;
            t = t / 10;
        }
        if (ans == i)
        {
            cout << i << endl;
        }
    }
}

// Sum of natural number...............
void find_natural_sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

// Reverse digit...........
void reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << rev << endl;
}

// CrossPattern ..............
void crosspattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Plush + printing ............
void plushpattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 2 || i == 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Rectangle pattern.............
void rectanglepattern(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    // Q1 - Write a program to calculate the factorial of a number.
    int n;
    cin >> n;
    // fact(n);

    // Q2 - Write a program to print all Armstrong numbers between 100 to 500.
    //  armstrong();

    // Q3 - Write a program to find the sum of n natural numbers.
    //  find_natural_sum(n);

    // Q4 - Write a program to reverse a given integer number.
    //  reverse(n);

    // Q5 - Write a program to print the cross pattern given below (in the shape of X):
    //  crosspattern(n);

    // Q7- Write a program to print + pattern given below :
    //  plushpattern(n);

    // Q10- Write a C++ program to print a rectangle out of *
    int a = 2, b = 5;
    rectanglepattern(a, b);

    return 0;
}