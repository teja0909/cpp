#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    stack<int> s;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        v.push_back(-1);
        else if(s.top()>=a[i])
        v.push_back(s.top());
        else
        {
            while(s.top()<=a[i])
            s.pop();
            if(s.size()==0)
            v.push_back(-1);
            else
            v.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

}