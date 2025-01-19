#include <iostream>

using namespace std;


void solve(const int& n)
{
    if (n == 2 || n == 3) 
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    for (int i = 2; i <= n; i+=2)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i+=2)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}

