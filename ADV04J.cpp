//####################################################################
//#####In the Name Of Allah,the Most Gracious,the Most Merciful.######
//####################################################################

#include <bits/stdc++.h>
#include <string>
using namespace std;

#define maxn            100010
#define esp             1e-6
#define mod             1000000007
#define ll              long long
#define inf             1061109567
#define ff  first
#define ss  second

typedef pair<ll, ll> ii;

int Set(int N, int pos) {return N = N | (1 << pos);}
int reset(int N, int pos) {return N = N & ~ (1 << pos);}
bool check(ll N, int pos) {return (bool) (N & (1LL << pos));}

const ll MOD = 998244353;

ii exEuclid(ll a, ll b) {
        if(b == 0) return ii(1, 0);
        else {
                ii r = exEuclid(b, a%b);
                return ii(r.ss, r.ff-r.ss*(a/b));
        }
}

int modInv(ll a, ll m) { ii ret = exEuclid(a, m); return ((ret.ff % m) + m ) % m; }

int n;

int main()
{
        int t;
        scanf("%d", &t);

        while(t --){
                scanf("%d", &n);

                int cnt = 0, baad = 2;
                while(true){
                        if(n == 2){
                                cnt += 1;
                                break;
                        }
                        int tot = n - baad;
                        int mid = (tot + 1)/ 2;
                        int l = mid;
                        int r = tot - l;
                        int mx = max(l, r);
                        cnt ++;
                        n = mx + baad;
                        if(baad == 2) baad = 1;
                }
                printf("%d\n", cnt);
        }
        return 0;
}

