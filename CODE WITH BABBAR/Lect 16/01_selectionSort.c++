#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[] , int n){

    for(int i = 0; i <n-1 ; i++){
        
        int minIndex = i;
        for(int j = i+1; j<n ; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){

    int arr[] = {1 , 29 , 22 , 9 , 10 , 45};

    selectionSort(arr , 6);

    for(int i = 0; i<6 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}