#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()
#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define plii pair<pair<ll, int>, int>
#define piii pair<pii, int>
#define viii vector<pair<pii, int>>
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define mp make_pair
#define ms(x, v) memset(x, v, sizeof x)
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;
const double pi=acos(-1);
double s[10086];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
//******************************************************************
    int n;
    cin >> n;
    vi a(n);
    for (auto & x: a) cin >> x;
    unordered_map<int, int> mp;
    for (auto x: a) mp[x]++;
    vii b;
    for (int i = 0; i < n; i++) {
        int f = 1;
        int d = -1;
        bool ok = false;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                d = abs(i - j);
                break;
            }
        }
        // cout << a[i] << " " << d << endl;
        int q;
        for (auto x: mp) {
            if (x.first == a[i]) {
                q = x.second;
                break;
            }
        }
        if (d != -1) {
            for (int j = i; j < d * q ; j += d) {
                if (a[i] == a[j]) {
                    ok = true;
            }
            else {
                ok = false;
                // cout << a[i] << " " << i << "       " << a[j] << " " << j << endl;
                break;
            }
        }
    }
    if (d != 1 && ok) {
        b.pb({a[i], d});
    }    

    }
    for (auto x: mp) {
        if (x.second == 1) {
            b.pb({x.first, 0});
        }
    }
    set<pair<int, int>> s;
    for (auto x: b) s.insert({x.first, x.second});
    vii c;
    for (auto x: s) {
        c.pb({x.first, x.second});
    }
    sort(all(c));
    me:
    for (int i = 1; i < c.size(); i++) {
        if (c[i].first == c[i - 1].first) {
            c.erase(c.begin() + (i - 1));
            goto me;
        }
    }
    cout << c.size() << endl;
    for (auto x: c) cout << x.first << " " << x.second << endl;
    return 0;

}

// Not the Right answer...sad.
