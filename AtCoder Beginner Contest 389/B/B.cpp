#include<bits/stdc++.h>
using namespace std;


int main(){
    long long X;
    cin >> X;

    long long factorial = 1;
    long long N = 1;

    while (factorial < X)
    {
        N++;
        factorial *= N;
    }
    
    cout << N << endl;
}