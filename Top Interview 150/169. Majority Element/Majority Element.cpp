class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        int k;
        for( auto value : nums)
        {
            hashmap[value]++;
        }

        for( auto it = hashmap.begin(); it != hashmap.end(); ++it)
        {
            if(it->second > nums.size()/2)
            {
                k = it->first;
                break;
            }
        }

        return k;
    }
};