#include<iostream>
using namespace std;

// Pattern 5

void print5(int n ){
  
          for ( int i = 1; i <= n; i ++){

            for ( int j = 1; j <=(n-i+1); j ++){

            cout<<("* ");

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
        print5(n);
    }


// M.I🚀. -> if u're using (i =0) then take (i<n) and if u're using (i = 1) then use (i<=n )


/* 2nd approach 



for ( int i = 1; i <= n ; i ++){

    for (int j = n ; j>=i ; j -- ){
        cout<<"*";
    }
    cout<<endl;
  }


*/


    return 0;
}

