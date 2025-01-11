#include<bits/stdc++.h>
using namespace std;

// Reverse Array (m.i.p)

void reverse( int arr[]  , int n ){

    int start = 0;              // first index
    int end = n-1 ;             // last index

    while(start <= end ){           // when start > end then stop the program 

        swap(arr[start] , arr[end]);        // swap - > swap | we can use pointer thing also but this good 
        start++;                            // start + 1 at index 1 
        end--;                              // end -1 at index n-2 
    }
}

void printArray(int arra []  , int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arra[i]<< " ";
    }
    cout<<endl;
}


int main(){

    int array[5] ={ 2 , 3 ,0 , -1 , -33};            // odd array 
    int array2[6] = { 2 , 3 , 4 , 5 , 6 , 7};        // even array

    reverse(array , 5);
    reverse(array2 , 6);

    printArray(array , 5);
    printArray(array2 , 6);

    return 0;
}