#include<bits/stdc++.h>
using namespace std;

int main(){

    int basic[3] ={1,2,3};

    // Array 🔥

    array<int ,4>  a = {1,2,3,4};

    int size = a.size();

    cout<<"\nARRAY STL"<<endl;
    for(int i = 0; i<size ; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index "<<a.at(2)<<endl;        // same as a[2];
    cout<<"Empty or not "<<a.empty()<<endl;             // 0-> false  or 1 -> true
    
    cout<<"First element-> "<<a.front()<<endl;     //✈︎ for first element 
    cout<<"Last element-> "<<a.back()<<endl;       //✈︎ for last element 


    

    // Vectors 🔥
    cout<<"\nVECTOR STL"<<endl;


    vector<int> v;      // v vector
    cout<<"Capacity-> "<<v.capacity()<<endl;   //🔥 capacity -> how much memory assigned

    v.push_back(1);     // add 1 from back
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    //size
    cout<<"Size-> "<<v.size()<<endl;            //how much size of vector 

    cout<<"Element at index 2"<<v.at(2)<<endl;

    // for print front or back 
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //🔥 pop_back -> for remove back / last element
    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();          // for clear 🔥
    cout<<"After clear size "<<v.size()<<endl;


    // 🔥
    vector<int> b(5,1);       //🔥 5 size vector and 1 filled in all index
    
    for(int i : b){
        cout<<i<<" ";
    }
    cout<<endl;

    // 🔥 copy whole vector 🔥

    vector<int> c(b);       // now c copied vector b 

    for(int i:c){
        cout<<i<<" ";
    }
    cout<<endl;




    return 0;
}