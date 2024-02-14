#include<iostream>
using namespace std;
// int main() {


//     //reference variable concept

//     int n = 5; //normal integer variable

//     //k is reference variabe referring to n
//     int &k = n;      // nickname is given to 'n'...

//     //c is reference variabe referring to n
//     int &c = n;      // nickname is given to 'n'...

//     cout << "n : " << n << endl;
//     cout << "k : " << k << endl;
//     cout << "c : " << c << endl;


//     k++;
//     cout << "n : " << n << endl;
//     cout << "k : " << k << endl;
//     cout << "c : " << c << endl;


//     // int &t = 6;         //we can't do like that 

    
// }




// Call by Value Concept
// int incrementBy1(int n) {
//     n = n + 1;
//     return n;
// } 
// int main() {
//     int n;
//     cin >> n;

//     // int inc = incrementBy1(n);
//     // 
//     //or
//     n = incrementBy1(n);
//     cout <<"n: "<<n<< endl;

//     return 0;

// }





//Call by Reference Concept
// void incrementBy2(int &n){
//     n = n + 2;
// }
// int main() {
//     int n;
//     cin >> n;
//     incrementBy2(n);
//     cout <<"n: "<<n<<endl;
//     return 0;
// }



//Arrays are by default call by reference
// void solve(int arr[], int n) {
//     arr[0] = 100;
// }
// int main() {
//     int arr[] = {1,2,4};
//     int size = 3;

//     solve(arr, size);

//     //printing the array
//     for(int i=0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }



//repeat video   Array level-2

//find unique element                             
// int getUnique(int arr[], int n) {
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         ans = ans^arr[i];      //xor opp
//     }
//     return ans;
// }
// int main() {
//     int arr[] = {2,10,11,2,10,13,15,13,15};
//     int n = 9;
    
//     int finalAns = getUnique(arr, n);
//     cout << "Final ans is : " << finalAns << endl; 
// }




// print all pairs                              
// int main() {
//     int arr[] = {10,20,30};
//     int n = 3;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++){          //try this : strts j from i(int j=i;)
//             cout<< arr[i] <<", "<<arr[j] <<endl;
//         }
//     }
// }





//print pair sum                                //pending





//print triplets                                  
// int main() {
//     int arr[] = {10,20,30};
//     int n = 3;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++){          
//             for(int k=0; k<n; k++) {
//                 cout<< arr[i] <<", "<<arr[j] <<", "<<arr[k]<<endl;
//             }

//         }
//     }
// }                         






//sort 0's and 1's                              
// void sortZeroOne(int arr[], int n) {
//     int zeroCount = 0;
//     int oneCount = 0;

//     //Step - 1 -> count 0 and 1
//     for(int i=0; i<n; i++) {
//         if(arr[i] ==0){
//             zeroCount++;
//         }
//         if(arr[i] ==1){
//             oneCount++;
//         }
//     }

//     //Step - 2 -> place all zeros first
//     int index = 0;

//     while(zeroCount--) {
//         arr[index] = 0;
//         index++;
//     }

//     while(oneCount--) {
//         arr[index] = 1;
//         index++;
//     }

// }
// int main() {
//     int arr[] = {0,0,1,0,1,0,0,1,0};
//     int n = 9;

//     sortZeroOne(arr, n);

//     //printing the array
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
// }






//shift array's element (shifting into right direction)                    
// void shiftArray(int arr[], int n) {

//     // step 1
//     int temp = arr[n-1];

//     //step 2
//     //shift -> arr[i] = arr[i-1]
//     for(int i=n-1; i>=1; i--) {
//         arr[i] = arr[i-1];
//     }

//     //step 3 -> copy temp into 0th index
//     arr[0] = temp;

// }
// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int n = 6;

//     shiftArray(arr, n);

//     //print array
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
// }





//shift 2 elements in array (right direction)
// void shiftArray2(int arr[], int n) {

//     //step 1
//     int temp[] = {arr[n-1], arr[n-2]};

//     // step 2
//     //shift -> arr[i] = arr[i-2]
//     for(int i=n-1; i>=2; i--){
//         arr[i] = arr[i-2];
//     }

//     // step 3 -> copy temp into 0th and 1st index
//     arr[0] = temp[1];
//     arr[1] = temp[0];
// }
// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int n = 6;

//     shiftArray2(arr, n);

//     //print array
//     for(int i=0; i<n; i++) {
//         cout<< arr[i] << " ";
//     }
// }