#include<bits/stdc++.h>
using namespace std;


int power(int a , int b){

    int ans =pow(a,b);               // pow(a,b) -> a^b and 1st we've to add cmath at top  for use this 

    return ans;
}

void even_odd(int a){

    if(a%2 == 0) cout<<"This number is even "<<endl;
    else{ cout<<"This number is odd"<<endl; }  
}


int factorial(int n){

    int fact = 1;
    for(int i = 1; i<= n; i++){

        fact = fact * i;
    }
    return fact ;
}

int nCr(int n , int r ){

    int numerator = factorial(n);
    int denominator = factorial(r) * factorial (n-r);

    return (numerator/denominator); 
}

int main(){

    // for finding Power ( a ^ b)
    cout<<"Write down the input for a to power of b "<<endl;
    int a , b;
    cin>>a>>b;

    int answer = power(a,b);
    cout<<"answer is "<<answer<<endl;


    // For checking Even or Odd 
    cout<<"Write number for which you want to check for even or odd\n";
    int c ;
    cin>>c;

    even_odd(c);


    // nCr = n!/r!*(n-r)!
    
    cout<<"Write down the value of n and r for nCr find"<<endl;
    int n , r;
    cin>>n>>r;

    cout<<"The value of nCr is :"<<nCr(n,r)<<endl;



    return 0;
}