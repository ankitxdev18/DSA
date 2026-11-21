# Rules for Solving Pattern Problems

## Core idea

Most pattern problems can be built row by row. The outer loop usually selects a row, and one or more inner loops print that row's spaces, symbols, or values.

## A step-by-step method

1. **Count the rows.** Decide how many lines the output needs and what the outer loop represents.
2. **Study one row at a time.** For each row, count its spaces, symbols, and values.
3. **Find the relationship.** Express each count using the row number. Check whether the count increases, decreases, or stays fixed.
4. **Choose the inner loops.** Use separate loops for distinct parts of a row, such as leading spaces and stars.
5. **Print a newline after each row.** Do this after all parts of that row have been printed.
6. **Dry-run a small input.** Check the row counts and output before testing a larger input.
7. **Look for symmetry when useful.** Symmetry can reveal relationships between rows, but not every pattern is symmetric.

## Worked example: left-aligned triangle

For `n = 4`, the output is:

```text
*
**
***
****
```

| Row `i` | Number of stars |
|---:|---:|
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |
| 4 | 4 |

The rule is: row `i` contains `i` stars.

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << '*';
    }
    cout << '\n';
}
```

**Complexity:** `O(n^2)` time because the total number of stars is `1 + 2 + ... + n`; `O(1)` extra space.

## Common mistakes

- Printing the newline inside the inner loop, which breaks a row into multiple lines.
- Forgetting to print spaces before symbols in aligned patterns.
- Using the wrong row-based condition, such as `j <= n` when the count should depend on `i`.
- Trying to code the whole pattern before writing down the counts for a few rows.
