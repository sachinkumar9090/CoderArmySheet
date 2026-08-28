class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        
        if(k>arr.size())
        return -1;
        int start =0;
         long end = 0;
        for(int i=0;i<arr.size();i++){
            start = max(start,arr[i]);
            end +=arr[i];
        }
        long ans = 0;
        while(start<=end){
            long mid = start +(end-start)/2;
            long page = 0,count =1;
            for(int i=0;i<arr.size();i++){
                page+= arr[i];
                if(page>mid){
                    page = arr[i];
                    count++;
                }
            }
            if(count<=k){
                ans = mid;
                end = mid-1;
            }else {
                start = mid+1;
            }
        }
        return ans;
    }
};