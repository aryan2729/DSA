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

int main (){
 
        explainPair();

    return 0;
}