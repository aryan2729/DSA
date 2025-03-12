#include<bits/stdc++.h>
using namespace std;

// 🔥 Merge two sorted arrays -> in Single array

void merge(int arr1[] ,int  n , int arr2[] , int m , int arr3[] ){      // m and n are size of both arrays 

    int i = 0 , j = 0 , k = 0; 

    while ( i < n && j < m ){    
        
        if(arr1[i] < arr2[j] ){
            arr3[k] = arr1[i];
            k++ ;
            i++;
        }
        else{       // arr1[i] > arr2[j]
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while( i < n){          // copy first k rest elements -> means if one array element end but another array elements remaining so how u compare now just copy this to arr3
        arr3[k] = arr1[i];
        k++ ;
        i++;
    }

    while ( j < m ){        // copy second k rest elements
        arr3[k] = arr2[j];
        k++;
        j++; 
    }
}

void printArray(int arr[] , int n){

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    int arr1[5] = { 1 ,3, 5,7,9};
    int arr2[3] ={2,4,6};

    int arr3[8] ={0};       //🔥 filled new array with size of both arrays and filled with 0 first

    merge(arr1 , 5 , arr2 , 3 , arr3);      

    printArray(arr3 , 8);

    return 0;
}