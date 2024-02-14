#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// // Segregate Negative Positive Numbers:
// void shiftNegativeOneSide(int arr[], int n) {
//   int j = 0;
//   // j-> memory block -> jaha pr main negative
//   //number store kr skta hu

//   for(int index=0; index<n; index++) {
//     //index -> entire array ko traverse karne k liye
//     if(arr[index] < 0) {
//       swap(arr[index], arr[j]);
//       j++;
//     }
//   }
// }

// int main() {

//   int arr[] = {1,7,12,10,11,40,0};
//   int n = 7;

//   shiftNegativeOneSide(arr, n);

//   //print
//   cout << "Printing the array " << endl;
//   for(int i=0; i<n; i++) {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }





// -> LEET CODE QUESTIONS

// // Sort COlors:      LEETCODE 75

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int index = 0;
//         int left = 0;
//         int right = n-1;

//         while(index <= right) {

//             if(nums[index] == 0) {
//                 swap(nums[index], nums[left]);
//                 left++;
//                 index++;
//             }
//             else if(nums[index] == 2) {
//                 swap(nums[index], nums[right]);
//                 right--;
//                 //catch -> no need of index++
//                 //index++
//             }
//             else {      //1 wala case  -> just ignore and do index++
//                 index++;
//             }

//         }

//     }
// };





// // Rotate Array:          LEET CODE 189

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> ans(n);

//         for(int index=0; index<n; index++) {
//             int newIndex = (index + k ) % n;
//             ans[newIndex] = nums[index];
//         }

//         nums = ans;
//     }
// };



