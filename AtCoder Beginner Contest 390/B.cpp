#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bool flag = true;

    // double ratio = double(A[1]) / double(A[0]);

    for (int i = 0; i < N - 2; i++)
    {
        // if (double(A[i + 1]) / double(A[i]) != ratio)
        // {
        //     cout << "No" << endl;
        //     return 0;
        // }

        if(A[i] * A[i+2] != A[i+1] * A[i+1]){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes" << endl;  
    }else{
        cout << "No" << endl;
    }
    return 0;
}