#include<bits/stdc++.h>
using namespace std;

int main(){

    // Prime or not 

    int n ;
    cout<<"Enter the value of n for which you want to check prime number or not \n";
    cin>>n;


    bool isPrime = 1;

    for(int i = 2 ; i < n; i++ ){   // have taken i = 2 cuz 1 is divide by everyone and have taken i < n cuz if u wanna check 3 k prime so u don't divide it by 3 itself 

        if ( n % i == 0) {
            isPrime= 0;
            break ;             // exit the loop
        }
    }

    if (isPrime == 0) cout<<"Not a prime number "<<endl;
    else {
        cout<<"Prime number"<<endl;}








    return 0;
}   