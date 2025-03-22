#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(vector<int>& arr) {
        
    for (int i = 0 ; i< arr.size() - 1 ; i++){
        
        if( arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
    
}


int main(){

    vector<int> arr = { 1 , 5 , 8 , 10 };

    bool b = arraySortedOrNot(arr);
    cout<<b; // 1 means true 
    



    


    return 0;
}