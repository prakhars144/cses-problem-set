#include <iostream>
#include <vector>

using namespace std;

void solve(long long int &totalNums, vector<long long int> &arr)
{
    long long int op = 0;
    for (int i = 1; i < totalNums; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            op += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << op;
}

int main()
{
    long long int totalNums;
    long long int currentNum;

    cin >> totalNums;

    vector<long long int> arr;

    for (int i = 0; i < totalNums; i++)
    {
        cin >> currentNum;
        arr.push_back(currentNum);
    }

    solve(totalNums, arr);
}
