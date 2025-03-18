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

/* (M.I.🔥) What is a Vector? (M.I.🔥)

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


    //iterator - This use for shift |  ( :: )-> scope resolution opeator 
    vector <int> :: iterator it = v.begin();            //  let v vector = {2,3,4,5} then v.begin = 2 

    it++;
    cout<< *(it) <<"shifted to the next memory from 2 to 3 cuz of it++";    // * used for iterator value print

    it = it + 2;            // now vecotor position shifted from 3 to 5 direct 
    cout<< *(it)<< "shifted to the next memory from 3 to 5 direct" ; 

    // let v = {10,20,30,40}
    vector <int> :: iterator it = v.end();          // v.end = memory location after 40 (last element)
    cout << v.back();  // this means  40 

    // Print a entire vector 🔥
    for (vector<int>::iterator it = v.begin() ; it != v.end() ; it ++ ){
        cout<< * (it) <<" ";
    }
    // short cut print entire vector (use) 🔥
    for( auto it = v.begin() ; it != v.end(); it ++){
        cout<< *(it) <<" ";
    }


    // Erase a vector 
    // if v = {10,20,12,23}
    v.erase(v.begin() +1 ); // 10(begin) + 1 = 20 -> {10,12,23}

    // if v = {10,20,12,23,35}
    v.erase(v.begin() + 2 , v.begin() + 4 );  //🚀 [Start ,end) -> v.begin()+ 4 = 23  cuz it's end next shows okk -> ans {10,20,35}

    
    // Insert in vector 
    vector <int> v(2,100); // {100,100}
    v.insert(v.begin(),300) ; // { 300 ,100,100}
    v.insert(v.begin() + 1 , 2 , 10);   // {300,10,10,100,100} it's means v.begin() + 1 and + 2 insert 10. 

    vector <int> copy(2,50); // {50 ,50 }
    v.insert(v.begin(),copy.begin(),copy.end());  // This will add whole copy name vector in begin of v {50,50,300,10,10,100,100}

    // for size of vector 
    cout<<v.size(); // 2 if v = {50,50}

    // {10,20}
    v.pop_back(); // 10 ans 

    // v1 =  {10,20} and v2 = {30,40}
    v1.swap(v2); // v1 = {30,40} and v2 = {10,20}

    v.clear(); // 🚀Erase the entire vector 

    cout <<v.empty();  

}

    void explainList(){
        
        list<int> ls;   // work same as vectors 
        ls.emplace_back(2); //{2}
        ls.push_back(4);    // {2,4}

        ls.push_front(1); // {1,2,4}
        ls.emplace_front(5); // {5,1,2,4}

        // Rest functions same as vectors begin , end , clear , insert , size and swap 
    }


    void explainDeque(){
        
        deque<int> dq;   // work same as vectors 
        dq.emplace_back(2); //{2}
        dq.push_back(4);    // {2,4}

        dq.push_front(1); // {1,2,4}
        dq.emplace_front(5); // {5,1,2,4}

        // Rest functions same as vectors begin , end , clear , insert , size and swap 
    }





int main (){

        explainPair();
        explainVector();
        explainList();
        explainDeque();

    return 0;
}