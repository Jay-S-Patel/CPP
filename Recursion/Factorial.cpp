#include <iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0 || n==1)
        return 1;
    
    // //recursive case
    // int recursionKaAns = factorial(n-1);

    // //processing
    // int finalAns = n * recursionKaAns;
    // return finalAns;

    //recursive relation 
    int finalAns = n * factorial(n-1);
    return finalAns;
}
int main(){
    cout<< factorial(5) <<endl;
    return 0;
}