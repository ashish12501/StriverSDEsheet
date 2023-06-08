#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<vector<int>> pascalTriangle(int N)
{
    // Write your code here.
    vector<vector<int>> v2;
    int n = N;
    for (int j = 0; j <= n; j++)
    {
        vector<int> v1;
        for (int i = 1; i <= j; i++)
        {
            v1.push_back(ncr(j - 1, i - 1));
        }
        v2.push_back(v1);
    }
    return v2;
}

Code for testing.
int main()
{
    int n;
    cin >> n;
    pascalTriangle(n);
    return 0;
}