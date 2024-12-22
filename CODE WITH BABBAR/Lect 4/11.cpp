#include<bits/stdc++.h>
using namespace std;

int main(){         // i = row and j = column 

    int n;
    cin>>n;

    
    int i = 1;
    while (i <= n){

        int j = 1;
        while (j <=i ){
            
            char ch = 'A'+i-1;
            cout<< ch <<" ";        // 'A' + 1 = B        
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}