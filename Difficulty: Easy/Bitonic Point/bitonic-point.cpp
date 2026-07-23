class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int index = arr[arr.size()-1];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>arr[i+1]){
                index = arr[i];
                break;
            }
        }
        
        return index;
    }
};