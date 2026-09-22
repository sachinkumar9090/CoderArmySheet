class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int total = 0,prefixsum = 0;
        unordered_map<int,int> maps;
        maps[0] = 1;
        
        for(int i=0;i<arr.size();i++){
            prefixsum +=arr[i];
            if(maps.count(prefixsum-k)){
                total +=maps[prefixsum-k];
                maps[prefixsum]++;
            }else{
                maps[prefixsum]++;
            }
        }
        return total;
    }
};