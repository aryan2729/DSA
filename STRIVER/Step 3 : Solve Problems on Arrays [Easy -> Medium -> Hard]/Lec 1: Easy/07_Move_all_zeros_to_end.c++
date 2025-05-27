#include<bits/stdc++.h>
using namespace std;

// Brute Force approach 
void moveAllZerosEnd(vector<int> &arr  ){

    int arrSize = arr.size();

    vector<int> temp;

    for ( int i = 0 ; i< arrSize ; i++){            // first store all non zero elements in temp array 
        
        if(arr[i]!= 0 ){
            temp.push_back(arr[i]);
        }
    }

    int tempSize = temp.size();

    for ( int i = 0 ; i<tempSize; i++){            // now store temp elements in line wise in original array till size of temp array
        
        arr[i] = temp[i];
    }

    for(int i = tempSize; i<arrSize ; i++){        // remaining elements set 0

        arr[i]=0; 
    }
        
}


// Optimal approach 
void moveAllZeroslast(vector <int> & arr ){

    int j = -1;
    int size = arr.size();

    for(int i = 0;i<size; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }




    for(int i = j+1 ; i<size; i++){

        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}




int main(){

    //Brute force approach 
    int n ;

    cin>> n;
    vector<int> arr(n);

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    

    moveAllZerosEnd(arr );

    
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //Optimal approach 
     int m ;

    cin>> m;
    vector<int> arr1(m);

    for(int i = 0 ; i<m ; i++){
        cin>>arr1[i];
    }

    moveAllZeroslast(arr1 );

    for(int i = 0 ; i<m ; i++){
        cout<<arr1[i]<<" ";
    }

    



    return 0;
}