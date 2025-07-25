#include<bits/stdc++.h>
using namespace std;


// Brute Force Method ( S.C. -> O(N/2 + N/2) = O(n)  &  T.C. -> O(N + N/2)  )

vector<int> rearrangeArray(vector<int>& nums) {

    int n = nums.size();
    vector<int> v1;
    vector<int> v2;

    for(int i = 0 ; i< n ; i++){
        if(nums[i] > 0 ){
            v1.push_back(nums[i]);
        }
        else{
            v2.push_back(nums[i]);
        }
    }

    for(int i = 0 ; i<n/2; i++){    // both have equal numbers of sign + and -ve thats y n/2 
        
        nums[2*i] = v1[i];
        nums[2 * i+1 ] = v2[i];

    }

    return nums;
}



// Optimal Approach ( S.C.-> O(N) , T.C. -> O(n))

vector<int> rearrangeArray2(vector<int> nums){

    int n = nums.size();
    vector<int> ans(n , 0);     //vector of n size stores all value 0 defualt 
    int posIndex = 0 , negIndex = 1;

    for(int i = 0; i < n ; i++){

        if(nums[i] > 0){
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
        else{
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    return ans;
}




int main(){



    vector<int> A {1,2,-4,-5 , -8 , 3};

    vector<int> ans = rearrangeArray(A);
  
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }


    cout<<endl;
    vector<int> ans2 = rearrangeArray2(A);

    for(int i = 0; i< ans2.size() ; i++){
        cout<<ans2[i]<<" ";
    }
  
   

    

    return 0;
}