#include<bits/stdc++.h>
using namespace std;

int main (){

    int n ;
    cout<<"write how much length of array of want \n then after that fill that array";
    cin>> n;
    int arr[n];  
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];                   // fill the array one by one 
    }
    

    // pre compute 
    int hash[13]={0};           //created hash of max 13  cuz we giv max input of 12  and filled it with all 13 with 0

    for(int i = 0; i< n ; i++){
        hash[arr[i]] += 1;     // filling hash by arr[i] values and incrementing
    }

    
    cout<<"how much no. repeating u wanna check \n after that write which no. repating how many times u wanna check ";
    int q;
    cin>>q;         // how many querys u wanna check 
    while(q--){
        int number;
        cin>> number ;  // write the number u wanna check how many times this appears 
        // fetch
        cout<<hash[number]<<endl;
    }

    



    return 0;

}