#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 14

void print14( int n ){

        
        for ( int i = 1; i <= n ; i++){
                char A = 'A'; 
            for ( int j = 1; j<= i ; j++){

                    cout<<A;
                    A = A + 1;
                    
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
        print14(n);
    }


    return 0;
}