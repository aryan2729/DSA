#include<bits/stdc++.h>
using namespace std;


void solve(int arr[] , int n){

    int temp = arr[0];

    for(int i = 0 ; i< n-1; i++){
        arr[i] = arr[i+1];
    }

   arr[n-1] = temp;

    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[5] = {1,2,45,7,3};

    solve(arr,5);


    


    return 0;
}