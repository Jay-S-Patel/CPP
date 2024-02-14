#include <iostream>
using namespace std;

#define AUTHOR "Jay"   // it's called macros

int main()
{
    //     cout << "hello world!";
    //     cout << endl;
    //     cout << '\n';
    //     cout << "jay";
    //     cout << endl;
    //     cout << "jay" << endl << "patel" << '\n';
    //     cout << "jay"; cout<<"jays";
    //

    // int num = 50;
    // cout << num << endl;
    // cout << sizeof(num) << endl;      // space taken in memory by integer(4 byte)

    // char ch = 'k';
    // cout << ch << endl;
    // cout << sizeof(ch) << endl;

    // long number = 23;
    // cout  << number << endl;
    // cout << sizeof(number) << endl;

//     int numm;    // gives any value (garbage value)

//     numm = 12;
//     cout << numm << endl;

//operators
    // int a = 5;
    // int b = 3;
    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl;     // here ans in integer
    // cout << a % b << endl;

    // cout << (a <= b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a == b) << endl;

    int age = 18;
    int car = 12;
    if(age >= 18 && car >=1) {
        cout << "License milega" << endl;
    }

    if(age >= 18 || car >=1) {
        cout << "License milega" << endl;
    }

    cout << age << endl;
    cout << !age << endl;

    int marks;
    cout << "Enter marks : " << endl;
    cin >> marks;
    cout << "Printing marks : " << marks << endl;

    cout << "Written By : " << AUTHOR << endl;

    return 0;

    
}