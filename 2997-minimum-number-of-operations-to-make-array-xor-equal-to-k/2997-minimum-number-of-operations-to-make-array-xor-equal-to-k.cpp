class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
       int result {0};
       int min {0};
       int count {0};
       for(int i=0;i<nums.size();i++)
        {
            result^=nums[i];
        }
        
        min=result^k;
        
        while(min>0)
        {
          count+=min&1;
          min=min>>1;
        }
        return count;
    }
};