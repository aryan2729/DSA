#include<bits/stdc++.h>
using namespace std;

// this used to sort 01 element array 

void printArray(int arrm[], int n ){

    for(int i = 0; i< n; i++){
        cout<<arrm[i];
    }
    cout<<endl;
}


void sort01Array(int arr[] , int n ){

    int left = 0 , right = n-1;

    while (left < right ){

        while (arr[left]== 0 && left<right ){
            left++;
        }

        while (arr[right]== 1 && left < right ){
            right--;
        }

        //arr[i]==1 &&  arr[j]== 0 then 
        if(left <right ){

            swap(arr[left] ,arr[right]);
            left++;
            right--;
        }
    }
}


int main(){

    int arr[8] ={0,1,1,1,0,0,0,1};

    sort01Array(arr , 8);
    printArray(arr , 8);

    return 0;
}