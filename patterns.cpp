#include <iostream>
using namespace std;
int main()
{

    // //rectangle star pattern

    // //outer loop -> no of rows
    // for (int i=0; i<3; i=i+1) {

    //     //inner loop -> no of stars in each row
    //     for(int j=0; j<=5; j=j+1) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // //Holow rectangle
    // // i = rows      j = columns
    // for(int i=0; i<5; i=i+1) {
    //     for(int j=0; j<5; j=j+1) {
    //         if(i==0 || i==4){
    //             cout << "*";
    //         }
    //         else {
    //             if(j==0 || j==4) {
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // half pyramid
    //  int n;
    //  cin >> n;
    //  for(int row=0; row<n; row=row+1){
    //      for(int col=0; col<row+1; col=col+1){
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

    // Inverted half pyramid
    //  int n;
    //  cin >> n;
    //  for(int row=0; row<n; row=row+1){
    //      for(int col=0; col<n-row; col=col+1){
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

    // Numeric half pyramid
    // int n;

    // // cout << "Enter value of n : " << endl;
    // cin >> n ;
    // // cout << endl;

    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<row+1; col=col+1) {
    //         cout << col+1 << " ";
    //     }
    //     cout<<endl;
    // }

    // Inverted Numeric half pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<n-row; col=col+1) {
    //         cout << col+1 << " ";
    //     }
    //     cout << endl;
    // }

    // HW Questions

    // int n = 10;
    // if(cout << n) {
    //     cout << "jay patel";
    // }

    // int n;
    // if(cin >> n) {
    //     cout << "jay";
    // }

    // Full pyramid
    //  int n;
    //  cin >> n;
    //  for(int row=0; row<n; row=row+1) {
    //      //space
    //      for(int col=0; col<n-row-1; col=col+1) {
    //          cout << " ";
    //      }
    //      // star
    //      for(int col=0; col<row+1; col=col+1) {
    //          cout << "* "; //after every star we have space thats why i put "* ".
    //      }
    //      cout << endl;

    // }




    // inverted pyramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     // space
    //     for (int col = 0; col < row; col = col + 1)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int col = 0; col < n - row; col = col + 1)
    //     {
    //         cout << "* "; // after every star we have space thats why i put "* ".
    //     }
    //     cout << endl;

    // }



    // //Diamond pattern     
    // // int n;
    // // cin >> n;

    // int num;
    // cin >> num;
    // int n = num/2;    //before we give input 8 then it will print 16 lines(8 upper , 8 lower)

    // for(int row=0; row<n; row=row+1) {               //try: row<n-1;
    //     //space
    //     for(int col=0; col<n-row-1; col=col+1) {
    //         cout << " ";
    //     }
    //     //star
    //     for(int col=0; col<row+1; col=col+1) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int row=0; row<n; row=row+1) {
    //     //space
    //     for(int col=0; col<row; col=col+1) {
    //         cout << " ";
    //     }
    //     //star
    //     for(int col=0; col<n-row; col=col+1) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }




    //hollow pyramid
    //  int n;
    //  cin >> n;
    //  for(int row=0; row<n; row=row+1) {
    //      //space
    //      for(int col=0; col<n-row-1; col=col+1) {
    //          cout << " ";
    //      }
    //      // star
    //      for(int col=0; col<row+1; col=col+1) {   // col<row+1 therefor totalcol = row+1 (because numbering starts from 0
        
    //         //print start for first and last col
    //         if(col == 0 || col == row + 1 - 1) {  // totalcol = row+1 therefor lastcol number = row+1-1
                
    //            cout << "* "; //after every star we have space thats why i put "* ".
    //         }
    //         else {
    //             //for every col between first and last
    //             //print spaces
    //             cout << "  ";
    //         }
    //      }
    //      cout << endl;

    // }



    // inverted hollow pyramid         
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     //space
    //     for(int col=0; col<row; col=col+1) {
    //         cout << " ";
    //     }
    //     //star
    //     for(int col=0; col<n-row; col=col+1) {
    //         if(col == 0 || col == n-row-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
            
    //     }
    //     cout << endl;
    // }




    // hollow diamond pattern   

    // //hollow pyramid
    //  int n;
    //  cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //      //space
    //      for(int col=0; col<n-row-1; col=col+1) {
    //          cout << " ";
    //      }
    //      // star
    //      for(int col=0; col<row+1; col=col+1) {   // col<row+1 therefor totalcol = row+1 (because numbering starts from 0
        
    //         //print star for first and last col
    //         if(col == 0 || col == row + 1 - 1) {  // totalcol = row+1 therefor lastcol number = row+1-1
                
    //            cout << "* "; //after every star we have space thats why i put "* ".
    //         }
    //         else {
    //             //for every col between first and last
    //             //print spaces
    //             cout << "  ";
    //         }
    //      }
    //      cout << endl;

    // }  

    // // inverted hollow pyramid 
    // for(int row=0; row<n; row=row+1) {
    //     //space
    //     for(int col=0; col<row; col=col+1) {
    //         cout << " ";
    //     }
    //     //star
    //     for(int col=0; col<n-row; col=col+1) {
    //         if(col == 0 || col == n-row-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
            
    //     }
    //     cout << endl;
    // }     




    //Fliped Solid Diamond
    // int num = 8;
    // int n = 4;

    // //upper side
    // for(int row=0; row<n; row=row+1) {
    //     //inverted pyramid 1
    //     for(int col=0; col<n-row; col=col+1) {
    //         cout<< "*";
    //     }

    //     //full pyramid 1
    //     for(int col=0; col<2*row + 1; col=col+1) {
    //         cout << " ";
    //     }


    //     //inverted pyramid 2
    //     for(int col=0; col<n-row; col=col+1) {
    //         cout<< "*";
    //     }

    //     cout << endl;
    // }

    // //lower side
    // for(int row=0; row<n; row=row+1) {
    //     //inverted pyramid 1
    //     for(int col=0; col<row+1; col=col+1) {
    //         cout<< "*";
    //     }

    //     //full pyramid 1
    //     for(int col=0; col<2*n - 2*row - 1; col=col+1) {
    //         cout << " ";
    //     }


    //     //inverted pyramid 2
    //     for(int col=0; col<row+1; col=col+1) {
    //         cout<< "*";
    //     }

    //     cout << endl;
    // }
    

         
    

    // fancy pattern (number star)                     
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     //inner loop
    //     for(int col=0; col<2*row+1; col=col+1) {
    //         //odd places
    //         if(col % 2 == 1) {
    //             cout << "*";
    //         }
    //         //even places
    //         else{
    //             cout << row+1;     //print numbers
    //         }
    //     }
    //     cout << endl;
    // }





    // Inverted fancy pattern (number star)
    // int n;
    // cin >> n;
    //  for(int row=0; row<n; row=row+1) {
    //     //inner loop
    //     for(int col=0; col<2*row+1; col=col+1) {
    //         //odd places
    //         if(col % 2 == 1) {
    //             cout << "*";
    //         }
    //         //even places
    //         else{
    //             cout << row+1;     //print numbers
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row=row+1) {
    //     //inner loop
    //     for(int col=0; col<2*n - 2*row - 1; col=col+1) {
    //         //odd places
    //         if(col % 2 == 1) {
    //             cout << "*";
    //         }
    //         //even places
    //         else{
    //             cout << n-row;     //print numbers
    //         }
    //     }
    //     cout << endl;
    // }





    // //hollow inverted half pyramid      
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<n-row; col=col+1) {
    //         if(row==0 || row==n-1) {
    //             cout << "* ";
    //         }
    //         else{
    //             if(col==0 || col==n-row-1) {
    //                 cout << "* ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
            
    //     }
    //     cout << endl;
    // }


    // fancy pattern (number space)             
    // int n;
    // cin >> n;
    
    // for(int row=0; row<n; row=row+1){
    //      for(int col=0; col<row+1; col=col+1){
    //         if(row==0 || row==n-1) {
    //              cout << col+1 << " ";
    //         }
    //         else{
    //             if(col==0) {
    //                 cout << "1 ";
    //             }
    //             else if (col==row+1-1)
    //             {
    //                 cout << row+1;
    //             }
                
    //             else{
    //                 cout << "  ";
    //             }
    //         }
            
    //      }
    //      cout << endl;
    //  }





    //Alphabets pattern  and also reverse pattern
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     char ch;
    //     for(int col=0; col<row+1; col=col+1) {
    //         ch = col+1 + 'A' -1;
    //         cout << ch;
    //     }
    //     //Jab tak A tak nahi pohchte tab tak print karenge
    //     for(char alphabet=ch; alphabet>'A';){
    //         alphabet=alphabet-1;
    //         cout << alphabet;
    //     }
    //     cout << endl;
    // }




  // HW questions

    //Numeric hollow inverted half pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //     for(int col=0; col<n-row; col=col+1) {
    //         if(row==0 || row==n-1) {
    //             cout << col+1 << " ";
    //         }
    //         else{
    //             if(col==0) {
    //                 cout << row+1 ;
    //             }
    //             else if ( col==n-row-1)
    //             {
    //                 cout << n;
    //             }
                
    //             else{
    //                 cout << "  ";
    //             }
    //         }
            
    //     }
    //     cout << endl;
    // }





    //Numeric Palindrome equilateral pyramid                 pending
    //   int n;
    //  cin >> n;
    //  for(int row=0; row<n; row=row+1) {
    //      //space
    //      for(int col=0; col<n-row-1; col=col+1) {
    //          cout << " ";
    //      }
    //      // numbers
    //      for(int col=0; col<row+1; col=col+1) {
    //          cout << col + 1;
    //      }
      
    //      cout << endl;

    // }



    // fancy pattern 1
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<n-row+3; col=col+1) {
    //     cout << "* ";
    //   }
    //   for(int col=0; col<row + 1; col=col+1){
    //     cout << row+1 << " * "; 
    //     // if(col%2==0) {
    //     //   cout << row+1 << " ";
    //     // }
    //     // else{
    //     //   cout << "* ";
    //     // }
    //   }
    //   for(int col=0; col<n-row+3; col=col+1) {
    //     cout << "* ";
    //   }

    //   cout << endl;

    // }





    // fancy pattern 2
    //growing phase            (i = row; j = col;)
    // int n;
    // cin >> n;
    // int c=1;
    // for(int i=0; i<n; i++) {
    //   for(int j=0; j<i+1; j++) {
    //     cout << c;
    //     c++;
    //     if(j<i) {
    //       cout<<"*";
    //     }
        
    //   } 
    //   cout << endl;
      
    // } 
    // // cout << "C:" << c << endl;   
    // //shrinking phase
    // int start = c - n;
    // for(int i=0; i<n; i++) {
    //   int k=start;
    //   for(int j=0; j<n-i; j++) {
    //     cout << k;
    //     k++;
    //     if(j<n-i-1) {
    //       cout << "*";
    //     }
    //   } 
    //   start = start - (n - i - 1);  //here we have to take i=0 for first time (if we take n=4 then in shrinking the row starts from 4 -> for that row we have to take i=0)
    //   cout << endl;
    // }  
    



    //fancy pattern 3                pending






    //pascal's triangle pattern
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++) {
    //   int C = 1;
    //   for(int j=1; j<i+1; j++) {
    //     cout << C << " ";
    //     C = C * (i - j) / j;          //formula for pascal's triangle
    //   }
    //   cout << endl;
    // }




    //solid half diamond
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<row+1;col=col+1) {
    //     cout << "* ";
    //   }
    //   cout << endl;
    // }
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<n-1-row;col=col+1) {
    //     cout << "* ";
    //   }
    //   cout << endl;
    // }





    //floyid triangle                        
    // int n;
    // cin >> n;
    // int c = 1;
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<row+1; col=col+1){
    //     cout << c << " ";
    //     c++;
    //   }
    //   cout << endl;
    // }





    // //Butterfly pattern
    // int num;
    // cin >> num;
    // int n = num/2;
    
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<row+1; col=col+1) {
    //     cout << "* ";
    //   }
    //   for(int col=0; col<2*n - 2*row - 2; col=col+1) {
    //     cout << "  ";
    //   }
    //   for(int col=0; col<row+1; col=col+1) {
    //     cout << "* ";
    //   }
    //   cout << endl;
    // }
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<n-row; col=col+1) {
    //     cout << "* ";
    //   }
    //   for(int col=0; col<2*row; col=col+1) {
    //     cout << "  ";
    //   }
    //   for(int col=0; col<n-row; col=col+1) {
    //     cout << "* ";
    //   }
    //   cout << endl;
    // }





    //Numeric hollow half pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1) {
    //   for(int col=0; col<row+1; col=col+1) {
    //     if(col==0 || row==n-1) {
    //       cout << col+1 << " ";
    //     }
    //     else if (col==row+1-1) 
    //     {
    //       cout << row+1;
    //     }
    //     else {
    //       cout << "  ";
    //     }
        
    //   } 
    //   cout << endl;
    // }





    // //half pyramid (space and star)
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 1; col <= n-row; col = col + 1)
    //     {
    //         cout << "  "; // after every star we have space thats why i put "* ".
    //     }
    //     // star
    //     for (int col = n-row; col <= n; col = col + 1)
    //     {
    //         cout << "* "; // after every star we have space thats why i put "* ".
    //     }
    //     cout << endl;

    // }








    







    
    
    





  return 0;      
}