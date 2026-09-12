class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size()/2;
        unordered_map<int,int> maps;
        int index = -1;
        for(int i=0;i<arr.size();i++){
            maps[arr[i]]++;
        }
        auto maxit = max_element(maps.begin(),maps.end(),[](const auto& p1,const auto &p2){
            return p1.second<p2.second;
        }
        );
        
        auto [key,value] = *maxit;
        
        if(value>n){
            index = key;
        }
        return index;
    }
};