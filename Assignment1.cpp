

#include<iostream>
using namespace std;

int product(int x, int y)
{
  cout<<"The product of x and y is:"<<x*y<<endl;
}

void rectangle()
{
    int length=7;
    int breadth=4;
    cout<<"The area of rectangle is:"<<length*breadth<<endl;
}

void cube()
{
    int a=4;
    cout<<"Cube value is:"<<a*a*a<<endl;
}

void datatype()
{
    cout<<"size of int is:"<<sizeof(int)<<"byte"<<endl;
    cout<<"Size of float is: "<<sizeof(float)<<"byte"<<endl;
    cout<<"size of char is:"<<sizeof(char)<<"byte"<<endl;
    cout<<"size of double is:"<<sizeof(double)<<"byte"<<endl;
    cout<<"size of long is :"<<sizeof(long)<<"byte"<<endl;
    cout<<"sizeof boolean is: "<<sizeof(bool)<<"byte"<<endl;
}

void swap()
{
    int a=2;
    int b=3;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
int main()
{
// Q1 - Take 2 integer values in two variables x and y and print their product.
// Sample Input : x=2, y=4 (Both integers)
// Sample Output : 8

    int x=2,y=4;
    product(x,y);

// Q2 - Print the ASCII value of character ‘U’.
// Sample Input : already mentioned as ‘U’
// Sample Output : 85

    int a='U';
    cout<<"The ASCII value od a is:"<<a<<endl;

// Q3-Write a C++ program to take length and breadth of a rectangle and print its area.
// Sample Input : 7, 4
// Sample Output : 28   

    rectangle();

// Q4-Write a C++ program to calculate the cube of a number.
// Sample Input : 4
// Sample Output : 64    

    cube();

// Q5-Write a C++ program to find size of basic data types. 
// Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
// used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
// to accomplish this. Give it a try to know the data types in depth)

    datatype();

// Q6-Write a C++ program to swap two numbers with the help of a third variable.
// Sample Input : 2, 3
// Sample Output : 3, 2

    swap();
    return 0;
}