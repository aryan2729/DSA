#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i =0) then take (i<n) and if u're using (i = 1) then use (i<=n )




// Pattern 1 ;  we're making function which runs for n times and so we don't need to enter number individually we can input how much we want 

void print1(int n ){

    for (int i = 0 ; i< n; i++){

        for (int j = 0 ; j < n ; j++){
            cout<<"*";
        }
        cout << endl;                   // this will change to 2nd line when 1st line complete i = 0 and j = 0,1,2,3 so now run endl and i = 1 , j = 0,1,2,3 
    }

}


int main(){

        int n ;
        cout<<"Write number u want to print this pattern for ";
        cin>>n;
        print1(n);


    return 0;
}