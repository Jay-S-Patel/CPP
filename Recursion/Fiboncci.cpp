#include <iostream>
using namespace std;
int fib(int n){
    //base case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    // recurence relation 
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    cout<<fib(7)<<endl;
    return 0;
}