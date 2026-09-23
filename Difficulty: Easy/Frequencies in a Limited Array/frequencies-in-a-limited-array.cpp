class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> count(arr.size(),0);
        
        for(int i=0;i<arr.size();i++){
            count[arr[i]-1]++;
        }
        return count;
    }
};
