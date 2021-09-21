#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)
    cin>>a[i];

    vector<char> v;
     
    ll i=0,j=n-1;
    ll prev=0;
    while(j>=i)
    {
        if(a[i]>prev&&a[j]>prev)
        {
            if(a[i]>a[j])
            {
                prev=a[j];
                j--;
                v.pb('R');
            }
            else
            {
                prev=a[i];
                i++;
                v.pb('L');
            }
            continue;
        }
        else if(a[i]>prev)
        {
            prev=a[i];
            i++;
            v.pb('L');
        }
        else if(a[j]>prev)
        {
            prev=a[j];
            j--;
            v.pb('R');
        }
        else 
        break;

    }
    cout<<v.size()<<endl;
    for(ll i=0;i,i<v.size();i++)
    cout<<v[i];
    cout<<endl;



return 0;
}