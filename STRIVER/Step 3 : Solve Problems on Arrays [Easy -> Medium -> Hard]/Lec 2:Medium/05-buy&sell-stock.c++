#include<bits/stdc++.h>
using namespace std;


// optimal approach 

 int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxDiff = 0;

        for(int i = 0 ; i< n; i++){
            
            minPrice = min(minPrice , prices[i]);
            maxDiff = max(maxDiff , prices[i] - minPrice );


        }

        return maxDiff;


}

int main(){

    vector<int > arr = {1,5,9,3,5,2,9};

    int max = maxProfit(arr);
    cout<<max;
    

    return 0;
}