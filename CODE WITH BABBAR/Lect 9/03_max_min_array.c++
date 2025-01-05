#include<bits/stdc++.h>
using namespace std;

    // MAX and MIN value in Array

int getMin(int array [] , int n){

    int mini = INT_MAX;             //INT_MAX= maximum value of integer data

    for(int i  = 0 ; i< n; i++){
       
        mini = min(mini , array[i] );           //🚀 From both min value stores in mini  | also can do if(array[i ] < mini ) { min = array[i]};
    }
    return mini;                     
}

int getMax(int array[] , int n){

    int maxi = INT_MIN;          // INT_MIN = minimum value of integer data 

    for (int i = 0; i < n; i++){
        
        maxi = max( maxi , array[i] );          //🚀 FRom both max value stores in maxi | also can do if(array[i ] > maxi ) { maxi = array[i]};
    }
    return maxi;
}


int main(){

    cout<<"Write size of array  \n";
    int size ;
    cin>>size;

    int num[100];

    cout<<"Now enter values in array & keep in mind the size of array that you define above \n";

    for (int i = 0; i < size; i++) {
        cin>>num[i];            //taking input in array
    }


    cout<<"The Maximum value of array num is "<< getMax(num , size)<<endl;
    cout<<"The Minimum value of array num is "<< getMin(num , size)<<endl;
    





    return 0;
}