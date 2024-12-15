#include<bits/stdc++.h>
using namespace std;


int main (){

    // 🚀 Character Hashing 

    cout<<"Write down the string first with repeated characters\n";
    string s ;
    cin>>s;


    // pre compute 
    int hash[26] = {0} ;    // filled 26 elements of hash with 0 

    for(int i = 0; i< s.size(); i++){
        hash[s[i] - 'a'] += 1;              // a - a = 0 , b - a = 1 | incrementing 
    }


    cout<<" how much character repeating u wanna check \n after that write which no. repating how many times u wanna check ";
   int q ;      // how many querys u wanna check 
   cin>>q;
    while ( q --){
        char charact ; 
        cin>>charact ;      // character 
        //fetch 
        cout<< hash[charact -'a']<<endl ;
    }




// Code if the string contains (both uppercase and lowercase:)

//      string s;
//      cin >> s;

//     //precompute:
//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c] << endl;
//     }

    return 0;
   
   
    }