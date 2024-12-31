#include<bits/stdc++.h>
using namespace std;



bool isPrime(int a ){

    for(int i = 2 ; i<a ; i++){     // 2 to less then a cuz 1 is divide by everyone and u don't divide no. itself for check primeNO

        if(a % i == 0 ){
            return 0;                   // it's means false
        }
    }
    return 1 ;                      // means true 
}


int fibonaaci ( int n ){

    int a = 0 ; 
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i <= n-3; i++)          //🍁🔥 n-3 because you have already defined 0 and 1 above and you are starting with 0 that's y | but if u wanna print whole nth number series then just change n-3 to n  
    {
        
        int nextTerm = a + b ;
        cout<<nextTerm<< " ";
        a = b; 
        b = nextTerm;
    }
    return b;
    
}

int main(){

    // Prime Number or not 
    cout<<"Write down the number for you want to check is it prime number or not "<<endl;
    int n ;
    cin>>n;

    if(isPrime(n)){        // it works if it's true means return 1
        cout<<"This number is Prime"<<endl;
    }
    else{
        cout<<"This number is not Prime"<<endl;
    }

    // Fibonacci for check nth series and also known nth number 
    cout<<"Write down the nth value for which you want the fibonacci number \n";
    int nn;
    cin>>nn;

    int a = fibonaaci(nn);
    cout<<"\nThe nth number of fibonacci series is "<<a<<endl;
   


    return 0;

}