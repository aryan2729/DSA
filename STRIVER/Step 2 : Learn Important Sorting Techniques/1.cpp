#include<bits/stdc++.h>
using namespace std;



//🔥 ( Selection Sort )


void selection_sort(int arr[],int n){

    for(int i = 0 ; i<= n-2 ; i++){

        int minimum = i ;

        for(int j = i; j<= n-1; j++ ){

            if (arr[j] < arr[minimum]){

                minimum = j;
            }
        }

        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp ;

    }
}

int main(){

    int n ;
    cout<<"Enter array length\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements one by one\n";

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);
    
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}