#include<bits/stdc++.h>
using namespace std;

// Quick sort -> Doesn't use an extra temp array | in merge we're using extra temp array 

void quickSort(vector<int>& arr, int low, int high) {
        
    if(low < high){
        int PartitionIndex = partition(arr , low , high);
        quickSort(arr , low , PartitionIndex - 1);
        quickSort(arr , PartitionIndex + 1 , high);
    }
}

int partition(vector<int>& arr, int low, int high) {
    
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while ( i < j ){
        while ( arr[i] <= pivot &&  i <= high - 1){
            i++;
        }
        while( arr[j] > pivot &&  j >= low + 1){
            j--;
        }
        if(i < j){
            swap(arr[i] , arr[j]);
        } 
        
    }
    swap(arr[low] , arr[j]);
    return j;
}



int main(){

    

    return 0;
}