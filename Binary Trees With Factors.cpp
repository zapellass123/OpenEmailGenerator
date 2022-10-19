class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        map<int, long long int> m;
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            m.insert({arr[i], 1});
        }
        
        for(int i=1; i<arr.size(); i++){
            auto it3 = m.find(arr[i]);
            long long int count = 0;
            for(int j=0; j<i; j++){
                if(arr[i]%arr[j]==0)
                {
                    auto it = m.find(arr[i]/arr[j]);
                    auto it2 = m.find(arr[j]);
                    if(it!=m.end()) //if it present in the map
                    {
                        count += (it->second)*(it2->second); // numbers of ways
                    }
                }
            }
            it3->second += count; 
        }
        
        long long int sum = 0;
        for(auto it4 = m.begin(); it4!=m.end(); it4++){
            sum += it4->second; 
        }
        
        return sum%(1000000007);
    }
};
