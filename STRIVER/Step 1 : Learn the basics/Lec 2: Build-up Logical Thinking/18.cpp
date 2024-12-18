#include<iostream>
using namespace std;

// M.I🚀. -> if u're using (i=0) then take (i<n) and if u're using (i = 1) then use (i<=n )

// Pattern 18

void print18( int n ){

        
       // Outer loop for the no. of rows.
      for(int i=0;i<n;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
              cout<<ch<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
      }


}


int main (){

    int t;
    cout<<"Write how much input u wanna given "<<endl;
    cin>> t;
    for (int i = 0; i <t ; i++){
        int n ;
        cin>>n;
        print18(n);
    }


    return 0;
}