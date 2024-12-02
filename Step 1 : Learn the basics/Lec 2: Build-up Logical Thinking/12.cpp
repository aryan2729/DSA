#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 12

void print12( int n ){

            int space = 2*(n-1) ; 
        for (int i = 1; i <= n ; i++){

            for (int j = 1; j <= i ; j++){ // numbers

                cout<<j;
            }

            for ( int j = 1 ; j <= space ; j++){   // space 

                cout<<" ";
            }

            for ( int j = i; j>= 1 ; j--){  // numbers  sign >= and j-- cuz opp mirror 

                cout<<j; 

            }

            cout<<endl;
            space -= 2; 
        }
}


int main (){

    int t;
    cout<<"Write how much input u wanna given "<<endl;
    cin>> t;
    for (int i = 0; i <t ; i++){
        int n ;
        cin>>n;
        print12(n);
    }


    return 0;
}