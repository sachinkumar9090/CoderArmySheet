class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        int n =arr.size();
        vector<int> alpha;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                alpha.push_back(arr[i]);
            }
        }
         for(int i=0;i<n;i++){
            if(arr[i]<0){
                alpha.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]= alpha[i];
        }
        
    }
};