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




    return 0;
}