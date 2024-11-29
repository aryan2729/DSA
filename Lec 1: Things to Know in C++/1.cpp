#include<iostream>
using namespace std;

int main(){

    cout<<"\nWrite two numbers"<<endl;
    int x , y;
    cin>> x >> y ;
    cout<< "Value of x : "<< x << " and y : "<<y<< endl; 

    // Long
    long z = 10;

    // float , double 
    float i = 4.5;
    double p = 6;
    cout<<i<<p<<endl ;
    cout<<"write two strings"<<endl;



    // string , long
    
    string s1 ;
    string s2 ;
    cin >> s1 >> s2 ;
    cout<< s1 << s2 <<endl ;

    // If-else
    cout<<"write your age:"<<endl;
    int age;
    cin>> age;
    if(age>= 18){
        cout<<"You're an adult!";
    }
    else{
        cout<<"You're not an adult!"<<endl;
    }

    // if_else if_else
    cout<<"\nWrite your marks:"<<endl;
    int marks;
    cin>> marks;

    if (marks < 33){
        cout<<"F";
    }
    else if ( marks >= 33 && marks<44){
        cout<<"E";
    }
    else if (marks >=44 && marks<70){
        cout<<"B";
    }
    else{
        cout<<"A";
    }

    // nested if else 
    int agee;
    cout<<"\nEnter your age for job"<<endl;
    cin>>agee;

    if (agee <18 ){
        cout<<"You're not eligible for job"<<endl;
    }
    else if(agee <= 57 ){
        cout<<"You're eligible for job"<<endl;
        if(agee>=54){
            cout<<" , But retirement soon "<<endl;
        }
    }
    else {
        cout<<"Retirement time"<<endl;
    }


    // Switch 
    /* Qsn
    Take the day no and print the corresponding day for 1 print monday , for 2 print tuesday .
    */
    cout<<"Write 1-7 for days"<<endl;
    int day;
    cin>>day;

    switch (day) {
    case 1:
        cout<< "Monday";
        break;
    case 2:
        cout<< "Tuesday";
        break;
    case 3:
        cout<< "Wednesday";
        break;
    case 4:
        cout<< "Thursday";
        break;
    case 5:
        cout<< "Friday";
        break;
    case 6:
        cout<< "Saturday";
        break;
    case 7:
        cout<< "Sunday";
        break;
    default:
        cout<<"Invalide enter no. from 1-7 only!";
        break ;
    }
    cout<<"\nArray write 4 numbers "<<endl;

    // 1-D Array
    
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    cout<<arr[3]<<"\n 2D array started \n";
    arr[2] = 0;

    // 2-D Array
    
    int arr2[3][5];  // means 3 Rows and 5 store
    
    arr2[1][2] = 56;
    cout<<arr2[1][2]<<endl;

    // String 

    string s = "Aryan" ;
    int len = s.size();
    cout<< s[len -1 ] <<endl; // This will tell last alpabet of string


    // For loops 
    for (int i = 1; i <=5 ; i++){
        cout<< "Striver" <<endl;
    }
    
    // While loop
    int e = 1;
    while (e <=5){
        cout<<"While loop"<<e<<endl;
        e = e+1;
    }

    // Do while 
    int q = 1;

    do
    {   
        cout<<"Do-while"<<q<<endl;
        q = q + 1;
    } while (q<=5);


   

    
    return 0;
}