#include <iostream>
#include <vector>

using namespace std;

void solve(string &sequence)
{
    int maxRepetition = 1;
    int currentRepetition = 1;

    for (size_t i = 1; i < sequence.length(); ++i)
    {
        if (sequence[i] == sequence[i - 1])
        {
            currentRepetition++;
        }
        else
        {
            maxRepetition = max(maxRepetition, currentRepetition);
            currentRepetition = 1;
        }
    }

    maxRepetition = max(maxRepetition, currentRepetition);
    cout << maxRepetition;
}

int main()
{
    string seq;
    cin >> seq;
    solve(seq);
}