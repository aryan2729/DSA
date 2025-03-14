// if you want to move any element by k
// like array { 1 , 3 , 4 , 6}  u need to shift by  k = 2 to all elements and make 
// this v= { 4 , 6 , 1  , 3}  
// so you need to use modulus thing 
// this -> first create temp vector you don't override same thing 
//  then ->  in i for loop ->    temp[(i+k)%v.size()] = v[i]
// & at end copy v to temp 


        //     1) Rotate arrays ( accroding to given number )

        //      void rotate(vector<int>& nums, int k) {
            
    
        //     vector<int>  temp(nums.size());      // temp vector so you don't override it to nums
            
        //     for(int i = 0 ; i< nums.size() ; i++){
        //         temp[ (i+k)% nums.size()] = nums[i];
        //     }
    
        //     // now copying  
        //      nums = temp; 

        // 2) Check if rotated and sorted array  e.g { 1 , 2 , 3 , 5 , 4 }

        //      int count = 0 ;
        //      int n = nums.size();
        //      for(int i = 1 ; i< n ; i++){
     
        //          if( nums[i-1] > nums[i] ){          // this for 5 and 4 
        //              count++;
        //          }
        //      }   
    
        //      if ( nums[n-1] > nums[0]){              // this for 4 and 1 
        //          count++;
        //      }
        //      return count<=1;    if this meet means true 1=true means not zero 





        
    