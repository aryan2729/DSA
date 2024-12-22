#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while (i <= n){

        // space
        int j = 1;
        int space = n -i;
        while (j <= space){
            
            cout<<" ";
            j++;
        }

        // triangle
        int m = 1;
        while (m <= i){
            cout<<m ;
            m++;
        }

        int b = 1;
        int nu = i - 1;
        while (  nu  ){
            cout<<nu;
            nu--;
        }
        cout<<endl;
        i++;

        

    }

    return 0;
}