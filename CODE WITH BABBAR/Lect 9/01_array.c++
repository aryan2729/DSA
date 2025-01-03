#include<bits/stdc++.h>
using namespace std;

int main(){

    int number[15];     // array 

    cout<<"\nValue at index 5"<<number[14]<<endl;         // not stored anything so this give garbage value  

    // initialising an array
    int second[3] = { 5 , 7 , 11};      // array of 3 

    // accesing an element 
    cout<<"\nValue at 2 index "<<second[2]<<endl; // index -> 0 , 1 ,2 


    int third[15] = { 2 , 7};

    int n = 15;  
    cout<<"\nPrinting the array"<<endl;
    for(int i = 0; i< n ; i++){     
        cout<<third[i]<<" ";       //🔥 if we give array of 15 in which only input 3 terms then the rest of the terms of array will 0 
    }


    // 🔥 initialising all locations with 0 
    int array[10] = {0};
    int p = 10;

    cout<<"\nPinting array for all 0"<<endl;
    for (int i = 0; i < p; i++)
    {
        cout<<array[i]<<" ";

    }
    




    

    return 0;
}