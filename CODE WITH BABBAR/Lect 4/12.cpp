#include<bits/stdc++.h>
using namespace std;

int main(){         // i = row and j = column 

    int n;
    cin>>n;

    char ch = 'A';
    int i = 1;
    while (i <= n){

        int j = 1;
        while (j <=i ){

            cout<< ch <<" ";        // 'A' + 1 = B        
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}