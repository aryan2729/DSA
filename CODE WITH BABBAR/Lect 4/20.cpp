#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n;

    int number = 1;
    int i = 1;
    while (i<= n){

        int j = 1;
        int space = n - i;
        while (j<= space){
            cout<<" ";
            j++;
        }

        int p = 1;
        while (p <= i ){
            cout<<number;
            
            number++;
            p++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}