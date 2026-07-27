class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int count0 =0;
        int count1 =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                count0++;
            }else{ 
            count1++;
        }
        }
        for(int i=0;i<count0;i++){
            arr[i] = 0;
        }
        for(int i=count0;i<arr.size();i++){
            arr[i]=1;
        }
    }
};