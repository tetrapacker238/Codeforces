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
    string s, targetS = "hello";
    cin >> s;

    ll j = 0;
    for (ll i = 0; i < s.le() && j < 5; i++) {
        if (s[i] == targetS[j]) {
            j++;
        }
    }

    if (j == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0; 
} 