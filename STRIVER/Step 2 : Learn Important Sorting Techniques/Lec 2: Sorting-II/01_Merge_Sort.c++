#include<bits/stdc++.h>
using namespace std;

// Merge sort --> Divide and merge ( Recursion use )


void merge( vector<int> &arr , int l , int mid ,int  r){         // l = left and r = right
    
    vector<int> temp; // so you can store in it 
    int left = l;
    int right = mid+1;
    
    while(left <= mid && right <= r ){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left;
        }else{
            temp.push_back(arr[right]);
                right++;
            
        }
        
    }
    while ( left <= mid ){    // means if right hand side thing end then only left remainig after compare both simultaneously 
        temp.push_back(arr[left]);
        left++;            
    }
    while( right <= r ){  // same if right hand side thiing remains only left already compared 
        temp.push_back(arr[right]);
        right++;
        
    }
    
    for(int i = l ; i<=r; i++){        // cuz temp 1 is 1 forward then array so index same one backward
        arr[i] = temp[i-l];
        
        
    }
}


void mergeSort(vector<int>& arr, int l, int r) {       // l = left and r = right
    
    if(l == r) return ;
    int mid =  (l + r )/2;
    mergeSort( arr,  l,  mid);
    mergeSort(arr , mid + 1 , r );
    merge( arr , l , mid , r );
}





int main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}