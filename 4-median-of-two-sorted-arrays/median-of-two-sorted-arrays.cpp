class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merged_arr;
        int n =nums1.size();
        int m =nums2.size();
        for(int i=0;i<n ;i++){
            merged_arr.push_back(nums1[i]);
        }
         for(int i=0;i<m ;i++){
             merged_arr.push_back(nums2[i]);
            
         }
         sort(merged_arr.begin() , merged_arr.end());
         int total=merged_arr.size();
         if(total%2==1){
            return static_cast<double>(merged_arr[total/2] );
         }
         else{
            int middle1=merged_arr[total/2];
            int middle2=merged_arr[total/2-1];
            return (static_cast<double>(middle1) +static_cast<double>(middle2))/2.0;
         }
        
    }
};