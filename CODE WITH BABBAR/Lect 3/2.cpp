// LECTURE 3 
#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter value of a"<<endl;
    int a ;
    cin >> a;

    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else{
        cout<<"A is negative"<<endl;
    }


    int b,c ;

    cout<<"Enter the value of b "<<endl;
    cin>>b;
    cout<<"Enter the value of c "<<endl;
    cin>>c;

    if(b>c){
        cout<<"B is greater "<<endl;
    }
    else if (b<c)
    {
       cout<<"C is greater "<<endl;
    }
    else{
        cout<<"Both equal \n";
    }




    // Check for Print 1-N
    cout<<"Enter value of n if u want to print 1-N"<<endl;
    int n;
    cin>>n;

    int i =1 ;
    while(i <= n){
        cout<<i<<" ";
        i +=1;
    }

    // Check for sum of 1-P 
    cout<<"\n Enter the value of p if u want to print sum from 1 till p "<<endl;
    int p ;
    cin>>p;

    int sum = 0;
    int y = 1;
    while(y<= p){
        sum = sum + y;
        y += 1;
    }
    cout<<"The sum of 1-P no. is "<<sum<<endl;
    cout<<"Enter the value of m so that we can find is it prime or not \n";


    // check for Prime or not 
    int m;
    cin>>m;

    int q = 2;

    while ( q < m ){        // checking if no. 1,2,3,4,5 so <n except <=n
        // Divide hog prime , not prime 
        if(m%q == 0){
            cout<<"Not prime for "<< q <<endl;
        }
        else{
            cout<<"Prime for"<< q <<endl;
        }
        q += 1;
    }
     


    













    return 0;
}