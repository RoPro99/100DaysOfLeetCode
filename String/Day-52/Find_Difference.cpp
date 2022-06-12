#include <bits/stdc++.h> 
using namespace std; 
      char findTheDifference(string s, string t) {
        int count[26] = {0};
        for(int i=0;i<s.length();i++) count[s[i]-'a']++;
        for(int i=0;i<t.length();i++) count[t[i]-'a']--;
        for(int i=0;i<26;i++) if(count[i] !=0) return (char)(i+'a');
        return 'a';
    }
int main() 
{ 
 string s="abcd",t="abcde";
 char ans=findTheDifference(s,t);
 cout<<ans<<endl;
 return 0;
}
