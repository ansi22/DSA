class Solution
{
public:
    int findFinalValue(vector<int> &nums, int o)
    {
        int n = nums.size();
        map<int, int> mp;
        for (auto x : nums)
            mp[x]++;
        while (1)
        {
            if (mp[o])
                o *= 2;
            else
                break;
        }
        return o;
    }
};