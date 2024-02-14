#include<iostream>
using namespace std;

// pointers class-1


// int main(){
//     // int a = 5;
//     // cout<<a<<endl;
//     // cout<<"address of a : "<<&a<<endl;

//     // //pointer creation
//     // int* ptr = &a; 

//     // //accesing value stored at address stored in ptr
//     // cout << "Accessing: "<<*ptr<<endl;
//     // cout<<ptr<<endl;    //ptr points on a that's why it prints address of a
//     // cout<<&ptr<<endl;   //&ptr prints the address of ptr



//     // int b = 10;
//     // int* p = &b; 
//     // p = p + 1;   //p is a pointer ; inside p we have address of b; so, we add 1 in that address
//     // cout<< *p;   //then we want value at that adress(adress after add 1)
//     //              //so, it will print garbage value; because we have not assign any value at that adress




//     // char ch[10] = "babbar";       //ch[10] is a array
//     // cout << &ch <<endl;
//     // // char* cptr = &ch;        //error compile-time
//     // char* cptr = ch;
//     // cout<< cptr << endl;    //prints babbar
//     // cout<< *cptr << endl;  //prints only first character   here, prints 'b'

//     // cout << &ch[0] << endl;  //prints babbar

    

//     return 0;
// }




// pointers class-2

// pointers to a function  (size of array in function is 8 byte)

// void solve(int arr[], int size){
//     cout<<"Size of array inside func : "<<sizeof(arr)<<endl;
// }
// int main(){
//     int arr[] = {10,20,30,40,50};
//     cout<<"Size of array : "<<sizeof(arr)<<endl;
//     solve(arr, 5);
//     return 0;
// }





// void solve(int *arr, int size){
//     cout<<"Inside solve -> arr : "<< arr <<endl;
//     cout<<"Inside solve -> &arr : "<< &arr <<endl;          //different
// }
// int main(){
//     int arr[] = {10,20,30,40,50};
//     solve(arr, 5);

//     cout<<"Inside main -> arr : "<< arr <<endl;
//     cout<<"Inside main -> &arr : "<< &arr <<endl;

//     return 0;
// }




// void solve(int *arr, int size){
//     *arr = *arr + 1;              //increase value of first element of an array by 1 
// }
// int main(){
//     int arr[] = {10,20,30};
//     solve(arr,3);

//     for(int i=0; i<3; i++){
//         cout<<arr[i]<<" ";               //OP : 11,20,30
//     }
// }




// void solve(int* p){          //pass by value
//     p = p + 1;
// }
// int main(){
//     int a = 5;
//     int* p = &a;

//     cout<< "p:"<< p << endl;
//     cout<< "&p:"<< &p << endl;
//     cout<< "*p:"<< *p << endl;
//     solve(p);
//     cout<< "p:"<< p << endl;
//     cout<< "&p:"<< &p << endl;
//     cout<< "*p:"<< *p << endl;
//     return 0;
// }




// void solve(int* &p){          //pass by reffernce
//     p = p + 1;
// }
// int main(){
//     int a = 5;
//     int* p = &a;

//     cout<< "p:"<< p << endl;
//     cout<< "&p:"<< &p << endl;
//     cout<< "*p:"<< *p << endl;
//     solve(p);
//     cout<< "p:"<< p << endl;
//     cout<< "&p:"<< &p << endl;
//     cout<< "*p:"<< *p << endl;
//     return 0;
// }