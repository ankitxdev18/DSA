# Square Star Pattern

## Problem

Given a positive integer `n`, print an `n`-by-`n` square made of stars. Put one space between stars on the same row.

## Input

A single integer `n`.

## Example

Input:

```text
3
```

Output:

```text
* * *
* * *
* * *
```

## How the pattern works

- The square has `n` rows.
- Every row has `n` stars.
- Each row is identical, so the same inner-loop rule works for every row.

For `n = 3`:

| Row | Stars |
|---:|---:|
| 1 | 3 |
| 2 | 3 |
| 3 | 3 |

## Approach

1. Read `n`.
2. Call `printSquare(n)`.
3. Use the outer loop to repeat once for each row.
4. For each row, use the inner loop to print `n` stars.
5. Print a space after each star except the last one, so there is no trailing space at the end of the row.
6. Print a newline after each row.

## Code walkthrough

The complete implementation is in [`square-pattern.cpp`](./square-pattern.cpp).

```cpp
#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)       // Select each row
    {
        for (int j = 1; j <= n; j++)   // Print n stars in this row
        {
            cout << '*';
            if (j < n)                 // Add spaces only between stars
            {
                cout << ' ';
            }
        }
        cout << '\n';                  // Move to the next row
    }
}

int main()
{
    int n;
    cin >> n;                          // Read the square's size
    printSquare(n);
}
```

### Why are there two loops?

- `i` counts the rows. It runs from `1` through `n`, so the pattern has `n` rows.
- `j` counts the stars in the current row. It also runs from `1` through `n`, so every row has `n` stars.
- The condition `j < n` prints separators only between stars, not after the last star.
- `'\n'` ends the current row after all its stars have been printed.

## Complexity

- **Time:** `O(n²)`, because the program prints `n × n` stars.
- **Extra space:** `O(1)`, because it uses only a fixed number of variables.

## Key pattern rule

For a square pattern, both the number of rows and the number of symbols in each row are `n`.