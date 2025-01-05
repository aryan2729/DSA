#include<bits/stdc++.h>
using namespace std;

// search in array (m . i . p)

bool search( int arr[] , int size  , int key ){

    for (int  i = 0; i < size; i++)
    {
        if ( arr[i] == key ) {
            return 1 ;
        }
    }
    return 0;
}

int main(){

    int array[10] = { 1 , -23 , 0 , 33 , 11 , 55 , 89 , 4 , 9 , 10};

    int key;
    cout<<"Enter the value that you want to search in array "<<endl;
    cin>>key;

    bool found = search(array , 10 , key);      // if found returns 1 means true then it stored in found variable 


    if(found) {
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"key is absent "<<endl;
    }

    

    return 0;
}