#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin >> str;

    char num1 = str[0];
    char num2 = str[2];
    int strNum1 = stoi(string(1, num1));
    int strNum2 = stoi(string(1, num2));
    cout << strNum1 * strNum2 << endl;
}