#include<bits/stdc++.h>
using namespace std;


int largest(vector<int> &arr) {
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}


int main(){

    vector<int> arr = {10, 20, 4, 45, 99, 67};


    int result = largest(arr);


    cout << "The largest element in the array is: " << result << endl;

    return 0;
}