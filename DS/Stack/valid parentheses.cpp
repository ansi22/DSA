class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> a;
        for (auto x : s)
        {
            if (x == '(' || x == '{' || x == '[')
                a.push(x);
            else if (x == ')' || x == '}' || x == ']')
            {
                if (a.empty())
                    return 0;
                else
                {
                    char tempo = a.top();
                    a.pop();
                    if ((tempo == '(' && x == ')') || (tempo == '{' && x == '}') || (tempo == '[' && x == ']'))
                        continue;
                    else
                        return 0;
                }
            }
        }
        return a.empty();
    }
};
