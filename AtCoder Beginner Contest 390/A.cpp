#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr)
{
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<int> A(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    if (isSorted(A))
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < 4; i++)
    {

        swap(A[i], A[i + 1]);

        if (isSorted(A))
        {
            cout << "Yes" << endl;
            return 0;
        }

        swap(A[i], A[i + 1]);
    }

    cout << "No" << endl;
    return 0;
}