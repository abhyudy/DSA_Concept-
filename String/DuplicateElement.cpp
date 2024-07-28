#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string removeDups(string str)
    {
        string ans = "";
        bool tem[26] = {false}; // Initialize the boolean array to false

        for (auto x : str)
        {
            if (!tem[x - 'a'])
            {
                ans += x;
                tem[x - 'a'] = true;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string str1 = "zvvo";
    cout << "Input: " << str1 << "\nOutput: " << sol.removeDups(str1) << endl;

    string str2 = "gfg";
    cout << "Input: " << str2 << "\nOutput: " << sol.removeDups(str2) << endl;

    return 0;
}
