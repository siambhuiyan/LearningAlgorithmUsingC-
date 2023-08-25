#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0;
        int sr = 0, er = m - 1, sc = 0, ec = n - 1;

        while (sc <= ec && sr <= er)
        {
            for (int i = 0; i <= ec; i++)
            {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if (count == m * n)
                return ans;
            for (int i = 0; i <= er; i++)
            {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if (count == m * n)
                return ans;
            for (int i = ec; i >= sc; i--)
            {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if (count == m * n)
                return ans;

            for (int i = er; i >= sr; i--)
            {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            if (count == m * n)
                return ans;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    vector<int> ans = s.spiralOrder(v);
    int size = ans.size();
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}