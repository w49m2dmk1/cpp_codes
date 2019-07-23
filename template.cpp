#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int) (x).size())
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define fr first
#define sc second
template <class c> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);
template <class c> struct range { c b, e; };
template <class c> range<c> mrange(c i, c j) { return range<c>{i, j}; }
struct err {
    template <class c, class d> err& operator << (pair<c,d> x) {
        return *this << "(" << x.fr << ", " << x.sc << ")";
    }
    template <class c> typename enable_if<sizeof(try_out(declval<c>())) != 1, err&>::type operator << (c x) {
        cerr << boolalpha << x;
        return *this;
    }
    template <class c> typename enable_if<sizeof(try_out(declval<c>())) == 1, err&>::type operator << (c x) {
        return *this << mrange(begin(x), end(x));
    }
    template <class c> err& operator << (range<c> x) {
        *this << "{";
        for (auto it = x.b; it != x.e; it++)
            *this << ", " + 2 * (it == x.b) << *it;
        return *this << "}";
    }
};
#define name(...)  "[ " << #__VA_ARGS__ << " : " << __VA_ARGS__ << " ]"
#ifdef LOCAL
    #define debug(x) err() << name(x) << "\n"
#else
    #define debug(x) 42
#endif





int32_t main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    return 0;
}
