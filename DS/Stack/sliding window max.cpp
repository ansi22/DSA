class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        //         pair<int,int> contains nums[i],index
        //         store elements in the deque only inside our current window
        //         remove front element if it goes of window size
        //         maintain elements in descending order
        //         push current node
        //         include maximum of current window
        deque<pair<int, int>> dq;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!dq.empty() && dq.front().second <= (i - k))
                dq.pop_front();
            while (!dq.empty() && dq.back().first < nums[i])
                dq.pop_back();
            dq.push_back(make_pair(nums[i], i));
            if (i >= (k - 1))
                ans.push_back(dq.front().first);
        }
        return ans;
    }
};
