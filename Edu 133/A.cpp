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
    
    ll t, n, res;

    cin >> t;

    rep(i, 0, t - 1) {
        cin >> n;
        if (n >= 3) {
            res = n / 3;
            if (n % 3 != 0) {
                res++;
            }
        } else if (n == 2) {
            res = 1;
        } else {
            res = 2;
        }
        cout << res << "\n";
    }

    return 0; 
} 