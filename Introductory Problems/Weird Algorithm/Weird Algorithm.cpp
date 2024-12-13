#include <iostream>

using namespace std;

void solve(long long int &n)
{
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}

int main()
{
    long long int n;
    cin >> n;
    solve(n);
}
