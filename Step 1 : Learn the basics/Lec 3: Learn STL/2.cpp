#include<bits/stdc++.h>
using namespace std;


// Stack(M.I🔥)--> 🚀Follow LIFO (Last in First out)
void explainStack (){
    
    stack<int> st;
    st.push(1);  // {1}
    st.push(2);  // {2,1}
    st.push(3);  // {3,2,1}
    st.push(3);  // {3,3,2,1}
    st.emplace(5);  // {5,3,3,2,1}

    cout<< st.top();  // prints 5  "** st[2] is invalid **"

    st.pop();   // st looks like {3,3,2,1} | pop will delte first element but from up cuz it's stack

    cout<<st.top(); // 3 now 
    cout<<st.size(); // 4
    cout<<st.empty(); // empty the stack

    // swap stacks
    stack<int> st1,st2;
    st1.swap(st2);
}

// Queue(M.I🔥) -> Works on FIFO(First in first out)

void explainQueue(){

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(4); // {1,2,4}

    q.back() += 5;  // it's means last element 4 + 5 = 9 

    cout<<q.back();    // prints 9

    // q is {1,2,9}
    cout<< q.front();  // pint 1

    q.pop();  // {2,9}  | remove first element 

    cout<< q.front(); // prints 2

    // size swap empty same as stack 

}

// Priority_Queue(M.I🔥) --> It's same as queue but greater elements to lesser 

void explainPriorityQueue(){

    priority_queue<int> pq;
    
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<< pq.top(); // prints 10 

    pq.pop(); // remove 10 | {8,5,2}

    cout<< pq.top(); // prints 8

    // size swap empty func same as others 

    //🔥(Minimum Heap) 🚀 - same but lesser to greater elements
    priority_queue<int , vector<int> , greater<int> > pq;
    pq.push(5); // {5}
    pq.push(3); // {3,5}
    pq.push(8); // {3,5,8}
    pq.emplace(10); // {3,5,8,10}

    cout<< pq.top(); // prints 3

}

//🔥 Sets - Sorted(1,2,3) and unique

    void explainSet(){

        set <int> st;
        st.insert(1); // {1}
        st.emplace(2); // {1,2}
        st.insert(2); // {1,2} no repitive
        st.insert(4); // {1,2,4}
        st.insert(3); // {1,2,3,4}

        // Functionality of insert in vector can be used also , 
        // that only increase efficiency. 
    
        // begin() , end() , size() , empty() and swap() same as vectors

        // Find | {1,2,3,4,5}
        auto it = st.find(3);  // iterator using by auto which iterate the 3

        // {1,2,3,4,5}
        auto it = st.find(6) ; // null

        // {1,4,5}
        st.erase(5); // erase 5 

        int cnt = st.count(1);
        auto it = st.find(3);
        st.erase(it); // it takes constant time 

        // Erase some to some |  let st = {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4); 
        st.erase(it1 , it2);   // after erase {1,4,5} | [start,end) - > end( 3 remove ) cuz before last 

        // lower_bound() and upper_bound() fuction works in the same way 
        // as in vector it does.

        // This is the syntax
        auto it = st.lower_bound(2);
        auto it = st.upper_bound(3);
    }

//🔥 (Multi set) -> Sorted (1,2,3) and Not unique (2,2,4,5,5)
    void  explainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also 

    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased 

    int cnt = ms.count(1); 

    // Only a single  one erased ?
    ms.erase(ms.find(1)); // so 1st one 1 is removed 

    auto it = ms.find(1);
    advance(it, 2);
    ms.erase(ms.find(1), it);  // remove from [start , end) | where it = ms.find(1) + 2 

    }

//🔥 Unorded set -> Unique but not sorted (2,1,4,3)
void explainUset(){
    // ALl the experssions are same 
    // just lower_bound and upper_bound func not work 
}


// Maps(M.I🔥)- Key - values | key can never be same like ( always unique ) and (sorted key) only..

void explainMap(){

    map<int,int> mpp ; // <key,value>

    map<int , pair<int,int> > mpp ; // key = {1} and value = {2,3}

    map< pair<int,int> , int > mpp; // key = {2,3} and value = 4;


    mpp[1] = 2 ; // key and value -> {1,2}
    mpp.emplace(3,1);  // key,value -> {3,1} direct

    mpp.insert(2,4);   // key,value -> {2,4} direct 

    mpp[2,3]=4;   // key,value -> {{2,3} , 4}

    // Map stored key in unique ( 5,2,3) and stored order (2,3,5)
    
    for(auto it : mpp){
        cout<< it.first<<" "<<it.second<<endl;
    }

    /*{
        {1,2}
        {3,1}
        {2,4}
    } */

   cout<<mpp[1] ; // ans 5 (value)
   cout<<mpp[5]; // null

   auto it = mpp.find(3); // it = {3,1}
// cout<< *(it).second;    // ans 1

//    auto it = mpp.find(5); // not present 
//    cout<< *it.second; // mpp.end() -> means after the map 

    // This is the syntax
    auto it = mpp.upper_bound(3);
    auto it = mpp.lower_bound(2);

}

//Multi_Maps(M.I🔥)- Same as Map just u can store duplicate keys in (sorted order )
// e.g. {1,2} and {1,5} 

// Unordered_Maps(M.I🔥)- Unique keys (1,2,3) but (not sorted order )



//🔥self made Comparator (always change acc . to Qsn)
bool comp (pair<int,int> p1 , pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if same 
    if(p1.first > p2.first) return true;
    return false;                               // it' means else
}


void explainExtra(){

    //🔥Sorting 
    // like if {1,3,4,2}
    // sort(a , a+n); //{1,2,3,4} 
    // sort(v.begin(),v.end()); 
    // sort (a+2 , a+4);   // if v = {1,4,3,2} then {1,4,2,3}

    // sorting decending order:
    // sort(a , a+n , greater<int>()); 

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    /* 🔥 Soring acc. to striver wayyyy🔥
        sort it according to second element(_,second)increasing order , 
        if second element is same , then sort acc. to first (first,_)
        but in decending order .
    */ 

//    sort(a , a+n , comp);  // striver way formula


    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num = 167833399995;
    int cnt =__builtin_popcountll(num);


    string s = "123";

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    // int maxi = * max_element();
}






int main (){

    explainStack();
    explainQueue();
    explainSet();





    return 0;
}