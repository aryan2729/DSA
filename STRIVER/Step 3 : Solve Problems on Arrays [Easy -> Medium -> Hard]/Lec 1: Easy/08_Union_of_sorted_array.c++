#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> & arr1 , vector<int> & arr2){

    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> st;
    for(int i = 0 ; i<n1 ; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0 ; i<n2 ; i++){
        st.insert(arr2[i]);
    }

    vector<int> UnionArray;
    
    for(auto it : st){              // for copying to unionarray 
        UnionArray.push_back(it);
    }

    return UnionArray;


}



int main(){

   

    return 0;
}