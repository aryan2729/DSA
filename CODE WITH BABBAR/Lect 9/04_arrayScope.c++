#include<bits/stdc++.h>
using namespace std;

    // 🍁M.i.P -> when we use pass by reference in function then the actual value changes 
    // but when we want to change the value of array indexes then you don't need to pass the reference
    // because it's pass actuall address of array to function instead of copy { copy passes in variables only }

void update ( int arr[] , int n ){

    arr[0] = 122; // updating the array first element no need to pass by refernce 

    cout<<"Printing in update function "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<< arr[i] << " ";
    }

}

int main(){



    // updating array's first element 
    int array[3]={1 , 2 , 3};

    update( array , 3);

    // Printing the array 
    cout<<"\nPrinting in main function "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<< array[i] << " ";
    }

    

    return 0;
}