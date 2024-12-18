#include<bits/stdc++.h>

using namespace std;

/*🔥(M.I.) Recursion -> When a function call itself until 
 a specific condition met. */

// Most of part like printing N things , N-1 , 1 -N covered in notes (copy)


//🚀 Sum of first N no.s 
int  sum(int n){            //func

    if(n== 0) return 0;

    return n + sum(n-1) ;
}


// For factorial of N no.s 

int fact( int B){
    if(B==0) return 1;

    return B * fact(B-1) ;
}

//🚀 Reverse an array(2nd way best)
void reverseArr2(int i , int arr[] , int m ){

    if( i >= m/2) return ;

    swap(arr[i], arr[m-i-1]); 

    reverseArr2(i+1,arr,m);
}


// 🚀 How to check palindrome - 11011 or HellolleH

bool checkP( int i , string &s){

    if ( i>= s.size()/2 ) return true;

    if(s[i] != s[s.size() - i - 1]) return false ;

    return checkP(i +1 , s);
}

// 🚀 Fibonacci series (M.I.)🔥

    int fib(int w){
        
        if( w <= 1) return w ;

        int last = fib(w-1);
        int secondLast = fib(w-2);

        return last + secondLast;
    }



int main (){
    // for n terms using Recursion 
    cout<<"Write n value for sum of N no.s"<<endl;
    int n ;
    cin>>n;

    cout<<(sum(n)) ;            //  findng Sum of n no.s



    // for reverse an array using Recursion 
    cout<<"\nWrite first how much array u want and after that fill arrays by your input "<<endl;
        int m;
        cin >> m ;        
        int arr[m];
        for(int i = 0; i<m ; i++) cin>> arr[i];   // input array that u want to reverse 

        reverseArr2(0,arr,m);

        for(int i = 0 ; i< m ; i++) cout<<arr[i]<<" ";  // printing swaped array or reverse array 


    // for check Palindrome using Recursion 
    cout<<"\nWrite input for check palindrome "<<endl ; 

    string s;
    cin >> s ;

    cout<<checkP(0 , s);


// For fibonacci 
    int w ;
    cout<<"Write no. for fibonacci\n";
    cin >> w;
    
    cout<<(fib(w));

    return 0;
}