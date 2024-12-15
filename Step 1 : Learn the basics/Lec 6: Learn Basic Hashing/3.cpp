#include<bits/stdc++.h>
using namespace std;


int main (){

    // 🚀 Number Hashing More then limit of main 10^6 if want 10^8 or 10^9)

    cout<<"write how much length of array of want \n then after that fill that array";
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i] ;
    }

    // pre compute 
    unordered_map<int,int> mpp;  // can preference ( unordered_map  ) over  ( map ) cuz it Time complexity : O(N)     |    we use map for store no. more then limit of main like 10^9 etc 
    for(int i = 0; i<n ; i++){
        mpp[arr[i]] ++ ;
    }


    cout<<" how much number repeating u wanna check \n after that write which no. repating how many times u wanna check ";
    int q;          //query check 
    cin>> q;
    while (q--){
        int number;
        cin>>number; 
        cout<<mpp[number]<<endl;     
    }



    return 0;
    }