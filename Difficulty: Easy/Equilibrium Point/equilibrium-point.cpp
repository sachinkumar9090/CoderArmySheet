class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum =0;
        int index = -1;
        for(int i=0;i<arr.size();i++){
              sum +=arr[i];
        } 
        int prefixsum =0;
        for(int i=0;i<arr.size();i++){
              if(prefixsum == sum-prefixsum-arr[i]){
                  return i;
                  break;
              }
              prefixsum +=arr[i];
           
            }
        return index;
        
    }
};