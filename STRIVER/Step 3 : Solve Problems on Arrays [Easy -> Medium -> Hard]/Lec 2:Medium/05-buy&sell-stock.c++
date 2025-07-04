#include<bits/stdc++.h>
using namespace std;


// optimal approach 

 int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int mini = prices[0];
        int maxProfit = 0;

        for(int i = 1; i<n; i++){ 
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit , cost );
            mini = min(mini , prices[i]);
        }
        return maxProfit;


}

int main(){

    vector<int > arr = {1,5,9,3,5,2,9};

    int max = maxProfit(arr);
    cout<<max;
    

    return 0;
}