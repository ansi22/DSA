class Solution
{
public:
    int largestRectangleArea(vector<int> &h)
    {
        // O(N*N) solution will be to check for each bar till where it can expand
        // we can do it rather using stack in O(N), store how much it can expand in left and
        //   right and then calculate area based on it, and check for it likewise.

        stack<int> st;
        int max = 0, n = h.size();
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || h[st.top()] >= h[i]))
            {
                int height = h[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                int area = height * width;
                if (area > max)
                    max = area;
            }
            st.push(i);
        }
        return max;
    }
};
