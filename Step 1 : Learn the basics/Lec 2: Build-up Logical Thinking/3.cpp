#include<iostream>
using namespace std;

// Pattern 3 

void print3(int n ){
  
  for (int i = 1 ; i <= n  ; i++ ){
    
    for ( int j = 1; j <= i ; j ++){
        cout<<j; 
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
        print3(n);
    }

// M.I🚀. -> if u're using (i =0) then take (i<n) and if u're using (i = 1) then use (i<=n )

    return 0;
}