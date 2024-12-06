class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n =nums.size();
        vector<int>output(n , 0);
        int product =1;
        int zero_count=0;
       
        
        for(int i=0;i<n ;i++){
            if(nums[i]==0){
                zero_count++;
            }
            else{
                 product=product*nums[i];

            }
           
        }
         if(zero_count>1){
            return output;
         }
         if (zero_count == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    output[i] = product; // Only the element corresponding to the zero gets the product
                }
            }
            return output;
        }
         
        for(int i=0;i<n; i++){
            output[i]=product/nums[i];
        }
        return output;
        
    }
};