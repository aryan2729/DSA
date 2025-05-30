#include<bits/stdc++.h>
using namespace std;

// brute force , better approach on notes 

// Optimal approach 

int findingMissingNumber(int arr[] , int n){
    
    int sum = (n*(n+1))/2;

    int sumOfArr  = 0;

    for(int i = 0 ; i<n - 1 ; i++){         // n = last element 5 so the size of array will 4 so n-1 
        sumOfArr += arr[i];         
    }

    int output = sum - sumOfArr;

    return output;

}



int main(){

    int arr[] ={1,2,4,5};

    int n = 5;   // 1-- 5 so 5 

    int p = findingMissingNumber(arr , n );

    cout<<p;
  

    

    return 0;
}