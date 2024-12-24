#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 4 ;
    int b = 6;

    cout<<" a&b "<< (a&b) <<endl;
    cout<<" a|b "<< (a|b) <<endl;
    cout<<" ~a "<< (~a) <<endl;   // ~ -> not 
    cout<<" a^b "<< (a^b) <<endl; // ^ -> represent xor 



    // i++ -> post increment and ++ i -> pre increment 
    // i-- -> post decrement and --i -> pre decrement
    
    int i = 7;
    cout<< i++ <<endl;  // print 7 but increment +1 after that 
    cout<<  ++ i <<endl;  // after above i = 8 now pre increment so i = 9 
    cout<< i-- <<endl;  // i = 9 but after print it decrement to 8 
    cout<< --i <<endl; // above i = 8 but now pre decrement to 7


// for loop 
    int n ;
    cout<<"Enter the value of n "<<endl;
    cin>> n;

    cout<<"Printing count from 1 to n "<<endl;

    for(int i = 1;i <= n ; i++){
        cout<<i<<endl;
    }



// printing sum of n numbers 

    int m ;
    cout<<"Enter the value of m"<<endl;
    cin>>m;

    int sum = 0;
    for(int i = 1; i<= m ; i++){
        sum += i ; // sum = sum + i
    }
    cout<<sum<<endl;


    
    


    return 0;
}       