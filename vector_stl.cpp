#include<iostream>
#include<vector>
using namespace std;

/*
// void fun(int arr[], int n){
//     cout<<"Array elements are : "<<endl;
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<endl;
//     }
// }
// int main() {
//     //Static memory allocation of array
//     //int arr[5] = {1,2,3,4,5};

//     //Dynamic memory allocation of array
//     int n;
//     cin >> n;
//     int *arr = new int[n];  //each element would be 0 or garbage

//     //taking n elements input and inserting in array
//     for(int i=0; i<n; ++i) {
//         int data;
//         cin>>data;
//         arr[i] = data;
//     } //0 index to 4 index (when in input n = 5)

//     //let me try to insert more items
//     //5 to 14 index
//     for(int i=0; i<10; ++i) {
//         arr[n + i] = 80;
//     }
    
//     // //let me try to insert more items
//     // arr[n] = 80;
//     fun(arr, n);
// }

*/





//Vector 
void print(vector<int> v){
    int size = v.size();
    cout << "printing the vector : " << endl;
    for(int i=0; i<size; i++) {
        cout<< v[i] << " ";     //or    cout<< v.at(i) << " ";
        
    }
    cout<<endl;
}

void print2(vector<int> v2){
    cout << "printing vector method 2 : " << endl;
    for(auto it:v2){
        cout << it << " ";
    }
    cout<<endl;
}

int main() {

    /*
    
    // in vector, no need to tell size of vector
    // just keep inserting, i(vector) will manage the allocation
    vector<int> v; //array hii hai(like an array)


    // while(true){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<< endl;
    // }

    // //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);


    // //pop -> delete
    // v.pop_back();
    // print(v);


    // insert 
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        int d;
        cin>>d;
        v.push_back(d);
    }
    cout<<endl;
    //print the vector
    print(v);


    //insert more items  (if i give 5 numbers as input then after those 5 numbers 80 will print 10 times)
    for(int i=0; i<10; ++i) {
        v.push_back(80);
    }
    print(v);



    //I want to clear the vector
    v.clear();

    v.push_back(50);
    print(v);

    v.pop_back();
    print(v);

    */



    
    //vector initialization
    vector<int>arr;   //default way to initialize with no data, 0 size
    vector<int>arr2(5, -1); // init with n size with specific data (here, 5 is size & -1 is value)

    // arr2.push_back(50);
    // print(arr2);


    vector<int>arr3 = {1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    //another way to initialize vector
    vector<int>arr4{1,2,3,4,5,6};
    // print(arr4);



    //how to copy vector
    vector<int>arr5 = {10,20,30,40};
    vector<int>arr6(arr5);
    // print(arr6);



    // vector<char>v1;
    // v1.push_back('a');
    // v1.push_back('b');
    // v1.push_back('c');
    
    // cout<<"Front element : "<<v1[0] << endl;
    // cout<<"Front element : "<<v1.front() << endl;

    // cout<<"End element : "<<v1[v1.size() - 1]<< endl;
    // cout<<"End element : "<<v1.back() << endl;


    vector<int> v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);
    print2(v2);

    
}    










 


