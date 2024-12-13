#include <iostream>
#include <vector>

using namespace std;

void solve(long long int &totalNums, long long int &totalSum)
{
    long long int actualSum = (totalNums * (totalNums + 1)) / 2;
    cout << actualSum - totalSum;
}

int main()
{
    long long int totalNums;
    long long int currentNum;
    long long int totalSum = 0;

    cin >> totalNums;
    vector<long long int> arr;

    for (int i = 0; i < totalNums - 1; i++)
    {
        cin >> currentNum;
        arr.push_back(currentNum);
        totalSum += currentNum;
    }

    solve(totalNums, totalSum);
}
