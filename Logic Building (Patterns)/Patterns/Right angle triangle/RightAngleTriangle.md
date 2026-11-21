# Right-Angled Star Triangle

## Problem

Given a positive integer `n`, print a left-aligned, right-angled triangle with `n` rows. Row 1 has one star, row 2 has two stars, and each following row has one more star than the previous row. Put one space between stars on the same row.

## Input

A single integer `n`, the number of rows.

## Example

Input:

```text
4
```

Output:

```text
*
* *
* * *
* * * *
```

## Understand the pattern

The number of stars in a row matches its row number:

| Row `i` | Number of stars |
|---:|---:|
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |
| 4 | 4 |

So, row `i` contains `i` stars.

## Approach

1. Read `n`.
2. Use an outer loop to visit rows `1` through `n`.
3. For row `i`, use an inner loop to print stars for columns `1` through `i`.
4. Print a space between stars, but not after the last star in the row.
5. Print a newline after completing each row.

## Code walkthrough

The complete implementation is in [`RightAngleTriangle.cpp`](./RightAngleTriangle.cpp).

```cpp
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
```

### Why does the inner loop use `j <= i`?

The outer-loop variable `i` is the current row number. Since row `i` must contain `i` stars, the inner loop runs exactly `i` times. For example, on row 3, it prints 3 stars.

The condition `j < i` adds a space after a star only when another star follows it. This avoids trailing spaces at the ends of rows.

## Complexity

- **Time:** `O(n²)`, because the program prints `1 + 2 + ... + n` stars.
- **Extra space:** `O(1)`, because it uses only a fixed number of variables.

## Key pattern rule

For this triangle, the number of stars in row `i` is `i`.
