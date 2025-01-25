#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, N;
    cin >> H >> N;

    vector<string> grid(H);
    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
    }

    int min_row = H, max_row = 0, min_col = N, max_col = 0;

    // For Black Cells
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == '#')
            {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }

    // Check if all cells inside the rectangle are '#' or '?'
    for (int i = min_row; i <= max_row; i++)
    {
        for (int j = min_col; j <= max_col; j++)
        {
            if (grid[i][j] != '#' && grid[i][j] != '?')
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    // Check if cells outside the rectangle are not '#'
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i < min_row || i > max_row || j < min_col || j > max_col) && grid[i][j] == '#')
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    // If all checks pass
    cout << "Yes" << endl;
    return 0;
}
