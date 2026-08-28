class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin(),arr.end());
        int start = 0,end, ans = 0;
        end = arr[arr.size()-1]-arr[0];
        while(start<=end){
            int mid = start + (end-start)/2;
            int count = 1 , pos = arr[0];
            for(int i=0;i<arr.size();i++){
                if(pos+mid<=arr[i]){
                    count++;
                    pos = arr[i];
                }
            }
            if(count<k){
                end = mid-1;
            }else {
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};