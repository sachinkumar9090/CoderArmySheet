class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here
        unordered_map<int,int> maps;
        maps[0] = 1;
        
        int total = 0; int prefixsum = 0;
        for(int i=0;i<arr.size();i++){
            prefixsum+=arr[i];
            if(maps.count(prefixsum)){
                total+=maps[prefixsum];
                maps[prefixsum]++;
            }else{
                maps[prefixsum] =1;
            }
        }
        return total;
    }
};