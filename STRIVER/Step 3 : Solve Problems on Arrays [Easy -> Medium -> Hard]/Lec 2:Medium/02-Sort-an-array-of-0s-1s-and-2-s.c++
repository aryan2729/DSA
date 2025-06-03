#include<bits/stdc++.h>
using namespace std;

// Brute force approach 

// use merge sort or others sorting ( if vector defined for array use only sort(v.begin(), v.end())    )



// Better approach (find numbers of 0 , 1 ,2 then put array )

void ZeroOneTwo(vector<int> & arr ){

    int n = arr.size();

    int a=0,b=0,c=0;
    for(int i = 0 ; i< n ; i++){
        
        if(arr[i]==0) a++;
        else if(arr[i]==1) b++;
        else c++;
    }

    for(int i = 0; i< a; i++){
        arr[i] = 0;
    }
    for(int i = a ; i< a + b ; i++){
        arr[i]= 1;
    }
    for(int i = a + b ; i< n ; i++){
        arr[i]=2;
    }

}


// Optimal approach (Dutch national flag algorithm )

void ZeroOneTwo2(vector<int> & arr){

    int n = arr.size();
    int low = 0 , mid = 0 , high = n-1;

    while(mid <= high ){

        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]== 1){
            mid++;
        }
        else{   // arr[mid]== 2
            swap(arr[mid],arr[high]);
            high--;
            // no need to mid++ cuz we need to check that swaped number is 0,1,2 
        }
    }
}


int main(){

    vector<int> arr = {1,0,0,1,2,1,0,2,2,1};

    ZeroOneTwo(arr);

    for (int i = 0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<endl;



    vector<int> arr2 = {1,0,0,1,2,1,0,2,2,1};

    ZeroOneTwo2(arr2);

    for (int i = 0; i< arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }


    

    return 0;
}