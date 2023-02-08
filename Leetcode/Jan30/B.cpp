class Solution
{
public:
    vector<int> maxScoreIndices(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mp;
        vector<int> ans;
        int a[n + 1];
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                z++;
            if (nums[i] == 1)
                o++;
        }
        a[0] = o;
        z = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                z++;
                a[i + 1] = o + z;
            }
            else if (nums[i] == 1)
            {
                o--;
                a[i + 1] = o + z;
            }
        }
        int maxi = INT_MIN;
        for (int i = 0; i <= n; i++)
        {
            maxi = max(maxi, a[i]);
            // cout<<i<<" "<<mp[i]<<"\n";
        }
        for (int i = 0; i <= n; i++)
            if (a[i] == maxi)
                ans.push_back(i);
        return ans;
    }
};