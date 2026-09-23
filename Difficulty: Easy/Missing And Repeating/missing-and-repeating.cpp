class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
    //     vector<int> count(arr.size(),0),ans;
    //     for(int i=0;i<arr.size();i++){
    //         count[arr[i]-1]++;
    //     }
    //     for(int i=0;i<count.size();i++){
    //         if(count[i]==2){
    //             ans.push_back(i+1);
    //         }
    //     }
    //     for(int i=0;i<count.size();i++){
    //         if(count[i]==0){
    //             ans.push_back(i+1);
    //         }
    //     }
        
    //     return ans;
    // }
    
    vector<int> ans(2);
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            ans[0] = i+1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            ans[1]= i+1;
        }
    }
    return ans;
    }
};