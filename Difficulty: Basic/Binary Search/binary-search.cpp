class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid] ==k){
                return true;
                break;
            } else if(arr[mid]<k){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return false;
    }
};