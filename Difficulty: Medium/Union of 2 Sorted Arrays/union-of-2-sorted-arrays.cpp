class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        vector<int> ans;
        unordered_map<int,int> maps;
        for(int i=0;i<a.size();i++){
            maps[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            maps[b[i]]++;
        }
        
        for(auto x:maps){
            ans.push_back(x.first);
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};