#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << '*';
            if (j < n)
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
    printSquare(n);
}