#include<bits/stdc++.h>
using namespace std;

int main(){

    // switch - 🚀In cases -> only take (int & char) not (float & stirng)

    int num = 2;

    switch (num)
    {
    case 1:
        cout<<"This is one"<<endl;
        break;
    
    case 2 : 
        cout<<"This is second"<<endl;
        break;

    default:
        cout<<"Default"<<endl;
        break;
    }


    char c= 'c';

    switch (c)
    {
    case 'c':
        cout<<"This is c"<<endl;
        break;    
    default:
        break;
    }

    
    // Mini calculator 

    int a , b;
    cout<<"Write down the value of a and b : "<<endl;
    cin>>a>>b;

    char op ;
    cout<<"Enter the experssion you want to do -> + or - or * or % or /"<<endl;
    cin>>op;

    switch( op ){

        case '+': 
            cout<<"The sum of a and b is "<<a+b<<endl;
            break;
        case '-':
            cout<<"The sub of a and b is "<<a-b<<endl;
        case '*':
            cout<<"The mul of a and b is "<<a*b<<endl;
            break;
        case '/':
            cout<<"The divid of a and b is "<<a/b<<endl;
            break;
        case '%':
            cout<<"The mod of a and b is "<<a%b<<endl;
            break;
        default:
            cout<<"You have written wrong expression "<<endl;
            break;
    }



    return 0;
}