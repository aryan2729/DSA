#include <bits/stdc++.h>
using namespace std;


// Pairs 
void explainPair(){

     pair<int,int> p = {1,3};       //(i) one pair 
    cout<<p.first<< " "<<p.second;   // p.first = 1 

    pair<int , pair<int,int>> q = {5,{1,2}}; // {ii} Nested pair 
    cout<<q.first<<" "<<q.second.second;     // p.second.second = 2

    pair<int,int> arr[] = { {1,2},{3,4},{5,6}}; // {iii} Array of pair 
    cout<<arr[1].second;
}

/* What is a Vector? (M.I.🔥)

Vectors in STL are basically dynamic arrays that have the ability to change size 
whenever elements are added or deleted from them. Vector elements can be easily 
accessed and traversed using iterators.  Vectors capacity can be increased in future if we want. 
*/

/*
emplace_back() constructs the object in-place at the end of the list, potentially 
improving performance by avoiding a copy operation, while push_back() adds a copy 
of the object to the end of the list. */


void explainVector(){

    vector <int> v;
    v.push_back(1);                     // push_back() adds a copy of the object to the end of the list.
    v.emplace_back(2);                  // emplace_back() constructs the object in-place at the end of the list, potentially  improving performance by avoiding a copy operation


    // vector can be used in pair 

    vector< pair<int,int> > vec ;
    v.push_back(3);
    v.emplace_back(4);

    //we can define vectors qty 
    vector <int> ve(5,100);             // It's means {100,100,100,100,100} 5 times 100 

    vector <int> vee(5);                // It's means { , , , , } 5 times with 0 or no value 

    // we can copy two vectors 
    vector <int> v1(5,20);
    v1.push_back(1) ;                   // { 20 ,20 ,20 ,20 , 20 , 1}  add 1 
    vector <int> v2(v1);                //: v2 become copy of v1 


    //iterator - This use for shift
    vector <int> :: iterator it = v.begin();            //  let v vector = {2,3,4,5} then v.begin = 2 

    it++;
    cout<< *(it) <<"shifted to the next memory from 2 to 3 cuz of it++";    // * used for iterator value print

    it = it + 2;            // now vecotor position shifted from 3 to 5 direct 
    cout<< *(it)<< "shifted to the next memory from 3 to 5 direct" ;   
    
    cout<<v[0];
}




int main (){

        explainPair();
        explainVector();

    return 0;
}