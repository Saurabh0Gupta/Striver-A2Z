
#include <iostream>
#include <vector>

using namespace std;
void duplicateNum(int *arr, int n)
{
    unordered_set<int> ans;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1)
        {
            if (ans.size() == 0 || ans.back() != arr[i])
            {
                ans.push_back(arr[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 5, 3, 2, 2, 1};
    duplicateNum(arr, 7);
    return 0;
}