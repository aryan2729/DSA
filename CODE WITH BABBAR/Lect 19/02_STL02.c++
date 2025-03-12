#include<bits/stdc++.h>
using namespace std;

int main(){

    // deque 🔥 --> you can use it for remove or add from front and back both 🔥

    deque<int> d;
    cout<<"\nDEQUE STL"<<endl;


    d.push_back(1);     // add from back
    d.push_front(2);    // add from front 
    d.push_front(3);

    // pop 
    d.pop_back();       // remove last element 

    cout<<"Print First index element-> "<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"last "<<d.back()<<endl;

    cout<<"Empyt or not "<<d.empty()<<endl;     //🔥 this will tell is it empty or not if it is then 1 orterwise 0 


    cout<<"Before erase "<< d.size() <<endl;
    
    //🔥 erase 🔥
    d.erase( d.begin() , d.begin() + 1);        // 🔥 this will remove front one element 

    cout<<"After erase "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;




    //  list 🔥
    cout<<"\nLIST STL"<<endl;


    list<int> l;

    list<int> n(l);     // list copying to n 
    list<int> m(5 , 100);   // 5 size 100 stores in all index 

    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);     // add in list same 
    l.push_front(2);
    l.push_front(3);

    for(int i :l){
        cout<<i<<" ";
    }
    cout<<endl;

    // erase 🔥
    l.erase(l.begin());     // erase first element 

    cout<<"After erase "<<endl;
    for(int i :l){
        cout<<i<<" ";
    }
    cout<<endl;





    // Stack 🔥 - [ Last in First out ] - ( like wedding plates )

    stack<string> s;
    cout<<"\nSTACK STL"<<endl;

    s.push("YOYo");
    s.push("Babbar");
    s.push("Kumar");

    cout<<"Top element-> "<<s.top()<<endl;      // print top element 

    s.pop();    // remove first element of table -> kumar

    cout<<"Top element-> "<<s.top()<<endl;

    cout<<s.size();




    // queue 🔥 - [ First in First out ]
    cout<<"\n\nQUEUE STL\n";

    queue<string> q ;

    q.push("Arnav");
    q.push("Rancho");
    q.push("Aryan");

    cout<<"size before pop "<<q.size()<<endl;

    cout<<"First element "<<q.front()<<endl;
    q.pop();            // 🔥this will remove from top first inputed 
    cout<<"First element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;





    // priority_queue 🔥 - maxi heap and mini heap 
    cout<<"\nPRIORITY QUEUE STL\n";

    // Max heap
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int , vector<int> , greater<int> > mini;
    
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout<<"size -> "<<maxi.size()<<endl;

    int p = maxi.size();

    for(int i = 0; i<p ; i++){
        cout<<maxi.top()<<" ";      // print top element then 
        maxi.pop();                 // remove 
    }
    cout<<endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    cout<<"size -> "<<mini.size()<<endl;

    int w = mini.size();

    for(int i = 0; i< w ; i++){
        cout<<mini.top()<<" ";      // print top element then 
        mini.pop();                 // remove 
    }

    cout<<"Khaali h kya bhai ?? "<<mini.empty()<<endl;      // ask 1 for true or 0 for false

    


    return 0;
}