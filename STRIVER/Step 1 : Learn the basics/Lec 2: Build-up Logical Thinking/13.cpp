#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 13

void print13( int n ){


        int num = 1;  // numbering increase

        for ( int i = 1; i <= n; i++ ){  // outer loop -> n 

            for ( int j = 1; j <= i ; j++){
                cout<< num << " " ; 
                num = num +1;

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
        print13(n);
    }


    return 0;
}