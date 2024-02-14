


#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;



// // void printLine () {
// //     for (int i=0; i<5; i++) {
// //         cout << "Hello jay" << endl;
// //     }
// // }


// //// write a function to print sum of 3 nums 
//  int printSum(int a, int b, int c) {
//     int answer = a + b + c;
//     cout << "answer is : " << answer << endl;
    
// }


// // write a function to return sum of 3 nums                 pending

// int main () {
//     // printSum(1,2,4);
    

//     // cout << "Hii" << endl;
//     // printLine();

    
//     return 0;
// }







// maximum number
// void printMaximum(int num1, int num2, int num3) {
//     if(num1>=num2 && num1>=num3) {
//         cout << "maximum is : " << num1 << endl;
//     }
//     else if (num2>=num1 && num2>=num3) {
//         cout << "maximum is : " << num2 << endl;
//     }
//     else{
//         cout << "maximum is : " << num3 << endl;
//     }
// }

// int main () {
//     printMaximum(10,9,7);
// }





// maximum number (using inbuilt function)  (print the finalAns)
// void printMax(int n1, int n2, int n3) {
//     int ans1 = max(n1,n2);
//     int finalAns = max(ans1,n3);
//     cout << "Maximum is : " << finalAns << endl;
// }
// int main() {
//     printMax(2,9,5);
// }




// return function (return the finalAns)
// int printMaxNum(int n1, int n2, int n3) {
//     int ans1 = max(n1,n2);
//     int finalAns = max(ans1,n3);
//     return finalAns;
// }
// int main() {
//     int maximum = printMaxNum(3, 10, 100);
//     cout << "Maximum is : "  << maximum << endl;
// }




//print counting from 1 to n
// void printCounting (int n) {
//     for(int i=0; i<n; i++) {
//         cout << i << endl;
//     }
// }

// int main () {
//     printCounting(10);
// }




//check even or odd number
// void checkEvenOdd(int n) {
//     if(n%2 == 0) {
//         cout << "Number is even" << endl;
//     }
//     else {
//         cout << "Number is odd" << endl;
//     }
// }
// int main() {
//     checkEvenOdd(11);
// }




//return (even or odd)
// bool checkEven(int n) {
//     if(n%2 == 0) {
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     bool isEven = checkEven(n);

//     if(isEven) {
//         cout << "is Even number" << endl;
//     }
//     else {
//         cout << "is Odd number" << endl;
//     }
// }




//bitwise operator(even or odd)
// bool checkEven(int n) {
//     if((n&1) == 0){              // 010010  if last digit is 0 then even
//                                 //  010011  if last digit is 1 then odd  
//         return true;
//     }
//     else {
//         return false;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     bool isEven = checkEven(n);

//     if(isEven) {
//         cout << "is Even Number" << endl;
//     }
//     else {
//         cout << "is Odd Number" << endl;
//     }
// }





//sum up to N numbers
// void findSumUptoN(int n) {
//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//         sum = sum + i;
//     }
//     cout << "Final sum is : " << sum << endl;
// }
// int main() {
//     findSumUptoN(10);
// }





//check number is prime or not
// return true -> if n is a prime number
// return false -> if n is not a prime number
// bool checkPrime(int n) {
//     for(int i=2; i<n; i++) {
//         if(n%i == 0) {
//             //perfectly divisible -> not prime
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     bool prime = checkPrime(11);
    
//     if(prime) {
//         cout << "It's a prime number" << endl;
//     }
//     else {
//         cout << "It's not a prime number" << endl;
//     }
// }





//Function to find Area of Circle
// float areaOfCircle(float r) {
//     float area = (M_PI) * (r*r) ;
//     // float area = (3.14) * (r*r) ;
//     return area;
// }
// int main() {
//     float r;
//     cin >> r;
//     float circlearea = areaOfCircle(r);
//     cout << "Area of Circle is : " << circlearea << endl;
// }




//print 1 to N prime numbers
// bool prime1toN(int n) {
//     if(n==0 || n==1) {
//         return false;
//     }
//     for(int i=2; i<n; i++) {
//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         if(prime1toN(i)) {
//             cout << i << endl;
//         }
//     }
// }






//Factorial number
// int factorialN(int n) {
//     if(n==0 || n==1) {
//         return 1;
//     }
//     int ans = n * factorialN(n-1);
//     return ans;
// }
// int main() {
//     int factorialOfNum = factorialN(5);
//     cout << "Factorial of number is : " << factorialOfNum << endl;
// }


//Factorial number (main method ch)
// long long int fact(int n) {
//     long long int fact = 1;
//     for(int i=1; i<=n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main() {
//     int n;
//     cin >> n;
//     long long int ans = fact(n);
//     cout << "Factorial of " << n << " is " << ans << endl;
// }






//Reverse the Integer                       (Leet code - 7)
// int reverse(int x){
//     int ans = 0, rem = 0;
//     bool isNeg=false;
//     if(x <= INT_MIN){
//         return 0;
//     }
//     if(x < 0){
//         isNeg=true;
//         x = -x;
//     }
//     while(x > 0){
//         if(ans > INT_MAX / 10) {
//             return 0;
//         }
//         int digit = x % 10;
//         ans = ans * 10 + digit;
//         x = x / 10;
//     }
//     return isNeg ? -ans : ans;
// }
// int main() {
//     int x ;
//     cin >> x;
//     int reverseNum = reverse(x);
//     cout << "Reverse Number of " << x <<" is "<<reverseNum<<endl;
// }





//set Kth bit
// int setKthBit(int N, int K) {
//     int mask = 1 << K;     //leftshift by K                            
//     int ans = N | mask;
//     return ans;
// }
// int main() {
//     int Kthbitans = setKthBit(10, 2);
//     cout << "Ans is : " << Kthbitans << endl;
// }

/* 10 means 1010(binary) 
1 << 2 -> 100(it's called mask)
1010 | 0100 == 1110(binary of 14)  
so, ans is 14 */





// Convert Tempereture                      (Leet code - 2469)
// double convertTemp(double celsius) {
//     // double k = celsius + 273.15;
//     double f = celsius * 1.80 + 32.00;
//     double ans = f;
//     return ans;
// }
// int main() {
//     double celsius;
//     cin >> celsius;
//     double temp = convertTemp(celsius);
//     cout << "Convertes tempereture is : " << temp << endl;
// }
