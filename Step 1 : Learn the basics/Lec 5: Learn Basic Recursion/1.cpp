#include<bits/stdc++.h>
#include <iostream>
using namespace std;

/*🔥(M.I.) Recursion -> When a function call itself until 
 a specific condition met. */

// Most of part like printing N things , N-1 , 1 -N covered in notes (copy)


//🚀 Sum of first N no.s 
int  sum(int n){            //func

    if(n== 0) return 0;

    return n + sum(n-1) ;
}


// For factorial of N no.s 

int fact( int B){
    if(B==0) return 1;

    return B * fact(B-1) ;
}

//🚀 Reverse an array(2nd way )
void reverseArr2(int i , int arr[] , int m ){

    if( i >= m/2) return ;

    swap(arr[i], arr[m-i-1]); 

    reverseArr2(i+1,arr,m);
}


int main (){

    // cout<<"Write n value for sum of N no.s";
    // int n ;
    // cin>>n;

    // cout<<(sum(n)) ;            // findng Sum of n no.s


        int m;
        cin >> m ;        
        int arr[m];
        for(int i = 0; i<m ; i++) cin>> arr[i];   // input array that u want to reverse 

        reverseArr2(0,arr,m);

        for(int i = 0 ; i< m ; i++) cout<<arr[i]<<" ";  // printing swaped array or reverse array 




    return 0;
}