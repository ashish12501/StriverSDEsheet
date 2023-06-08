vector<int> rowGen(int row)
{
    long long int ans = 1;
    vector<int> Ansrow;
    Ansrow.push_back(1);
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        Ansrow.push_back(ans);
    }
    return Ansrow;
}

vector<vector<int>> pascalTriangle(int N)
{
    // Write your code here.
    vector<vector<int>> ans;
    for (int i = 1; i <= N; i++)
    {
        vector<int> temp;
        temp = rowGen(i);
        ans.push_back(temp);
    }
    return ans;
}

// Code for testing.
// int main()
// {
//     int n;
//     cin >> n;
//     pascalTriangle(n);
//     return 0;
// }