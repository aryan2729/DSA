// Remember i = row & j = column 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>> n;

    int i= 1 ;
    while (i <= n){             // i = row and j = column

        int j = 1;
        while (j <= i ){

            cout<< i - j + 1 << " ";            // row - column +1
            j++;

        }
        cout<<endl;
        i++;
    }

    return 0;
}