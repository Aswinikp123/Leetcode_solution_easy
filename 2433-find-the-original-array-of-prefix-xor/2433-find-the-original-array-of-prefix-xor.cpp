class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int size {0};
        
        size=pref.size();
        
        vector<int> arr(size);
        arr[0]=pref[0];
        for(int i=1;i<size;i++)
        {
            arr[i]=pref[i]^pref[i-1];
        
        }
        return arr;
        
    }
};