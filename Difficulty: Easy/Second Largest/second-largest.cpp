class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int larg = arr[0];
          int small = -1;
          for(int i=1;i<arr.size();i++){
            if(larg<arr[i]){
                small = larg;
                larg = arr[i];
            }else if(small  < arr[i] && arr[i] < larg){
                small = arr[i];
          }
          }
          return small;
    }
};