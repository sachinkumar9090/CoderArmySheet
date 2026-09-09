class Solution {
  public:
    void arrange(vector<int>& arr) {
        //  code here
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=arr[arr[i]];
        }
        
        for(int i=0;i<ans.size();i++){
            arr[i] = ans[i];
        }
    }
};