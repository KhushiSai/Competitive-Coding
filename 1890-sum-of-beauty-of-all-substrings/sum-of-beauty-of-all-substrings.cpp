class Solution {
public:

int solve(string &s){
  int sum = 0;
  int n = s.size();
  for(int i=0;i<n;i++){
    map<char, int>mp;
    for(int j=i;j<n;j++){
        mp[s[j]]++;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(auto x: mp){
            maxi = max(maxi, x.second);
            mini = min(mini, x.second);
        }
        sum += maxi - mini;
    }
  }
  return sum;
}

    int beautySum(string s) {
        return solve(s);
    }
};