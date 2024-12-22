#include<bits/stdc++.h>
using namespace std;

int main (){

    int n ;
    cin>>n;

// Remember i = row & j = column 


    int i = 1; 
    while ( i <= n){
        
        int value = i;        // cuz we want to print everytime start with index number and this traingle type structure here we can't direct add i cuz if we did then i will change 
        int j = 1;
        while (j <= i){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}