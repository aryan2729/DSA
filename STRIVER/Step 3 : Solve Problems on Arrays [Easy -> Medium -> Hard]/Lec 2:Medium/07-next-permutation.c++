#include<bits/stdc++.h>
using namespace std;

// Next Permutation :
// means if (1,2,3) given then (1,3,2) , (2,1,3) , (2,3,1) , (3,1,2) , (3,2,1) these are permutaions (like dictionary numbers )


// BRUTE FORCE approach ( T.C.-> O(N! * N) means a lot & S.C.-> O(1)) , don't need code only tell this 
// step 1: Find all possible permutations of elements present and store them.
// step 2: Linear search 
// step 3: Print the next permutation present right after it.


// BETTER APPROACH ( T.C-> O(N) & S.C-> O(1))
// ( use inbuilt stl function )

void nextPermutation(vector<int> & A){

    next_permutation(A.begin() , A.end());
}






int main(){


    

    return 0;
}