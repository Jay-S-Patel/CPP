#include<iostream>
#include<string.h>
// #include<cstring>
#include<bits/stdc++.h>
using namespace std;


int findLength(char ch[], int size){          //T.C = O(n)

    //while loop
    int len = 0;
    int index = 0;
    while(ch[index] != '\0'){
        // len++;
        // index++;
        index++;
    }
    // return len;
    return index;


    // int length = 0;

    // for(int i=0; i<size; i++){
    //     if(ch[i] == '\0'){
    //         //stop here
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
}

// int main(){
//     //creation
//     // char ch[10];

//     //input
//     // cin>>ch;
//     // cin.getline(ch,100);



//     // //print
//     // cout<<"Printing the value of ch : "<<ch<<endl;

//     // //printing using loops
//     // for(int i=0; i<10; i++){
//     //     cout<<"At Index : "<<i<<" "<<ch[i]<<endl;
//     // }

//     // //check integer value of Null character
//     // char temp = ch[6];
//     // int value = (int)temp;
//     // cout<<"printing integer value : "<<value<<endl;




//     // //length of string
//     // char ch[100];
//     // cin>>ch;
//     // // cin.getline(ch, 100);

//      // int len = findLength(ch, 100);
//     // cout<<"Length of string is : "<<len<<endl;
//     // cout<<"printing length : "<< strlen(ch)<<endl;    //inbuilt function


// }




// //reverse strng                                T.C = O(n)    n=length of string
// void reverseStr(char ch[], int size){
//     int i = 0;
//     int j = size-1;
//     while(i<=j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     //Reverse a string
//     char ch[100];
//     cin>>ch;
//     reverseStr(ch, strlen(ch));
//     cout<<"Reversed String is : "<<ch<<endl;


//     //inbuilt method for reverse string
//     string str = "Hello";
//     reverse(str.begin(), str.end());
//     cout<<"Reverse using inbuilt : "<<str<<endl;
    
// }




// //convert character to upper case
// void convertToUpperCase(char ch[], int n){
//     int index = 0;
//     while(ch[index] != '\0'){
//         char currentCharacter = ch[index];
//         //check if lowercase then convert to upper case
//         if(currentCharacter >='a' && currentCharacter<='z'){
//             ch[index] = currentCharacter - 'a' + 'A';
//         }
//         index++;
//     }
// }
// int main(){
//     char ch[100];
//     cin.getline(ch, 100);

//     cout<<"before "<<ch<<endl;
//     convertToUpperCase(ch, 100);
//     cout<<endl<<"after "<<ch<<endl;
// }





// // replace @ with space                          T.C = O(n);            pending
// void replaceCharacter(char ch[], int n){
//     int index = 0;

//     while(ch[index] != '\0'){
//         char curr = ch[index];

//         if(curr == '@'){
//             //insert space
//             ch[index] == ' ';
//         }
//         index++;
//     }
// }
// int main(){
//     char ch[100];
//     cin.getline(ch, 100);

//     // cout<<"before "<<ch<<endl;
//     replaceCharacter(ch, 100);
//     cout<<endl<<"after "<<ch<<endl;
// }





// //check palindrome                        //n/2 operation           T.C = O(n)
// bool checkPalindrome(char ch[], int n){
//     //n -> length of string
//     int i = 0;
//     int j = n-1;
//     while(i<=j){
//         if(ch[i] == ch[j]){
//             i++;
//             j--;
//         }
//         else{
//             //character are not matching
//             return false;
//         }
//     }
//     //agar yaha tak pohach gaye ho iska matlab sare characters match kar gaye hai
//     //iska matlab palindrome hai
//     //iska matlab return true
//     return true;
// }
// int main(){
//     char ch[100];
//     cin.getline(ch, 100);
//     int len = findLength(ch, 100);
//     bool ispalindrome = checkPalindrome(ch, len);

//     if(ispalindrome){
//         cout<<"Valid palindrome"<<endl;
//     }
//     else{
//         cout<<"Invalid palindrome"<<endl;
//     }
    
// }





// // Remove All Adjacent Duplicates In String   LEETCODE 1047    T.C = O(n);  S.C = O(n);
// class Solution {
// public:
//     string removeDuplicates(string s) {
//        string ans = "";
//        int index = 0;

//        while(index < s.length()){
//            //same
//            //ans ka rightmost character and string s ka current character same ho tab
//            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
//                //pop from ans string
//                ans.pop_back();
//            }
//            else{
//                //push
//                ans.push_back(s[index]);
//            }
//            index++;
//        }
//        return ans;
//     }
// };





