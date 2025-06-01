#include<bits/stdc++.h>
using namespace std;


// Brute force approach (normal search )

vector<int> twoSum(int n , vector<int> & arr , int target){

    for (int i = 0 ; i< n ;i++){

        for(int j = i+1; j< n ; j++){
            if(arr[i]+arr[j] == target){
                return {i , j};                     // cuz vector 
            }
        }

    }
    return {-1 , -1 };
}


// Optimal approach( by map hasing )

vector<int> twoSummm(int n , vector<int> & arr , int target){

    map<int , int > mpp;            // map<key,value>

    for(int i = 0 ; i< n ; i++){
        
        int need  = arr[i];
        int moreNeed = target - need;

        if( mpp.find(moreNeed) != mpp.end()){
            return {mpp[moreNeed] , i };            // mpp[moreNeed ] = j 
        }

        mpp[need] = i;
    }

    return {-1 , -1};
}


int main(){

    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;


    vector<int> anss = twoSummm(n , arr , target);

    cout<<"This is the answer for variant 2: [" << anss[0] << ", "<< anss[1] << "]" << endl;

    return 0;
}