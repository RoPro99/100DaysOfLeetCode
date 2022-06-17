#include <bits/stdc++.h>
using namespace std;
string S , T;
bool checkSubsequence(int i , int j)
{
    if(i == -1)
        return true;
    if(j == -1)
        return false;
    if(S[i] == T[j])
        return checkSubsequence(i - 1 , j - 1);
    return checkSubsequence(i , j - 1);
}
bool isSubsequence(string s, string t)
{
    S = s , T = t;
    return checkSubsequence((int)s.size() - 1 , (int)t.size() - 1);
}
int main()
{
    string s = "abc";
    string t = "mnagbcd";
    cout << (isSubsequence(s , t) ? "true" : "false") << '\n';
    return 0;
}
