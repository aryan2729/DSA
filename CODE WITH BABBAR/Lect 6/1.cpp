#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int main(){

    // Decimal to binary 

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n!= 0){

        int bit = n & 1 ;
        ans =  (bit * pow(10,i) ) + ans;

        n = n >> 1 ;      // right shift
        i++;
    }

    cout<<"Answer is "<<ans<<endl;

    return 0;
}