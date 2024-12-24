#include<bits/stdc++.h>
using namespace std;

int main(){

    // fibonacci series print 
    // 0 , 1 , 1 ,2 , 3 , 5, 8 , 13, 21 , 34

    int n ;
    cout<<"Write the number that you want to print fibonacci series : \n";
    cin>>n;

    int a = 0 ;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b ;
        cout<<nextNumber<<" ";

        a = b ;             // so now a = b and b = sum of a + b which is next number 
        b = nextNumber ;
    }


    return 0;
}   