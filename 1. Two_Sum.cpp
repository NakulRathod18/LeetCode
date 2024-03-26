/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.
begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
*/


class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> m;
        int num = nums.size();
        for(int i=0;i<num;i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
