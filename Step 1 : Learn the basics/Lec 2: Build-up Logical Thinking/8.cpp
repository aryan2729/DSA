#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 8

void print8(int n ){

        for (int i = 0 ; i < n; i++){  

            for (int j = 0 ; j<i ; j++ ){ // for space 
                cout<<" ";
            }

            for (int j = 0 ; j<2*n - (2*i + 1); j++){

                    cout<<"*";   

            }

            for (int j = 0 ; j<i ; j++ ){ // for space 
                cout<<" ";
            }

            cout<<endl;

        }
  
}


int main (){

    int t;
    cout<<"Write how much input u wanna given "<<endl;
    cin>> t;
    for (int i = 0; i <t ; i++){
        int n ;
        cin>>n;
        print8(n);
    }


    return 0;
}