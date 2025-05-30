#include<bits/stdc++.h>
using namespace std;


// Brute force  soln ( no optimal )
int max_ones(int arr[] , int n){

    int ones = 0;
    int maxOness =0 ;

    for(int i = 0 ; i<n ; i++){

        if(arr[i]==1){
            ones++;
        }
        else{
            ones=0;
        }

        maxOness = max(maxOness , ones );
    }

    return maxOness;


}



int main(){

    int arr[] ={1,1,0,1,1,1};

    int n = 6;   // 1-- 5 so 5 

    int p = max_ones(arr , n );

    cout<<p;
  

    

    return 0;
}