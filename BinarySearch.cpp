#include<iostream>
using namespace std;
#include<vector>

// int binarySearch(int arr[], int n, int target) {
//     int start = 0;
//     int end = n-1;

//     //yahan pe mistake hai check it
//     // int mid = (start + end)/2;
//     int mid = start + (end-start) / 2;         // integer overflow naa thay ena mate 

//     while(start <= end) {
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(target > arr[mid]) {
//             start = mid + 1;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         //mid update
//         mid = (start + end)/2;
//     }
//     // agar yahan tak pohche ho to element nahi mila
//     return -1;
// }
// int main() {
//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int target = 90;
//     int n = 9;

//     int ansIndex = binarySearch(arr, n, target);

//     if(ansIndex == -1) {
//         cout << "Element not found" << endl;
//     }
//     else{
//         cout << "Element found at Index: " << ansIndex << endl;
//     }

//     return 0;
// }






// // find first occurence of target element
// int findFirstOccurence(int arr[], int n, int target) {           
//     int s = 0;
//     int e = n-1;
//     int mid = s +  (e-s)/2;

//     int ans = -1;

//     while(s <= e) {
//         if(arr[mid] == target) {
//             // ans store 
//             ans = mid;
//             //left me jao
//             e = mid-1;
//         }
//         else if (target > arr[mid]) {
//             //right me jao
//             s = mid + 1;
//         }
//         else if (target < arr[mid]) {
//             //left me jao
//             e = mid - 1;
//         }
//         //galti yaha krte h hmesha  (update the mid)
//         mid = s +  (e-s)/2; 
//     }
//     return ans;
// }
// int main() {
//     int arr[] = {10,20,30,30,30,40,60,70};
//     int target = 30;
//     int n = 8;

//     int ansIndex = findFirstOccurence(arr, n, target);

//     if(ansIndex == -1) {
//         cout<<"Element not found "<< endl;
//     }
//     else{
//         cout<<"Element found at Index : " << ansIndex << endl;
//     }

// }





// // find last occurence of target element 
// int findLastOccurence(int arr[], int n, int target) {          
//     int s= 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     int ans = -1;

//     while(s<=e) {
//         if(arr[mid] == target) {
//             //ans store
//             ans = mid;
//             //right me jao
//             s = mid + 1;
//         }
//         else if(target > arr[mid]) {
//             //right me jao
//             s = mid + 1;
//         }
//         else if(target < arr[mid]) {
//             //left me jao
//             e = mid - 1;
//         }
//         //galti yaha krte h hmesha (update the mid)
//         mid = s + (e-s)/2;
//     }
//     return ans; 
// }
// int main() {
//     int arr[] = {10,20,30,30,30,40,60,70};
//     int target = 30;
//     int n = 8;

//     int ansIndex = findLastOccurence(arr, n, target);

//     if(ansIndex == -1) {
//         cout << "Element not found " << endl;
//     } 
//     else {
//         cout << "Element found at Index : " << ansIndex << endl;
//     }

// }





// // find total occurence of target element
// int findTotalOccurence(int arr[], int n, int target) {           
//     int firstOcc = findFirstOccurence(arr, n, target);
//     int lastOcc = findLastOccurence(arr, n, target);
//     int total = lastOcc - firstOcc + 1;
//     return total;
// }
// int main() {
//     int arr[] = {10,20,30,30,30,40,60,70};
//     int target = 30;
//     int n = 8;

//     int ans = findTotalOccurence(arr, n, target);
//     cout << "Total occurence is : " << ans << endl;
// }





// int findMissingElement(int arr[], int n) {                       //pending
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;

//     while(s<=e) {
//         int diff = arr[mid] - mid;

//         if(diff == 1){
//             //right me jao
//             s = mid+1;
//         }
//         else{
//             //store ans
//             ans = mid;
//             //left me jao
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     // return ans+1;   

//     //HW -> How can we remove this, by modifying the above logic
//     if(ans + 1 == 0)     // for last element
//         return n+1;      //last element missing hoy to 0 o/p aavtu hatu mate aavu karyu
  
//     return ans+1;         
// }
// int main() {
//     int arr[] = {1,2,3,4,6,7,8,9};
//     int n = 8;
//     int ans = findMissingElement(arr, n);
//     cout << "Missing Element is : "<<ans<<endl;
// }





// //peak element in mountain array              //LEETCODE 852
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
       

//         while(s < e) {        //s<=e karie to je last ma ek element vadhse ena par e=mid; & mid update(mid = s + (e-s)/2;) valu formula chalu j rehse mate infinite loop bani jase
//             int mid = s + (e-s)/2;      //while loop ni andar mid lakhyo mate niche update karvani jaroor nathi
//             if(arr[mid] < arr[mid+1] ){
//                 //A wali line me hu
//                 //peak right me exist krti h 
//                 s = mid + 1;
//             }
//             else {
//                 //yaa toh main B line pr hu    -> e = mid-1;
//                 //ya toh main Peak element pr hu  -> e = mid;

//                 //I do not want to lost peak that's why i took  -> e = mid;
//                 e = mid;
//             }
//             //mid update
            
//         }
//         return s;     //mid find karta-karta last ma ek j element vadhse mate s & e ek j position par mate s or e koi pan return karay
//     }
// };




// //pivot in rotated & sorted array      
//     int findPivotIndex(vector<int>& arr){
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             //corner case
//             if(s==e) {
//                 // single elem
//                 return s;
//             }

//             if(arr[mid] > arr[mid+1])
//                 return mid;
//             else if (arr[mid] < arr[mid-1])
//                 return mid-1;
//             else if(arr[s] > arr[mid])
//                 e = mid-1;
//             else
//                 s = mid+1;

//              //update mid
//             mid = s + (e-s)/2;
//         }
//         return -1;
//     }
//     int main(){
//         vector<int> v;
//         v.push_back(12);
//         v.push_back(14);
//         v.push_back(16);
//         v.push_back(2);
//         v.push_back(4);
//         v.push_back(6);
//         v.push_back(8);
//         v.push_back(10);

//         int pivotIndex = findPivotIndex(v);
//         cout<<"Pivot index is : "<<pivotIndex<<endl;

//         return 0;
//     }





// //Search in rotated & sorted array    LEETCODE 33           //pending  error in testcase
// int findPivotIndex(vector<int>& arr){
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             //corner case
//             if(s==e) {
//                 // single element
//                 return s;
//             }

//             if(mid+1 < n && arr[mid] > arr[mid+1])
//                 return mid;
//             else if (mid-1 >= 0 && arr[mid] < arr[mid-1])
//                 return mid-1;
//             else if(arr[s] > arr[mid])
//                 e = mid-1;
//             else
//                 s = mid+1;

//              //update mid
//             mid = s + (e-s)/2;
//         }
//         return -1;
// }

// int binarySearch (vector<int>& arr, int s, int e, int target) {
//         int mid = s + (e-s)/2;
//         while(s<=e){
//             if(arr[mid] == target){
//                 return mid;
//             }
//             else if(target > mid) {
//                 s = mid + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return -1 ;
// }

// int search(vector<int>& arr, int target) {
//         int pivotIndex = findPivotIndex(arr);
//         int n = arr.size();
//         int ans = -1;

//         //search in A part
//         if(target >= arr[0] && target<= arr[pivotIndex]) {
//             ans = binarySearch(arr, 0, pivotIndex, target);
//         }
//         // else if(target >= arr[pivotIndex+1] && target<= arr[n-1])
//         else{
//             ans = binarySearch(arr, pivotIndex+1, n-1, target);
//         }
//         return ans;
// }
// int main(){
//         vector<int> v;
//         v.push_back(4);
//         v.push_back(5);
//         v.push_back(6);
//         v.push_back(7);
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(2);

//         int target = 2;

//         int findtarget = search(v, target);
//         cout<<"target is : "<<findtarget<<endl;

//         return 0;
//     }




// //Search in 2D matrix   LEETCODE 74                 T.C = O(log(m*n))   m=row, n=col     //pending

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int n = row*col;    //total size of matrix

//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s <= e){
//             int rowIndex = mid/col;
//             int colIndex = mid % col;
//             int currentNumber = matrix[rowIndex][colIndex];//current position

//             if(currentNumber == target)
//                 return true;
//             else if(target > currentNumber)
//                 //right me jao
//                 s = mid + 1;
//             else{
//                 //left me jao
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return false;
//     }
//     int main() {
//         vector<vector<int>> matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//         int target = 7;
//         bool finalAns = searchMatrix(matrix, target);
//         cout << " final ans is : "<< finalAns << endl;
//     }




// //find Quotient              T.C = O(logn)   n = dividend -> search space = 0 to dividend                          
// int getQuotient(int divisor, int dividend){
//     int s = 0;
//     int e = dividend;
//     int mid = s + (e-s)/2;
//     int ans = -1;

//     while(s<=e){
//         cout<<"s : "<<s<<" e : "<<e<<endl;

//         if(mid * divisor == dividend){
//             return mid;
//         }
//         else if(mid * divisor < dividend){
//             //ans store
//             ans = mid;
//             // right me jao 
//             s = mid+1;
//         }
//         else{
//             //left
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int divisor = 7;
//     int dividend = 29;

//     int ans = getQuotient(abs(divisor), abs(dividend));    //if there is -ve no. then abs converts into +ve no.
//     //now we need to decide ke sign konsa lagaye +ve or -ve
//     if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)){
//         ans = 0 - ans;   //divisor or dividend -> koi ek -ve hoy to ans -ve 
//     }

//     cout<<"Final ans is : "<<ans<<endl;
// }





// //search in nearly sorted array                      
// int searchNearlySorted(int arr[], int n, int target){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(mid-1 >= 0 && arr[mid-1] == target){
//             return mid-1;
//         }
//         if(arr[mid] == target){
//             return mid;
//         }
//         if(mid+1 < n && arr[mid+1] == target){
//             return mid+1;
//         }
//         //upar ni 3 if conditions nearly sorted array mate ni che

//         //upar ni 3 if condition ma element found naa thay to have niche condition check karo
//         if(target > arr[mid]){
//             //right me jao
//             s = mid+2;       //logic in notebook
//                             // if we do s = mid+1 that is also okay but it also check duplicate elements (duplicate comparison thay)
//                             //so, by doing s = mid+2; we are reducing comperisons
//         }
//         else{
//             //left me jao
//             e = mid-2;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {20,10,30,50,40,70,60};
//     int n = 7;
//     int target = 60;

//     int targetIndex = searchNearlySorted(arr, n, target);
//     if(targetIndex == -1) {
//         cout << "Element not found " << endl;
//     }
//     else{
//         cout<<"Element found at Index : "<<targetIndex<<endl;
//     }  
// }






// //Find the odd occuring element                                T.C = O(logn)  ->  n = size of array
// int findOddOccuringElement(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         //single element
//         if(s == e){
//             return s;
//         }   

//         //mid check -> even or odd
//         if(mid & 1){ //mid&1 -> true -> odd number
//             if(mid-1 >= 0 && arr[mid-1] == arr[mid]){
//                 //right me jao
//                 s = mid + 1;
//             }
//             else{
//                 //left me jao
//                 e = mid-1;
//             }
//         } 
//         else{
//             //even wala case
//             if(mid+1 < n && arr[mid] == arr[mid+1]){
//                 //right me jao
//                 s = mid+2;
//             }
//             else{
//                 //yaa toh me right part par khada hu
//                 //yaa toh me answer ke upar khada hu
//                 //that's why e = mid kar raha hu
//                 //kyoki e = mid-1; se ans lost ho sakata hai
//                 e = mid;
//             }
//         }  
//         mid = s + (e-s)/2;       
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
//     int n = 13;
//     int ansIndex = findOddOccuringElement(arr, n);
//     cout<<"Final ans is : " <<arr[ansIndex]<<endl;
// }





// //find sqrt          LEETCODE 69
// class Solution {
// public:
//     int mySqrt(int x) {
//         int s = 0;
//         int e = x;
//         long long int mid = s + (e-s)/2;
//         int ans = -1;

//         while(s <= e){
//             //kya mid hi to ans nahi?
//             if(mid*mid == x){
//                 return mid;
//             }
//             else if(mid*mid < x){
//                 //ans store 
//                 //right me jao
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else{
//                 // left me jao
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }
// };





// // find sqrt with precission
// int mySqrt(int n){
//     int s = 0;
//     int e = 0;
//     int ans = 0;
//     while(s<=e){
//         int mid = s + (e-s)/2;

//         //predicate function
//         if((mid * mid) < n){
//             ans = mid;    //ans store
//             //right me jao
//             s = mid + 1;   

//         }
//         else{
//             ///left me jao
//             e = mid - 1;
//         }
//     }
//     return ans;
// }
// double myPrecisionSqrt(int n){
//     double sqrt = mySqrt(n);
//     int precision = 10;
//     double step = 0.1;
//     for(int i=0; i<precision; ++i){
//         double j = sqrt;
//         while(j * j <= n){
//             sqrt = j;
//             j += step;
//         }
//         step /= 10;
//     }
//     return sqrt;
// }
// int main(){
//     int n = 63;
//     // cout << mySqrt(n)<<endl;
//     cout<<myPrecisionSqrt(n)<<endl;
//     return 0;
// }





// //Devide two integer with precision
// int divide(int dividend, int divisor)
// {
//     int s = 0, e = dividend;
//     int ans = 0;
//     while (s <= e)
//     {
//         int mid = (e - s) / 2 + s;
//         // check if mid is the answer, treat mid as Quotient
//         // Quotient * Divisor + Reminder = Dividend,
//         // Predicate: Quotient * Divisor <= Dividend
//         if (mid * divisor <= dividend)
//         {
//             ans = mid;
//             // go right for more precise answer
//             s = mid + 1;
//         }
//         else
//             e = mid - 1;
//     }
//     return ans;
// }

// double myPrecisionDivide(int dividend, int divisor)
// {
//     double quotient = divide(dividend, divisor);
//     int precision = 5;
//     double step = 0.1;
//     for (int i = 0; i < precision; ++i)
//     {
//         double j = quotient;
//         while (j * divisor <= dividend)
//         {
//             quotient = j;
//             j += step;
//         }
//         step /= 10;
//     }
//     return quotient;
// }

// int main()
// {
//     int dividend = 29;
//     int divisor = 7;
//     cout << myPrecisionDivide(dividend, divisor) << endl;
//     return 0;
// }





