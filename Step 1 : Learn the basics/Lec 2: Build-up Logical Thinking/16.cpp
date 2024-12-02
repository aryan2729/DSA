#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 16

void print16( int n ){

        char A = 'A'; 
        for ( int i = 1; i <= n ; i++){

            for ( int j = 1; j<= i ; j++){

                    cout<<A;
                    
            }
            cout<<endl;
            A = A + 1;
        }


}


int main (){

    int t;
    cout<<"Write how much input u wanna given "<<endl;
    cin>> t;
    for (int i = 0; i <t ; i++){
        int n ;
        cin>>n;
        print16(n);
    }


    return 0;
}