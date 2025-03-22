#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> arr ){

    int largest = arr[0];
    int secondLargest = -1 ;

    for(int i = 0 ; i< arr.size() ; i++){
        
        if( arr[i] > largest){

            secondLargest = largest;
            largest = arr[i];
        }
        else if( arr[i] < largest && arr[i] > secondLargest ){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}


int main(){

    vector<int> arr = {10, 20, 4, 45, 99, 67};


    int result = getSecondLargest(arr);

    
    cout << "The second largest element in the array is: " << result << endl;

    return 0;
}