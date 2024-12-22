#include<bits/stdc++.h>
using namespace std;

int main (){
// Remember i = row & j = column 

    int n ;
    cin>>n;

    int i = 1;
    while ( i <= n){

        int j = 1;
        while (j <= i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i += 1;
    }

    return 0;
}