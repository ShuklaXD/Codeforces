#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<pair<int,int>> vpi;
#define sortn(a) sort(a.begin(), a.end())
#define sortr(a) sort(a.begin(), a.end(), greater<>())
#define all(a) a.begin(), a.end()
#define rep(n) for (int i = 0; i < n; i++)
#define forn(i,a,b) for (int i = a; i < b; i++)
#define isBitSet(S, i) ((S >> i) & 1)
#define cin(arr)    for(int &a : arr)   cin>>a;

const int INF = 1e6 + 5;
const int mod = 1e9 + 7;
// int 2 * 1e9
// long long 9 * 1e18

#define mad(a,b)    (int)((((ll)a%mod) + ((ll)b%mod))%mod);

template<typename...T>void input(T &...args) {((cin >> args), ...);}
template<typename...T>void print(T &&...args) {((cout << args << endl), ...);}
template<typename...T>void deb(T &&...args) {cout << "~~ "; ((cout << args << " "), ...); cout << endl;}
void solve(int case_num)
{
    int n;  cin>>n;

    int st = 4, i = 4;
    int limit = 4*n;
    // vector<bool> can(limit, true);
    // while(n--)
    // {
    //     for(int ind = i; ind < limit; ind+=2)
    //     {
    //         if(can[ind])
    //         {
    //             cout<<ind<<" ";
    //             for(int j = ind; j < limit; j+=ind)
    //             {
    //                 can[j] = false;
    //             }
    //             i = ind+2;
    //             break;
    //         }
    //     }
    // }
    for(int i = 0; i < n; i++)
    {
        cout<<(limit-=2)<<" ";
    }
    cout<<endl;
}

int main() 
{
    #ifdef LOCAL_PROJECT
    freopen("/home/shubham/CodingPractice/vsCode/input.txt", "r", stdin);
    freopen("/home/shubham/CodingPractice/vsCode/output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cases = 1;
    cin>>cases;
    forn(i,0,cases)
    {
        solve(i);
    }
    return 0;
}