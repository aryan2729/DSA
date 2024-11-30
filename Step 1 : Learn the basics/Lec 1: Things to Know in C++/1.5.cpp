#include<iostream>
using namespace std; 
 
 
 
//Functions -🔥 before (main )
    /* Functions are used to use same code multiple times 
       1.void -> which does not returns anything 
       2.return -> e.g. int bike(){}   or  int bike(int num){}
       3.parameterised -> e.g.  void bike( int name){}
       4.non parameterised -> e.g. void bike(){} 
    */

   void printName(){
    cout<<"Hey striver!"<<endl;
   }

   int sum( int num1 , int num2){  // Return function + parameterised 
        int num3 = num1 + num2 ;
        return num3;
   }


    // Pass by value -> in thisthe copy  and it don't change actuall one 
    void doSomething( string s){  
        s[0] ='t';
        cout<< s << endl;
    }


    // Pass by reference (&)  -> It's changed the actuall value 
    void doSome( string & m){  
        m[0] ='d'; 
        cout<< m << endl;
    }


int main (){

    printName();  // fun calling
    cout<<sum(3,4)<<endl; 

    // Pass by value - function call 
    string s = "raj";
    doSomething(s);
    cout<< s <<endl; // pass by value can't able to change string s 

    // Pass by reference - function call 
    string m = "Moon";
    doSome(m);
    cout<< m <<endl; // pass by reference changed the actuall m string to doon


    // Use array and loop -> it's help us so we not need to  write arr[0]= 2; arr[1] = 3; this 
    
    int arr[5];
    for ( int i = 0; i<=4; i++){
        cout<<i<<endl;
        cin >> arr[i];
    }


    return 0;
}