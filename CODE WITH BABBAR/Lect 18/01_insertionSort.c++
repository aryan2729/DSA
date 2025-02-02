#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int n){

    for (int i = 1; i < n ; i++){

        int temp = arr[i] ;

        int j = i-1;
        while ( j >= 0){

            if(arr[j] > temp){
                // shift one forward
                arr[j+1] = arr[j];
            }
            else{       // ruk jao cuz now like 11 > all before elements 
                break;
            }
            j--;                            // this run for all before values of i like 0 , 1 , 2 if i = 3
        }
        arr[j+1] = temp;        // now j+1 ki place p move kar do temp ko 
    }
}


int main(){



    int arr[] ={ 3 , 10 , 2 , 18 , 4 , 1 , 16};

    insertionSort( arr , 7);

    for(int i = 0; i< 7 ; i++){
        cout<<arr[i]<<" "; 
    }

    


    return 0;
}