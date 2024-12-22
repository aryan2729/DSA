#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>> n;

    int i= 1;
    while (i <= n){

        // space
        int space = i - 1;
        int p = 1;
        while ( p<=space ){
            
            cout<<" ";
            p++;
        }

        // star
        int j = 1;
        while (j<= n-i+1){
            cout<< i ;
            j++;
        }

        cout<<endl;
        i++;
    }


    return 0;
}