#include <iostream>
using namespace std;
int sum(int n){
    //base case
    if(n==0){
        return 0;      //or   (n==1) -> return 1;
    }

    //recurence relation
    int ans = n + sum(n-1);
    return ans;
}
int main(){
    cout<< sum(5) << endl;
    return 0;
}