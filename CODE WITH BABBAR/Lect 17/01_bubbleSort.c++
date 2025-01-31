#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n){

    for (int i = 0 ; i < n-1; i++){         // for round 0 to n-1  

        for(int j = 0 ; j < n-i-1 ; j++ ){      // process element till n-i-1 cuz { 1, 2 , 3} if 3 is fixed highest number then we don't need that again to check so we move backwards 1 by 1 which using i but we've taken from i = 0  so n-i-1 :))
            if(arr[j] > arr[ j+1 ]){            // means j+1 < j then swap
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}



int main(){

    int arr[] = { 2 , 1 , 10 , 7 , 19 , 3 };

    bubbleSort(arr , 6);

    for(int i = 0 ; i< 6 ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}