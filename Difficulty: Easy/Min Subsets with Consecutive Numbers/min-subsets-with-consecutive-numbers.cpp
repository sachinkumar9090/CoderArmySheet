class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int left = 0,right = 1;
        int count = 0;
        while(right<arr.size()){
            if(arr[left] + 1 == arr[right]){
                left++,right++;
            }else {
                count++;
                left++,right++;
            }
        }
        count++;
        return count;
    }
};