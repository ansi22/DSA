class Solution
{
public:
    vector<long long> maximumEvenSplit(long long f)
    {

        vector<long long> v;
        if (f % 2 != 0)
            return v;
        long long t = 2, s = 0, x;
        x = (-1 + sqrt(1 + 4 * f)) / 2;
        for (long long i = 0; i < x; i++)
        {
            v.push_back(t);
            t += 2;
        }
        for (auto p : v)
            s += p;
        if (f == s)
            return v;
        v[x - 1] += f - s;
        return v;
    }
};