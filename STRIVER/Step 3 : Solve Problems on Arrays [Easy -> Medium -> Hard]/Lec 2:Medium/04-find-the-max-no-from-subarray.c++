#include<bits/stdc++.h>
using namespace std;

// Better approach (T.C. O(N^2) & s.c O(1) )

int maxSubarraySum(int arr[] , int n ){

    int maxi = INT_MIN;
    for(int i = 0; i<n ;i++){
        
        int sum = 0;
        for(int j = i ; j<n; j++){
            sum+=arr[j];

            maxi = max(maxi , sum);
        }
    }

    return maxi;
}


// Optimal approach ( kadane's algorithm) T.C-O(N) & S.C.-O(1)

int maxSubarraySum2(int arr[] , int n ){

    int sum = 0; 
    int maxi = INT_MIN;

    for(int i = 0; i<n; i++){
        
        sum+= arr[i];

        if(sum > maxi ) maxi = sum;

        if(sum < 0) sum =0;

    }

    return maxi;
}

int main(){

    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    

    int maxSum2 = maxSubarraySum2(arr, n);
    cout << "The maximum subarray sum is: " << maxSum2 << endl; 

    return 0;
}