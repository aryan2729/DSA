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

int main (){

    cout<<"Write n value for sum of N no.s"<<endl;
    int n ;
    cin>>n;

    cout<<(sum(n)) ;            // findng Sum of n no.s





    return 0;
}