class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int count0 =0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
            }else if(arr[i] ==1){
                count1++;
            }else {
                count2++;
            }
        }
        for(int i=0;i<count0;i++){
            arr[i] =0;
        }
        int n = count0+count1;
        for(int i=count0;i<n;i++){
            arr[i] =1;
        }
        for(int i=n;i<arr.size();i++){
            arr[i]=2;
        }
    }
};