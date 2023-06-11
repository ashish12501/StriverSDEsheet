#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for (int i = 0; i < m+n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] > arr2[j] && arr1[i] != 0)
            {
                swap(arr1[i], arr2[j]);
            }
            else if (arr1[i] == 0)
            {
                swap(arr1[i], arr2[j]);
            }
        }

    }
  return arr1;

}