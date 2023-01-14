class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool flag = false;
        int max = nums[0];
        unordered_set<int> s;
        for(int i = 0;i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        if(s.size() < 3)
        return false;
        for(int i = 0;i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[j] <= nums[i])
                continue;
                for(int k = j+1; k < nums.size(); k++) {
                    if(nums[k] <= nums[j])
                    continue;
                    else{
                        return true;
                    }
                }
                
            }
            
        }
        return false;
    }
};
