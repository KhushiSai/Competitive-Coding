class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0 ;
        while(i<n){
            int j=i+1;
            while(j<n &&j<=i+k){
            if(nums[i]==nums[j] ){
                return true ;
        
            }
            j++;
            }
            i++;
        }

      return false;
        
    }
};