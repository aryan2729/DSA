#include<bits/stdc++.h>
using namespace std;



//🔥 ( Selection Sort )


void selection_sort(int arr[],int n){

    for(int i = 0 ; i<= n-2 ; i++){

        int minimum = i ;

        for(int j = i; j<= n-1; j++ ){

            if (arr[j] < arr[minimum]){

                minimum = j;
            }
        }

        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp ;

    }
}


// Bubble sort
void bubbleSort(int arr[] ,int m) {
        
    for (int i = 0 ; i<m ; i++){
        for(int j = 0 ; j < m -1 ; j++){
            if(arr[j] > arr[j+1]) {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }    
}


// Insertion sort 

void insertionSort(int arr[] , int n){

    for ( int i = 0 ; i<=n-1 ; i++){
        int j = i;
        while ( j> 0 && arr[j-1] > arr[j]){
            
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){

    // Selection sort 

    int n ;
    cout<<"Enter array length\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements one by one\n";

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);
    
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }



    // Bubble sort 
    int m ;
    cout<<"Enter array length\n";
    cin>>m;

    int arr2[m];
    cout<<"Enter array elements one by one\n";

    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    

    bubbleSort(  arr2 , m);

    
    for(int i = 0; i<n ; i++){
        cout<<arr2[i]<<" ";
    }

    
    // Insertion sort
    int p ;
    cout<<"Enter the length of array"<<endl;
    cin>>p;
    int arr3[p];
    cout<<"Enter the elements of array"<<endl;
    for(int i = 0 ; i<m ; i++){
        cin>>arr3[i];
    }

    insertionSort(arr3 , p);

    for(int i = 0 ; i<p ; i++){
        cout<<arr3[i]<<" ";
    }



    return 0;
}