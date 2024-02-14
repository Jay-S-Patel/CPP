#include<iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Enter Two Numbers : " << endl;
    cin>>a>>b;

    int op;
    cout<<"What Operation you want to do?" << endl;
    cin >> op;
    float ans = 0;
    //op 0 -> add, 1 -> sub, 2 -> multiply, 3 -> divide, invalid operation

    switch (op)              //this op(expression we passed) is must be integral datatype(whole number) (not like: float,double)
                            // like: int,char,short,long,longlong and their unsigned versions etc.
    {
    case 0:
        ans = a + b;
        break;
    
    case 1:
        ans = a - b;
        break;

    case 2:
        ans = a * b;
        break;
    
    case 3:
        ans = a / b;
        break;

    default:
        cout << "Invalid Operation" <<endl;
        return 0;
    }
    cout<<"Your answer is : "<<ans<<endl;
    return 0;

}