#include<bits/stdc++.h>
using namespace std;



void swapArray(int arr [] , int size){

    for(int i = 0; i<size; i+= 2 ){     // 🍁 - instead of i++ we've taken i+= 2 cuz in swap we dont want to swap the already swaped term like { 1 , 2 , 4  , 3 } if we swap 1 to 2 then we don't swap 2 to 4 we swap 4 to 3 that's y we've used i+= 2

        if(i+1 < size ){
            swap(arr[i] , arr[i+1]);
        }
    }
}


void printArray(int arr[] , int size){
    for(int i  = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int even[8] = {2 , 5 , 1 , 0 , -4 , 2, 1 , 4};
    int odd[5] = {0 , -3 , 5 , 2 , 4};


    swapArray(odd , 5);
    printArray(odd , 5);

    swapArray(even , 8);
    printArray(even , 8 );


   
    return 0;
}