// // Rotate Array:          LEET CODE 189
// //Reversal Method 
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {

//     //Reversal Method
//     //k=3
//     k %= nums.size();
//     // 1. reverse(0, n-1)
//     reverse(nums.begin(), nums.end());

//     // 2. reverse(0, k-1)
//     reverse(nums.begin(), nums.end() + k);

//     // 3. reverse(k, n-1)
//     reverse(nums.begin() + k, nums.end());
//     }
// };





// // Missing Number:

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int sum = 0;
//         int n = nums.size();

//         for(int index=0;index<n; index++) {
//             sum = sum + nums[index];

//         }

//         int totalSum = ((n)*(n+1))/2;
//         int ans = totalSum - sum;
//         return ans;
//     }
// };




// // ReArrange Array:

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         int index = 0;
//         int evenIndex = 0;
//         int oddIndex = 1;
//         vector<int> ans(n);

//        while(index < n ) {
//            if(nums[index] > 0) {
//             ans[evenIndex] = nums[index];
//             evenIndex += 2;
//            }
//            index++;
//        }

//        index = 0;
//         while(index < n ) {
//            if(nums[index] < 0) {
//             ans[oddIndex] = nums[index];
//             oddIndex += 2;
//            }
//            index++;
//        }
//        return ans;
//     }
// };





// // Row with Maximum Ones:

// class Solution {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//         vector<int> ans;
//         int n = mat.size();
//         //oneCOunt -> will store max number of 1's in a row
//         int oneCount = INT_MIN;
//         //rowNo -> will store index of max no. of 1's wali row
//         int rowNo ;

//         for(int i=0; i<n; i++) {
//             //hr row start hone se phle initialise count with 0
//             int count = 0;
//             for(int j=0; j< mat[i].size(); j++) {
//                 //if 1 found, then increment count
//                 if(mat[i][j] == 1) {
//                     count++;
//                 }
//             }
//             //after row completion, compare count with oneCount
//             if(count > oneCount) {
//                 oneCount = count;
//                 rowNo = i;
//             }

//         }

//         ans.push_back(rowNo);
//         ans.push_back(oneCount);
//         return ans;

//     }
// };

// // Rotate Image:

// class Solution {
// public:

//     void reverseVector(vector<int>& arr) {
//         int n = arr.size();
//         int start = 0;
//         int end = n-1;

//         while(start < end) {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }

//     }
//     void rotate(vector<vector<int>>& matrix) {

//         int n = matrix.size();

//         //transpose
//         for(int i=0; i<n; i++) {
//             for(int j=i; j<matrix[i].size(); j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         //reverse -> 2D MATTIX ki ssaari rows ko
//         //kitni rows h -> 0 > (n-1)
//         for(int i=0; i<n; i++) {
//             //hr row ko reverse krna h
//             reverseVector(matrix[i]);
//         }

//     }
// };





// Week-3 Assignments

// key pair (two sum)      Method-1    (O(n^2) time complexity)
//  bool twoSum(int arr[], int n, int x)  {
//      for(int i=0; i<n; ++i) {
//          for(int j=i+1; j<n; j++) {
//              if(arr[i] + arr[j] == x){
//                  return true;
//              }
//          }
//      }
//      return false;
//  }
//  int main() {
//      int arr[] = {1,4,45,6,10,8};
//      int n = 6;
//      int x = 16;
//      bool ans = twoSum(arr, n, x);
//      cout <<"ans is : " << ans << endl;
//      return ans;
//  }



// //key pair (two sum)      Method-2   (two pointer) -> (O(nlogn) time complexity)
// bool twoSumTwoPointer(int arr[], int n, int x){
//     int l = 0;
//     int h = n-1;

//     while(l<h) {
//         int csum = arr[l] + arr[h];
//         if(csum == x) {
//             return true;
//         }
//         //if csum is greatre than target(x), it means current pair is too high
//         // so, we have to move high index to left side to consider smaller pair
//         else if (csum > x){
//             h--;
//         }
//         //if csum is less than target(x), it means current pair is too small
//         // so, we have to move low index to right side to consider larger pair
//         else if (csum < x){
//             l++;
//         }

//     }
//     return false;
// }
// int main() {
//     int arr[] = {1,4,45,6,10,8};
//     int n = 6;
//     int x = 16;
//     sort(arr, arr + n);         //time complexity = O(n)
//     bool ans = twoSumTwoPointer(arr, n, x);
//     cout <<"ans is : " << ans << endl;
//     return ans;
// }





// find pivot index         //LEETCODE 724

// class Solution {
// public:
//     int prefixSumApproach(vector<int>& nums){
//         vector<int>lsum(nums.size(), 0);            //initialize lsum and rsum with 0
//         vector<int>rsum(nums.size(), 0);

//         //cal. lsum array
//         for(int i=1; i<nums.size(); ++i)            //for 0th index lsum is 0 that's why starts from i=1
//             lsum[i] = lsum[i-1] + nums[i-1];

//         //cal. rsum array
//         for(int i=nums.size()-2; i>=0; --i)        //for (n-1)th index rsum is 0 that's why starts from (n-2)
//             rsum[i] = rsum[i+1] + nums[i+1];

//         //lets check it
//         for(int i=0; i<nums.size(); ++i) {
//             if(lsum[i] == rsum[i])  return i;
//         }
//         return -1;
//     }
//     int pivotIndex(vector<int>& nums) {
//         return prefixSumApproach(nums);
//     }
// };




// // Sort Colors:      LEETCODE 75      3 pointers method (lakshya) -> best method
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int l=0, m=0, h=nums.size()-1;
//         while(m<=h) {
//             if(nums[m] == 0){
//             swap(nums[l], nums[m]);
//             l++; m++;
//             }
//             else if(nums[m] == 1){
//                 m++;
//             }
//             else{
//                 swap(nums[m], nums[h]);
//                 h--;
//             }
//         }
//     }
// };





// Missing Number    LEETCODE 268         Time complexity: O(n);      S.C : O(1);
// class Solution {
// public:
//     int xorr(vector<int>&nums){
//         int ans = 0;
//         //1. xor all values of array
//         for(int i=0; i<nums.size(); ++i){
//             ans ^= nums[i];
//         }

//         //2. xor all range items [0,n]
//         int n = nums.size();
//         for(int i=0; i<=n; ++i){
//             ans ^= i;
//         }
//         return ans;
//     }
//     int missingNumber(vector<int>& nums) {
//         return xorr(nums);
//     }
// };




// Move all -ve numbers to the left side of an array     (Dutch national flag Algo.) (2 pointers approach)
//  void moveNegToLeft(int *a, int n){
//      //Dutch National Flag Algo.
//      int l=0, h=n-1;
//      while(l<h) {
//          if(a[l] < 0) {
//              l++;
//          }
//          else if(a[h] > 0) {
//              h--;
//          }
//          else{
//              swap(a[l], a[h]);
//          }
//      }
//  }
//  int main() {
//      int a[] = {1,2,-3,4,-5,6};
//      int n = sizeof(a)/sizeof(int);     //gives you size of array

//     moveNegToLeft(a, n);

//     for(int i=0; i<n; i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<< endl;
//     return 0;
// }




// //Find Duplicate number     LEETCODE 287    (two more methods in notebook)   T.C = O(n);     S.C = O(1);
// int findDuplicate(vector<int>& nums) {
//         while(nums[0] != nums[nums[0]]){
//             swap(nums[0], nums[nums[0]]);
//         }
//         return nums[0];
//     }




// // Missing elements from an array with duplicates         T.C = O(n);     S.C = O(1);
// // sorting + swapping method
// void findMissing(int *a, int n)
// {
//     int i = 0;
//     while (i < n)
//     {
//         int index = a[i] - 1;
//         if (a[i] != a[index])
//         {
//             swap(a[i], a[index]);
//         }
//         else
//         {
//             ++i;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != i + 1)
//         {
//             cout << i + 1 << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     int a[] = {1, 3, 3, 3, 4};
//     n = sizeof(a) / sizeof(int);
//     findMissing(a, n);
//     return 0;
// }





//Rearange array elements by sign           LEETCODE 2149 (MEDIUM)
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         // 2 pointers
//         vector<int>ans(nums.size(), -1);
//         int odd = 1, even = 0;
//         for(int i=0; i<nums.size(); ++i){
//             int num = nums[i];
//             if(num > 0){
//                 ans[even] = num;
//                 even += 2;
//             }
//             else{
//                 ans[odd] = num;
//                 odd += 2;
//             }
//         }
//         return ans;
//     }
// };




// //Find First Repeating element      method-1    T.C = O(n^2)     S.C = O(1)   NOT OPTIMISED Solution
// int firstRepeated(int a[], int n){
//     for(int i=0; i<n; i++) {
//         bool isRepeated = false;
//         for(int j=i+1; j<n; j++){
//             if (a[i] == a[j]){
//                 isRepeated = true;
//                 return i+1;         //1 based indexing that's why return i+1;
//             }

//         }
//     }
//     return -1;
// }
// int main(){
//     int a[] = {1,2,4,6,7,4,7,5};
//     int n = 8;
//     int ans = firstRepeated(a, n);
//     cout<<"First Repeated element is : "<< ans << endl;
// }



// //Find First Repeating element      method-2    T.C = O(n);  S.C = O(n);    OPTIMISED Solution
// int firstRepeated(int a[], int n){
//     unordered_map<int, int>hash;
//     for(int i=0; i<n; i++) {
//         hash[a[i]]++;
//     }

//     for(int i=0; i<n; i++){
//         if(hash[a[i]] > 1){
//             return i+1;             //1 based indexing that's why return i+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int a[] = {1,2,4,6,7,4,7,5};
//     int n = 8;
//     int ans = firstRepeated(a, n);
//     cout<<"First Repeated element is : "<< ans << endl;
// }





// //Common elements in 3 sorted array         T.C = O(n1 + n2 + n3)      S.C = O(n1) <- min. length of array in worst case
// class Solution
// {
//     public:    
//        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//         {
//             vector<int>ans;
//             set<int>st;
//             int i,j,k;
//             i=j=k=0;
//             while(i<n1 && j<n2 && k<n3){
//                 if(A[i]==B[j] && B[j]==C[k]){
//                    // ans.push_back(A[i]);  //we can push_back A[i] or B[j] or C[k]
//                     st.insert(A[i]);
//                     i++,j++,k++;
//                 }
//                 else if(A[i]<B[j]){
//                     i++;
//                 }
//                 else if(B[j]<C[k]){
//                     j++;
//                 }
//                 else{
//                     k++;
//                 }
//             }
//             for(auto i:st){
//                 ans.push_back(i);
//             }
//             return ans;
//         }

// };






// //Wave print a matrix(column wise)
// void wavePrintMatrix(vector<vector<int>>v){
//     int m = v.size();
//     int n = v[0].size();
//     for(int startCol=0; startCol<n; startCol++){
//         //even no. of col -> Top to bottom
//         if((startCol & 1) == 0){
//             for(int i=0; i<m; i++){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//         else{
//             //odd no. of col -> Bottom to top
//             for(int i=m-1; i>=0; i--){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     vector<vector<int>>v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     wavePrintMatrix(v);
//     return 0;
// }