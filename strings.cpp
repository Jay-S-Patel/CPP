#include <iostream>
using namespace std;

int main()
{
    // creation
    //  string name;

    // input
    //  cin >> name;
    //  getline(cin, name);

    // print
    //  cout<<"Printing name : "<< name << endl;
    //  // cout<<"Printing first character : "<< name[0] << endl;
    //  int index = 0;
    //  while(name[index] != '\0'){
    //      cout<<"index : "<<index<<" character : "<<name[index]<< endl;
    //      index++;
    //  }

    // int value = (int)name[6];
    // cout<<"printing index 6 value : "<<value<<endl;

    // string name;
    // cin >> name;

    // empty string
    //  string temp = "";

    // member functions
    //  cout<<"Length of string : "<<name.length()<<endl;
    //  cout<<"string is empty or not : "<<temp.empty()<<endl;
    //  cout<<"Character at position 0 is : "<<name.at(0)<<endl;
    //  cout<<"Front character of string is : "<<name.front()<<endl;
    //  cout<<"back character of string is : "<<name.back()<<endl;

    // string str1 = "Jay";
    // string str2 = "Patel";

    // cout<<"Before appending"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // //append
    // str1.append(str2);

    // cout<<"After appending"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // //erase
    // string desc = "This is a car";
    // desc.erase(4, 3);   //4th index se 3 character erase kar do
    // cout<<desc<<endl;


    // string name = "Jay Patel";
    // string middle = "kumar ";

    // name.insert(4, middle);

    // cout << "Printing name:  " << name << endl;


    // string name = "Jay" ;

    // cout << name << endl;

    // name.push_back('R');
    // cout << name << endl;

    // name.pop_back();
    // cout << name << endl;


    // string str1 = "yaar tera super star desi kalakar";
    // string str2  = "staryyyy";

    // if(str1.find(str2) == string::npos){     //npos = no position
    //  //not found
    //  cout << "Not FOund" << endl;
    // }
    // else {
    //  cout << "Found" << endl;
    // }


    // string str1 = "patel";
    // string str2 = "jay";

    // if(str1.compare(str2) == 0) {
    //  cout << "Matching" << endl;
    // }
    // else {
    //  cout << "not matching " << endl;
    // }


    string desc = "this is a car, big daddy of all suvs";

    cout << desc.substr(19, 5) << endl;
}