#include<bits/stdc++.h>
using namespace std;



vector<int> reverse(vector<int> v){            // vector function 

    int start = 0 , end = v.size()-1 ;      // size - 1 last index point

    while(start <= end){
        swap( v[start] , v[end]);           // this will used to reverse 
        start++;
        end--;
    }

    return v;

}


void printFun(vector<int> v){

    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){

    vector<int> v;
    
    v.push_back(5);
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(8);


    vector <int > ans = reverse(v);  // reverse is function

    cout<<"Printing Reverse Array\n";
    
    printFun(ans);

    
    return 0;
}