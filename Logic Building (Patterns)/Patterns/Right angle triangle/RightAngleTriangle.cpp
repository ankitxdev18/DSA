#include <bits/stdc++.h>
using namespace std;

void printRightAngleTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
            if (j < i)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    printRightAngleTriangle(n);
}