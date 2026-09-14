class Solution {
  public:
    int maxTripletProduct(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int maxi = max(arr[n-1]*arr[n-2]*arr[n-3],
                          arr[0]*arr[1]*arr[n-1]);
        return maxi;
    }
};