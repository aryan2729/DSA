#include<bits/stdc++.h>
using namespace std;

int main(){

    // sets 🔥 - always unique ( not contains same element )
    // unique  and sorted order . 
    

    set<int> s;
    cout<<"\nSET STL\n";

    s.insert(5);    //🔥 insert
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(2);
    s.insert(3);

    for(int i:s){   //🔥 for printing it's come in sorted order and unique
        cout<<i<<" ";
    }cout<<endl;

    
    s.erase(s.begin());  //🔥 erase begin element

    // after above erase s become 2 3 5


    //🔥 making iterator for set s
    set<int>::iterator it = s.begin();      // so now you can remove other elements also with this iterator  

    it++;
    s.erase(it);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not "<<s.count(5)<<endl;




    //🔥 MAP -> key - values  ( two keys can't be common but values can )
    // & sorted.


    cout<<"\nMAP STL"<<endl;

    map<int , string > m;   // <key , value> 

    m[1] = "babbar";        // 🔥 insert 
    m[3] = "RAj";
    m[2] = "YOYO";

    m.insert( { 5 , "Bees"} );  // also can use this for insert

    cout<<"Before erase\n";
    for(auto i:m){
        cout<<i.first<<endl;
    }

    cout<<"Founding 3-> "<<m.count(3)<<endl;

    m.erase(3);     //🔥 erase
    
    cout<<"after erase\n";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    
    // ALGORITHMS 🔥 
    cout<<"\nALGORITHMS STL"<<endl;

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);

    cout<<"Finding 4-> "<<binary_search(v.begin(),v.end(),4)<<endl;     // by binary search | 4 find 
    
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

    int a = 4;
    int b = 6;

    cout<<"max -> "<<max(a,b);              // for max

    cout<<"min -> "<<min(a,b);

    swap(a,b);
    cout<<endl<<"a-> "<<a<<endl;

    string abcd = "abcd";

    reverse(abcd.begin(),abcd.end());   // for Reverse 

    cout<<"String-> "<<abcd<<endl;

    rotate(v.begin() , v.begin() +1 , v.end());    
    cout<<"after rotate"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin() , v.end());          // for sort
    cout<<"after sorting"<<endl;

    for(int i :v){
        cout<<i<<" ";
    }

    return 0;
}