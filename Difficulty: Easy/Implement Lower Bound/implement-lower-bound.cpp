class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int index = arr.size();
        int start = 0,end = arr.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
             if(arr[mid]<target){
                start = mid+1;
            }else {
                end = mid-1;
                index = mid;
            }
        }
        return index;
    }
};
