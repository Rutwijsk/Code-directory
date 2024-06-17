#include<bits/stdc++.h>
using namespace std;

void check(string s)
{
    int len = s.length();
    for(int i = 0;i<=len;i++)
    {
        if(s[i] != s[len-i-1])
        {
            cout<<"string "<< s<< "is not a palindrome";
            return;
        }
    }
    cout<<"string "<<s << "is a palindrome";
}

int main()
{
    string str = "KAYAK";
    string str2 = "kkappa";
    check(str);
    check(str2);
    return 0;
}