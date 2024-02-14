#include<iostream>
using namespace std;

// int main() {
//     //array creation
//     // int arr[101];
//     // char ch[27];
//     // bool flag[227];
//     // long num[900];
//     // short snum[200];

//     // cout << "Array created successfully" << endl;



//     //Address of array
//     // int a = 5;
//     // cout << "Address of a is : " << &a << endl;

//     // int arr[10];
//     // cout << "Base Address of arr is: " << &arr << endl;



//     //Size of array
//     // int a = 5;
//     // cout << "Size of a is : " << sizeof(a) << endl;

//     // int arr[10];
//     // cout << "Size of arr is : " << sizeof(arr) << endl;



//     //array initialization   (4 ways)

//     // int arr[] = {1,2,3,9,5};

//     // int brr[4] = {1,2,5,4};

//     // int crr[5] = {2,4};

//     // int drr[2] = {1,4,3,5,6};    //error



//     //indexing
//     // int arr[5] = {1,3,2,4,5};

//     // cout << arr[0] << endl;
//     // cout << arr[3] << endl;



//     // int arr[5] = {1,3,2,4,5};
//     // int n = 5;    //no of elements in given array
//     // //print all elements of an array
//     // for(int i=0; i<n; i++) {                    //i works like index
//     //     cout << arr[i] <<" ";
//     // }



//     //Taking input in an array
//     // int arr[5];
//     // int n = 5;
//     // for(int i=0; i<n; i++) {
//     //     cout << "Enter the value for index : " << i << " ";
//     //     cin >> arr[i];
//     //     cout << endl;
//     // }
//     // //Printing an array
//     // cout << "Printing the array : " <<endl;

//     // for(int i=0; i<n; i++) {
//     //     cout << arr[i] << " ";
//     // }





//     //Que -> double up each value of an array
//     // int arr[10];
//     // int n = 10;
//     // //input elements
//     // for(int i=0; i<n; i++) {
//     //     cout << "Enter the value for index " << i << ": ";
//     //     cin >> arr[i];
//     //     cout << endl;
//     // }
//     // //original array
//     // cout << "The original array : ";
//     // for(int i=0; i<n; i++) {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     // //double the value and print an array
//     // cout << "The doubled values of an array : ";
//     // for(int i=0; i<n; i++) {
//     //     arr[i] = 2 * arr[i];
//     //     cout << arr[i] << " ";
//     // }




//     //Que -> sum of each element of an array
//     // int arr[5];
//     // int n = 5;
//     // //input elements
//     // for(int i=0; i<n; i++) {
//     //     cout << "Enter the value for index " << i << ": ";
//     //     cin >> arr[i];
//     //     cout << endl;
//     // }
    
//     // //print array
//     // cout << "Array is : ";
//     // for(int i=0; i<n; i++) {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     // //sum of each element of an array
//     // int sum = 0;
//     // for(int i=0; i<n; i++) {
//     //     sum = sum + arr[i];
//     // }
//     // cout << "The sum of an array is : "<< sum;






//     //Linear Search in array

//     // int arr[5] = {1,2,6,8,10};
//     // int target = 10;
//     // int n = 5;

//     // bool flag = 0;     //initially flag is set as 0
//     // // 0 -> target not found
//     // // 1 -> target found

//     // for(int i=0; i<n; i++) {
//     //     if(arr[i] == target) {
//     //         //found
//     //         flag = 1;
//     //         break;    //if we found target then no need to check further that's why we break the loop
//     //     }
//     // }

//     // if(flag == 1) {
//     //     cout << "Target found";
//     // }
//     // else{
//     //     cout <<"Target not found" << endl;;
//     // }

    

//     return 0;
// }







//Array and Functions

// Que -> print array using functions
// // void printArray(int arr[], int size) {
// //     for(int i=0; i<size; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// int main() {
//     int arr[5] = {2,3,5,4,10};
//     int size = 5;
//     //function call
//     // printArray(arr, size);
// }





// Que -> Linear search Que [no need of flag]
//present -> true
//absent -> false

// // bool linearSearch(int arr[], int size, int target) {
// //     for(int i=0; i<size; i++) {
// //         if(arr[i] == target) {
// //             //found
// //             return true;      //target mali jase to ahiya thi return thai jase
// //         }
// //     }
// //     //loop ni bahar aaya means target nathi malyo
// //     //not found
// //     return false;
// // }

// int main() {
//     // int arr[5] = {2,3,5,4,10};
//     // int size = 5;

//     // int target = 4;
//     // bool ans = linearSearch(arr, size, target);
//     // if(ans == 1) {
//     //     cout << "target found" << endl;
//     // }
//     // else{
//     //     cout << "target not found" << endl;
//     // }
// }




// Que -> count 0 and 1
// void countZeroOne(int arr[], int size){
//     int zeroCount = 0;
//     int oneCount = 0;

//     for(int i=0; i<size; i++) {
//         if(arr[i] == 0) {
//             zeroCount++;
//         }
//         if(arr[i] == 1) {
//             oneCount++;
//         }
//     }

//     cout << "Zero count : " << zeroCount << endl;
//     cout << "One count : " << oneCount << endl;
// }
// int main() {
//     int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
//     //zero -> 7
//     //one -> 8
//     int size = 15;
//     countZeroOne(arr, size);
// }





// Que -> Min element from array
// int findMinimumInArray(int arr[], int size) {
//     //ans store variable
//     int minAns = INT_MAX;

//     for(int i=0; i<size; i++) {
//         if(arr[i] < minAns) {
//             minAns = arr[i];
//         }
//     }
//     return minAns;
// }
// int main() {
//     int arr[] = {2,5,7,43,87,1,23};
//     int size = 7;

//     int minimum = findMinimumInArray(arr, size);
//     cout << "Minimum number is : " << minimum << endl;
// }




// Que -> Reverse an array
// void reverseArray(int arr[], int size) {
//     int left = 0;
//     int right = size-1;

//     while(left <= right) {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }

//     //printing the array
//     for(int i=0; i<size; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int arr[] = {70,60,50,40,30,20,10};
//     int size = 7;
//     reverseArray(arr, size);
// }






// Que -> Extreme print an array
// void extremePrint(int arr[], int size) {
//     int left = 0;
//     int right = size-1;

//     while(left <= right) {
//         // cout << arr[left] << endl;    //here if odd no of elements in size then the code prints the last element twice
//         // cout << arr[right] << endl;
//         // left++;
//         // right--;

//         if (left == right)
//         {
//             cout << arr[left] << endl;     //here last element will be printed only once
//         }
//         else
//         {
//             cout << arr[left] << endl;
//             cout << arr[right] << endl;
//         }
//         left++;
//         right--;
//     }
// }
// int main() {
//     int arr[] = {10,20,30,40,50,60,70};
//     int size = 7;
//     extremePrint(arr, size);
// }










