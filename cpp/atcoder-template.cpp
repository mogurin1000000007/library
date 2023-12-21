#pragma GCC optimize("Ofast")
#ifdef ONLINE_JUDGE
#include <atcoder/all>
#endif
#include <bits/stdc++.h>
#include <math.h>

#include <chrono>
#include <complex>
#include <random>

using namespace std;
#ifdef ONLINE_JUDGE
using namespace atcoder;
#endif
#define rep(i, n) for (ll i = 0; i < n; ++i)
using ll = long long;
#ifdef ONLINE_JUDGE
// using mint = modint998244353;
// using mint = modint;
using mint = modint1000000007;
#endif
// const ll MOD = 1000000007;
const ll MOD = 998244353;
const long long INF = 1LL << 60;
const double pi = acos(-1.0);
int dx[9] = {1, 0, -1, 0, 1, 1, -1, -1, 0};
int dy[9] = {0, 1, 0, -1, 1, -1, -1, 1, 0};

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(15);

    return 0;
}