// // Remove All Occurrences of a Substring    LEETCODE 1910     T.C = O(n); S.C = O(1); 
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.find(part) != string::npos){
//             //if you are inside the loop, it means that part exists in s string
//             s.erase(s.find(part), part.length());
//         }
//         return s;
        
//     }
// };                  s.find() => T.C = O(n)





// // Valid Palindrome II    Leetcode 680
// class Solution {
// public:
//     bool checkPalindrome(string s, int i, int j){
//         while(i<=j){
//             if(s[i] != s[j]){
//                 return false;
//             }
//             else{
//                 i++;
//                 j--;
//             }
//         }
//         return true;    //if check karke while loop se bahar aa gaye
//                         //else ke andar gaye hi nahi
//     }
//     bool validPalindrome(string s) {
//         int i = 0;
//         int j = s.length()-1;

//         while(i < j){
//             if(s[i] == s[j]){
//                 i++;
//                 j--;
//             }
//             else{
//                 //s[i]!==s[j]
//                 //1 removal allowed
//                 //check palindrome for remaining string after removal

//                 //ith character -> remove
//                 bool ans1 = checkPalindrome(s, i+1, j);
//                 //jth character -> remove
//                 bool ans2 = checkPalindrome(s, i, j-1);

//                 return ans1 || ans2;    //if any of one is true then it gives true; else it gives false
//             }
//         }
//         //if check karke while loop se bahar aa gaye
//                         //else ke andar gaye hi nahi
//         //agar yahan tak pohche ho
//         //iska matlab valid palindrome hai
//         //iska matlab -> 0 removal
//         return true;
//     }
// };





// Palindromic Substring     Leetcode 647
// class Solution {
// public:
//     int expand(string s, int i, int j){
//         int count = 0;
//         while(i >= 0 && j < s.length() && s[i] == s[j]){
//             count++;
//             i--;
//             j++;
//         }
//         return count;
//     }
//     int countSubstrings(string s) {
//         int totalCount = 0;
//         //center means current position
//         for(int center=0; center<s.length(); center++){
//             //ODD
//             int oddKaAns = expand(s, center, center);
//             //for odd i and j are on same position

//             //EVEN
//             int evenKaAns = expand(s, center, center+1);
//             totalCount = totalCount + oddKaAns + evenKaAns;
//         }
//         return totalCount;
//     }

//     // // center ke jagah i or j use kiya for better understanding
//     // int countSubstrings(string s) {
//     //     int totalCount = 0;
//     //     for(int i=0; i<s.length(); i++){
//     //         //ODD
//     //         int j = i;
//     //         int oddKaAns = expand(s, i, j);
//     //         //for odd i and j are on same position

//     //         //EVEN
//     //         j = i+1;
//     //         int evenKaAns = expand(s, i, j);
//     //         totalCount = totalCount + oddKaAns + evenKaAns;
//     //     }
//     //     return totalCount;
//     // }
// };






// Decode the message     Leetcode 2325
// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         //create mapping
//         char start = 'a';
//         char mapping[280] = {0};    //0 means null char

//         for(auto ch: key){  //for each loop
//             if(ch != ' ' && mapping[ch] == 0){
//                 mapping[ch] = start;
//                 start++;
//             }
//         }

//         //use mapping
//         string ans;

//         for(int i=0; i<message.length(); i++){
//             char ch = message[i];
//             if(ch == ' '){
//                 ans.push_back(' ');
//             }
//             else{
//                 char decodedChar = mapping[ch];
//                 ans.push_back(decodedChar);
//             }
//         }
//         return ans;

//         //otherwise -> using for each loop
//         // for(auto ch: message){
//         //     if(ch == ' '){
//         //         ans.push_back(' ');
//         //     }
//         //     else{
//         //         char decodedChar = mapping[ch];
//         //         ans.push_back(decodedchar);
//         //     }
//         // }
//         // return ans;
//     }
// };






// // Minimum Amount of Time to Collect Garbage       Leetcode 2391
// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int pickP = 0;
//         int pickG = 0;
//         int pickM = 0;

//         int travelP = 0;
//         int travelG = 0;
//         int travelM = 0;

//         int lastP = 0;
//         int lastG = 0;
//         int lastM = 0;

//         //Calculate pick time and travel time
//         for(int i=0; i<garbage.size(); i++){
//             string curr = garbage[i];

//             for(int j=0; j<curr.length(); j++){
//                 char ch = curr[j];

//                 if(ch == 'P'){
//                     pickP++;
//                     lastP = i;
// // lastP++ naa karay because jo j position(index) par 5 p hoy to 5 vakhat increment thai jaay that's why lastP = i -> (i=current index)
//                 }
//                 else if(ch == 'G'){
//                     pickG++;
//                     lastG = i;
//                 }
//                 else if(ch == 'M'){
//                     pickM++;
//                     lastM = i;
//                 }
//             }
//         }

//         //calculate travel time
//         for(int i=0; i<lastP; i++){
//             travelP += travel[i];
//         }

//         for(int i=0; i<lastG; i++){
//             travelG += travel[i];
//         }

//         for(int i=0; i<lastM; i++){
//             travelM += travel[i];
//         }

//         int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
//         return ans;

//     }
// };





// // Custom Sort String    Leetcode 791
// class Solution {
// public:
//     //custom comparator
//     static string str;
//     static bool compare(char char1, char char2){

//         //this will return true, if position of character1 in str string is
//         //less than the position of character2 in str string

//         //when true is returned, then char1 will be placed before char2 in
//         //output string
//         return (str.find(char1) < str.find(char2));
//     }
//     string customSortString(string order, string s) {
//         str = order;
//         sort(s.begin(), s.end(), compare);
//         return s;
//     }
// };
// string Solution::str;





//One que is remaining from (str and char-3)