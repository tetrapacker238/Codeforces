#include <bits/stdc++.h> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define ll long long 
#define ld long double 
#define ull unsigned long long
#define le length
#define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--)  

int main() { 
    SPEED; 
    cout.precision(8); 
    cout << fixed;

    ll n, actualValue;
    cin >> n;
    vector<ll> errors(n);

    for (ll i = 0; i < n; i++) {
        cin >> errors[i];
    }

    sort(errors.begin(), errors.end());

    while(true) {
        cin >> actualValue;
        
    }
 
    return 0; 
} 