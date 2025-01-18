#include<bits/stdc++.h>
using namespace std;

//🍁 Binary search -> In Binary search array should monotonous function ( in Increaseing order or Decreasing order ) 
// Time complexity of Binary search = O(logN) 

int binarySearch(int arr[] , int size , int key ){

    int start = 0; 
    int end = size -1;                          // end index
    int mid = start + (end - start)/2;          //🍁🍁 y not (start + end)/2 cuz if we taken start and end both to max value of int then divide by 2 then it's not in int range then mid varibable can't store that | that's y we used this = start + (end - start)/2 = start + end/2 - start/2 = start/2 + end/2 = (start + end)/2; 

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        // Go to right wala part 
        else if( key > arr[mid]){
            start = mid + 1;            // cuz end remains same but start should change to mid + 1 ;
        }
        else{                          // go to left wala part (key < arr[mid])
            end = mid-1;               // cuz start remains 0 but end should one left of mid ;
        }

        mid = start + (end - start)/2;         //🍁 don't forgot this ( cuz it's main point of code)
    }
    return -1;                         // if key not present in array 
}



int main(){

    int even[10]= {2,4,7,9,10,34,39,45,56,60};
    int odd[5]= {1,4,10,23,29};

    int evenIndex = binarySearch(even , 10 , 34);
    int oddIndex = binarySearch(odd , 5 , 29);                  // (arr , size , key (that u wanna find))

    cout<<"Index of 34 in even array is "<<evenIndex<<endl;
    cout<<"Index of 29 in odd array is "<<oddIndex<<endl;


    

    return 0;
}