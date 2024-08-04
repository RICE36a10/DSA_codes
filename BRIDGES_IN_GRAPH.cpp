#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
//order_of_key (K): Number of items strictly smaller than K.
//find_by_order(k): Kth element in a Set (counting from zero).order_of_key
#define int long long
#define pb(a) push_back(a)
#define ppb() pop_back()
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define vi vector<int>
#define minheap(x) priority_queue<x,vector<x>, greater<x>>
#define maxheap(x) priority_queue<x>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vs vector<string>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vvpi vector<vector<pii>>
#define vpi vector<pii>
#define umi unordered_map<int,int>
#define mii map<int,int>
#define mci map<char,int>
#define mpii map<pii,int>
#define si set<int>
#define sc set<char>
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define mod 1000000007
#define endl  "\n"
void ina(vi& arr){for (int i = 0; i < arr.size(); ++i) {cin>>arr[i];}}
#define set_bits  __builtin_popcountll
#define low(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upp(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define nline cout<<"\n";
#define yes cout<<"YES\n";
#define double           long double
#define no cout<<"NO\n";
#define fr(a,b,c)        for(int a=b;a<c;a++)
#define gxy map<pii,bool>
#define gx map<int,bool>
#define hsb               __lg
//hsb returns highest set bit of x

void boost(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
int ithbit(int n, int i){int mask = 1<<i;int ans = n&mask;if(ans == 0){return 0;}else{return 1;}}
void setithbit(int & n, int i, int target){int mask = ~(1<<i);n = n & mask;int mask1 = target<<i;n = n | mask1;}
bool pow2(int n){if((n&(n-1)) == 0){return true;}return false;}
void clearbit(int n, int i, int j){int a = (-1<<(i+1));int b = (1<<j) - 1;int mask = a | b;n = n & mask;}
// functions
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
vector <int> primes(int n,int m){bool prime[n+1];vector <int> ans;memset(prime, true, sizeof(prime));for (int p=2; p*p<=n; p++){if (prime[p] == true){for (int i=p*2; i<=n; i += p)prime[i] = false;}}for (int p=m; p<=n; p++) { if (prime[p]) { ans.push_back(p); } }return ans;}
int bintodec(string &s){return stoi(s,nullptr,2);}
int binaryindex(vector <int> &arr, int target) {int start = 0,size = arr.size();int end = size - 1;int mid = start + (end - start ) / 2;while(start <= end) {int element = arr[mid];if(element == target) {return mid;}if(target < element) {end = mid - 1;}else {start = mid + 1;}mid = start + (end - start ) / 2;}return -1;}
bool valid(char &ch) {if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {return 1;}return 0;}
bool isvowel(char a){bool p = false;if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){p = true;}return p;}
int factorial(unsigned int n){if(n == 0)return 1;int i = n, fact = 1;while (n / i != n) {fact = fact * i;i--;}return fact;}
vector<long long> factorization(long long n) {vector<long long> factorization;for (long long d = 2; d * d <= n; d++) {while (n % d == 0) {factorization.push_back(d);n /= d;}}if (n > 1)factorization.push_back(n);return factorization;}
bool perfectsquare(int num) {if(num==0){ return false; }int l=1;int h=num;while(l<=h){int m=l+(h-l)/2;if(m==num/m&&num%m==0) return true;else if(m>num/m){h=m-1;}else{l=m+1;}}return false;}
int closestperfectsq(int N){int x = sqrt(N);if((x*x)==N){return N;}int aboveN = (x+1)*(x+1);return aboveN;}
string dectobin(int number){int n = (int)(log2(number));return bitset<64>(number).to_string().substr(64 - n- 1);}
int greycode (int n) {return n ^ (n >> 1);}
bool odd(int &n){return n&1;}
bool even(int &n){return !(n&1);}
bool isPrime(int n){if (n <= 1) { return false; } for (int i = 2; i <= sqrt(n); i++)if (n % i == 0){return false;}return true;}
int min(int a,int b){if(a<b){return a;}return b;}
vector<int> zindex(string s) {int n = s.size();vector<int> z(n);int l = 0, r = 0;for(int i = 1; i < n; i++) {if(i < r) {z[i] = min(r - i, z[i - l]);}while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {z[i]++;}if(i + z[i] > r) {l = i;r = i + z[i];}}return z;}
int mex(vi& arr){
    set<int> st;
    st.insert(all(arr));
    int i = 0;
    for (const auto &item: st){
        if(item != i){
            return i;
        }
        i++;
    }
    return i;
}
ll binpowmod(ll a,ll b) {
    ll ans = 1;
    while(b > 0) {
        if((b & 1) == 1) {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}

ll add(ll a, ll b) {
    return (a + b) % mod;
}

ll sub(ll a, ll b) {
    return ((a - b) % mod + mod) % mod;
}

ll mult(ll a, ll b) {
    return ((a * b) % mod);
}

ll inv(ll a) {
    return binpowmod(a, mod - 2);
}

ll divide(ll a, ll b) {
    return mult(a, inv(b));
}

ll nCr(ll n, ll r) {
    if(n < r) return 0;
    return divide(factorial(n), mult(factorial(r), factorial(n-r)));
}





// code taken from cp algorithms
vpi ans;
void IS_BRIDGE(int v,int to) {
    ans.push_back({v,to});
}


void dfs(int src, int p, vi& visited, int t, vi& tin, vi& low, vvi& g) {
    visited[src] = true;
    tin[src] = low[src] = t++;
    bool parent_skipped = false;
    for (int child : g[src]) {
        if (child == p && !parent_skipped) {
            parent_skipped = true;
            continue;
        }
        if (visited[child]) {
//            debug("cyclic ",src,child);
            low[src] = min(low[src], tin[child]);
        } else {
            dfs(child, src, visited, t, tin, low, g);
            low[src] = min(low[src], low[child]);
            // found
            if (low[child] > tin[src]) {
                IS_BRIDGE(src, child);
            }
        }
    }
}






sample input 1
//5 5
//1 2
//4 5
//4 3
//5 3
//2 3



sample input 2

//7 7
//1 2
//2 3
//3 4
//4 5
//5 6
//6 7
//7 3


void solve(){

    int n,m;
    cin>>n>>m;
    vvi g(n);
    int t = 0;
    vi visited(n,0);
    vi tin(n,-1);
    vi tout(n,-1);
    
    for (int i = 0; i < m; ++i) {
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    
    dfs(0,-1, visited,1,tin, tout, g);
//    debug(ans);
//    debug(tout);
//    debug(tin);



}

signed main() {
    boost();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    
//    int t; cin>>t;while(t--){solve();}
    solve();
    
    
    return 0;
}
