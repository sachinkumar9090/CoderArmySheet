class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int count = 0;
        for(int i=0;i<arr.size()-2;i++){
            int j = i+1;
            int k = arr.size()-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]<sum){
                    count += k-j;
                    j++;
                }else {
                    k--;
                }
            }
        }
        return count;
    }
};