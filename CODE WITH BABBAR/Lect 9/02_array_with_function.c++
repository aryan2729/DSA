#include<bits/stdc++.h>
using namespace std;



void array1Fun(int arr[] , int n ){     //🔥 n-> is for length fo array

    for (int i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){

    int array1[10] = { 1,2,3}; // index 0-> 1 , 1-> 2 , 2 ->3

    array1Fun( array1 , 3); // m.i.p { array , length }

    
    
    // types of array -> char , double etc

    char ch[5] = {'a', 'b' , 'c' , 'd' , 'e'};

    double firstDouble[10];

    long firstLong[10];
    
    bool firstBool[10];

    
    
    
    return 0;
}