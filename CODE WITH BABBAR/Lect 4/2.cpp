#include<bits/stdc++.h>
using namespace std;

int main(){
// Pattern 1 
    cout<<"Enter value of n \n";
    
    int n ;
    cin>>n;

    int i = 1;
    while (i<= n){
        
        int j =1 ;
        while (j<= n){
            cout<<i;
            j++;
        }
        cout<<endl;

        i++;
    }



    return 0;
}