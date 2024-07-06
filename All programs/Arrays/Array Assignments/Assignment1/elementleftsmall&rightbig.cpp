#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> &v, int num, int index)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i == index)
            continue;
        if (i < index)
        {
            if (v[i] >= num)
            {
                return false;
            }
        }
        else
        {
            if (v[i] <= num)
                return 0;
        }
    }
    return true;
}

int main()
{
    vector<int> v = {1, 6, 5, 7, 10, 8, 9};
    bool ans = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        ans = helper(v, v[i], i);
        // cout << ans << " ";
        if (ans)
        {
            cout << v[i] << endl;
            break;
        }
        if (ans == 0)
            cout << "-1" << endl;
    }

    return 0;
}