#include<iostream>
using namespace std;
int x = 2;   //global variable

// void fun(){
//     int x = 60;
//     cout<< x << endl;
//     ::x = 40;
//     cout<< ::x << endl;
// }

int main(){
    ::x = 4;     //global x (modified)
    int x = 20;  // local variable to main function
    cout<< x <<endl;
    cout<< ::x << endl;   //accessing Global variable with ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }

    // fun();
    return 0;
}

