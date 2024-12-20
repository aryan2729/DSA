//Lecture 2 
#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Namaste Dunia"<<endl;

    // Data types & variables 

    int a = 123;
    char b = 'v';
    bool bl = true;
    float f = 1.2;
    double d = 1.23;
    cout<<a<<b<<bl<<f<<d<<endl;

    // Size check in bytes
    int size = sizeof(f);
    cout<<"Size of float f is "<<size<<endl;
    
    // Typecasting 
    int e = 'a';
    cout<<e<<endl;

    char n =98;
    cout<<n<<endl;

    // Operators 

    int aa = 2/5;
    cout<<aa<<endl; // int / int ~ nearest int not float 

    float floatbyint = 20.5/5;
    cout<<floatbyint<<endl;

    int a1 = 2; 
    int b1 = 4;

    bool first = (a1 == b1); // print true if correct 

    cout<<"Is a1 is equal to b1 "<<first<<endl;
    cout<<"IS a1 not equal to b1 give 1 if correct else 0 ---> "<<(a1!=b1)<<endl;

    // logical operators  && -> both shoud be true , || -> either this or either other , ! -> doesn't 
    
 
    return 0;
}