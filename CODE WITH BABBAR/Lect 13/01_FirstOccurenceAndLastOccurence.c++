#include<bits/stdc++.h>
using namespace std;


int firstOccurence(int arr[] , int n , int key){

    int start = 0 , end = n-1;
    int mid = start + (end - start)/2;          //🍁🍁 y not (start + end)/2 cuz if we taken start and end both to max value of int then divide by 2 then it's not in int range then mid varibable can't store that | that's y we used this = start + (end - start)/2 = start + end/2 - start/2 = start/2 + end/2 = (start + end)/2; 
    int ans = -1;

    while(start <= end){
        
        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;                 //🍁 cuz first occurence -> left side of mid 
        }

        else if(key > arr[mid]){// Right side jao 
            start = mid + 1;
        }

        else{           // key < arr[mid]  left side jao 
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[] , int n , int key){

    int start = 0 , end = n-1;
    int mid = start + (end - start)/2;          //🍁🍁 y not (start + end)/2 cuz if we taken start and end both to max value of int then divide by 2 then it's not in int range then mid varibable can't store that | that's y we used this = start + (end - start)/2 = start + end/2 - start/2 = start/2 + end/2 = (start + end)/2; 
    int ans = -1;

    while(start <= end){
        
        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;                 //🍁 cuz last occurence -> Right side of mid 
        }

        else if(key > arr[mid]){// Right side jao 
            start = mid + 1;
        }

        else{           // key < arr[mid]  left side jao 
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}



int main(){

    int even[10] = { 1, 2, 3 , 3, 3 , 3 , 3 , 4 , 5 , 6 };

    cout<<"First occurence of 3 is at index "<< firstOccurence(even , 10 , 3)<<endl;      // even array , 10 size , 3-key jo find 
    cout<<"last  occurence of 3 is at index "<< lastOccurence(even , 10 , 3)<<endl;
    

    return 0;
}