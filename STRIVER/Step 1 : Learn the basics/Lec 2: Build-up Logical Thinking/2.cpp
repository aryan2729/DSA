#include<iostream>
using namespace std;

// Pattern 2 

void print2(int n ){
  
  for ( int i = 0 ; i < n; i ++ ){

    for (int j = 0 ; j <= i; j++  ){

        cout << "*";
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
        print2(n);
    }

// M.I🚀. -> if u're using (i =0) then take (i<n) and if u're using (i = 1) then use (i<=n )

    return 0;
}