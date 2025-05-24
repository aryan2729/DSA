#include<bits/stdc++.h>
using namespace std;


void leftRotatebyD(int arr[] , int n , int d){

    
    reverse( arr , arr + d);                    // first reverse the array from 0 to arr till d term then reverse it from arr + d to arr at end n then reverse arr , arr + n then we got the correct ans 
    reverse( arr + d , arr + n );
    reverse(arr , arr + n );

}




int main(){

    cout<<"enter the size of array "<<endl;
    int size;
    cin>>size;
    int arr[size];

    cout<<"enter this "<<size<<" numbers in array "<<endl;
    for(int i = 0 ; i<size; i++){
        cin>>arr[i];
    }

    cout<<"enter the number from which you wanna left rotate it "<<endl;
    int d;
    cin>>d;
    leftRotatebyD(arr , size , d);

    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }



    

    return 0;
}