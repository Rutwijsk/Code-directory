#include<bits/stdc++.h>
using namespace std;

void fact(int n)
{
    for(int i =  1;i<n;i++)
    {
        if(n%i == 0)
        {
            cout<<"the number is not prime";
            return;
        }
    }
    cout<<"its a prime";
}

int main()
{
    int n = 23;
    cout<<fact(n);
    return 0;
}