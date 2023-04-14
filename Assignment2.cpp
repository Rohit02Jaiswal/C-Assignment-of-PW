#include <iostream>
using namespace std;

bool equalOrNot(int a, int b)
{

    if (a == b)
        return 1;
    else
        return 0;
}

bool isTrue(int a, int b)
{
    if (a < 50 && a < b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void girlsGrade()
{
    int boys = 17;
    int total = (80 * 45) / 100;
    int girls = total - boys;
    cout << "Numbers of girls getting grade A =" << girls << endl;
}

void sumOfFirstandSecondLast()
{
    int digit = 12345;
    int first = digit / 10000;
    int secondDigit = digit / 10;
    int secondLast = secondDigit % 10;
    cout << "Sum of first and second last digit is:" << first + secondLast << endl;
}

void sumOfDigits()
{
    int n = 123;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << "Sum of three digit is:" << sum << endl;
}

void calculator()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    char operation;
    cout << "Which operation want you perform..?" << endl;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "Sum of a and b is:" << a + b << endl;
        break;
    case '-':
        cout << "Difference of a and b is:" << a - b << endl;
        break;
    case '*':
        cout << "product of a and b is:" << a * b << endl;
        break;
    case '/':
        cout << "Division of a and b is:" << a / b << endl;
        break;
    case '%':
        cout << "Modulo of a and b is:" << a % b << endl;
        break;
    default:
        cout << "Invalid operations...." << endl;
        break;
    }
}
int main()
{
    // Q1 - Write a program to check whether two numbers (entered by user) are equal or not.
    // Sample Input 1: 1, 2
    // Sample Output 1: 0
    int x = 1, y = 2;
    cout << equalOrNot(x, y) << endl;

    // Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if
    // both the conditions 'a < 50' and 'a < b' are true.
    // Sample Input 1 : 1, 2
    // Sample Output 1: 0
    int a, b;
    cin >> a >> b;
    cout << isTrue(a, b) << endl;

    // Q3-There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
    // girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
    // Sample Input : 45
    // Sample Output : 19
    girlsGrade();

    // Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
    // Sample Input : 12345
    // Sample Output : 1+4=5
    sumOfFirstandSecondLast();

    // Q5 - Write a program to calculate the sum of digits of a 3 digit number.
    // Sample Input : 123
    // Sample Output : 6
    sumOfDigits();

    // Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
    // Sample Input : 8 10
    // Sample Output :
    // Sum = 18
    // Difference = -2
    // Product = 80
    // Division = 0.8
    calculator();

    return 0;
}