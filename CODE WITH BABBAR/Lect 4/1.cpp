// Lecture 4 
#include<bits/stdc++.h>
using namespace std;

int main(){     // Remember i = row & j = column 

    // Pattern 1 
    cout<<"Enter value of n \n";

    int n ;
    cin>>n;

    int i = 1;
    while (i<= n){
        
        int j =1 ;
        while (j<= n){
            cout<<"*";
            j++;
        }
        cout<<endl;

        i++;
    }

    // Pattern 2 
    cout<<"Enter value of  \n";
    
    int n ;
    cin>>n;

    int i = 1;
    while (i<= n){
        
        int j =1 ;
        while (j<= n){
            cout<<"*";
            j++;
        }
        cout<<endl;

        i++;
    }
    

    return 0;
}