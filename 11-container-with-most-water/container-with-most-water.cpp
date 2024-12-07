class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int mx=INT_MIN;
        int i=0; 
        int j=n-1;
        while(i<j){
            int area=min(height[i] , height[j])*(j-i);
            mx=max(mx ,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx;
        
    }
};