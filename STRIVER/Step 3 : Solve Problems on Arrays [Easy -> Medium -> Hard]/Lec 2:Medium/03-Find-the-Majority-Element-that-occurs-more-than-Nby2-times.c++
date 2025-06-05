#include<bits/stdc++.h>
using namespace std;

// 03-Find-the-Majority-Element-that-occurs-more-than-N/2-times 

// Brute force approach ( normal search )

int majorityElement(vector<int> & arr){

    int n = arr.size();

    for(int i = 0 ; i<n ; i++){

        int count = 0;
        for(int j = 0 ; j<n ; j++){
            if(arr[j]==arr[i]) count++;
        }

        if(count > n/2 ) return arr[i];
    }

    return -1;              // T.C - O(n^2) & S.C - O(1)
}


// Better approach (map hashing) map-( key , value )  first means key and second means value

int majorityElement2(vector<int> & arr){

    int n = arr.size();

    map<int,int> mpp;
    for(int i = 0; i<n ; i++){
        mpp[arr[i]]++ ;             // it stores mpp[i] = value same i mpp[i]++ means = value +1;
    }

    for(auto it:mpp){
        if(it.second > n/2) return it.first;        // it.first -> key and it.second -> value 
    }

    return -1;
}



int main(){

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;


    int ans2 = majorityElement2(arr);
    cout<<"The majority element is: "<< ans2<< endl;

    

    

    return 0;
}