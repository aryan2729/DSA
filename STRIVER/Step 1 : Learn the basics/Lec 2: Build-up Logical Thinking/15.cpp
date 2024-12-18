#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 15

void print15( int n ){

        
        for ( int i = 0; i <n ; i++){
                char A = 'A'; 
            
            for ( char ch = 'A' ; ch <= 'A'+i ; ch++  ){

                cout<<ch<<" ";
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
        print15(n);
    }


    return 0;
}