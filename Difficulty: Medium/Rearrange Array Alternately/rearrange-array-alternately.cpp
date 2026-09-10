class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        
        sort(arr.begin(),arr.end());
        queue<int> q1;
        vector<int> ans;
        int start =0,end = arr.size()-1;
        
        while(start<=end){
            q1.push(arr[end]);
            end--;
            q1.push(arr[start]);
            start++;
        }
        
        while(!q1.empty()){
            ans.push_back(q1.front());
            q1.pop();
        }
        for(int i=0;i<ans.size();i++){
            arr[i] = ans[i];
        }
        
        
    }
};