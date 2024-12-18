#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 11

void print11(int n ){


        int start = 1;   // starter point 
        for ( int i = 0 ; i < n; i++ ){

            if ( i % 2 == 0 ) start = 1;  // i%2 == 0 mean even 
            else start = 0;  

            for(int j = 0 ; j <=i ; j++){
                cout<<start;
                start = 1- start; 
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
        print11(n);
    }


    return 0;
}