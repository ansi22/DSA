class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {
        long long tempo;
        tempo = num / 3;
        vector<long long> v;
        // if(num<6) return v;
        if (num % 3 != 0)
            return v;
        v.push_back(tempo - 1);
        v.push_back(tempo);
        v.push_back(tempo + 1);
        return v;
    }
};