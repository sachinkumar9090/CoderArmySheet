class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_map<int,int> maps;
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++){
            maps[arr[i]]++;
        }
        
        for(auto x : maps){
            ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};