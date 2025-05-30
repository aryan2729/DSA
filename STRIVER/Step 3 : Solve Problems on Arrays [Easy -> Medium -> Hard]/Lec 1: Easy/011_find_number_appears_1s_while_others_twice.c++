#include<bits/stdc++.h>
using namespace std;


// Better approach (using hashing )

int getSingleElement(vector<int> &arr) {


    int n = arr.size();


    int maxi = arr[0];

    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }


    // And hash the given array:
    vector<int> hash(maxi + 1, 0);

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }


    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }



    return -1;
}


//optimal approach (XOR)

// XOR -> 0^1 = 1 /  0^ 5=5   & 1^1 = 0 / 4^4 = 0  & 1^4^4= 1;     <----

int getSingleElement2(vector<int> &arr){
    
    int n = arr.size();

    int xorr = 0;               

    for(int i = 0 ; i<n ; i++){

        xorr = xorr ^ arr[i];
    }

    return xorr;
}


int main(){

     vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;


    int ans2 = getSingleElement2(arr);
    cout<<"The single element using xor is : "<<ans2<< endl;

    

    return 0;
}