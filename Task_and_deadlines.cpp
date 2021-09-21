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
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    //cout<<v.size();
    sort(v.begin(),v.end());
    ll work=0;
    ll reward=0;
    for(ll i=0;i<n;i++)
    { 
        work+=v[i].first;
        reward+=(v[i].second-work);
    }
    cout<<reward<<endl;


return 0;
}