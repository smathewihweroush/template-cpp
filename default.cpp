#include<bits/stdc++.h>

// task dependent stuff
#define STANDARD 1
#define INTERACTIVE 0
#define OUTPUTONLY 2

#define TASKTYPE STANDARD
#if TASKTYPE > 0
#define endl '\n'
#endif

// common functions/members
#define X first
#define Y second
#define pb push_back
#define mkp make_pair

// some basic ahh for macros
#define FORT for(int tii=0;tii<t;tii++)
#define REP(reps, var) for(int var=0;var<reps;var++)
#define INP(lis, n) for(int i=0;i<n;i++)cin>>lis[i]

// idk mafs? probs
#define EVEN(x) ((x % 2) == 0)
#define ODD(x) ((x % 2) == 1)
#define POS(x) (x > 0)
#define POS0(x) (x >= 0) // these two just feel clean to me
#define NEG(x) (x < 0)
#define NEG0(x) (x <= 0)
#define DIV(x, y) ((x % y) == 0)

// array related
#define HAS(l, i) (l[i] != 0)
#define INRAN(l, r, x) ((l <= x) && (x < r)) // this is inclusive
#define FILL(l, x, n) for(int i=0;i<n;i++)l[i]=x // general fill
#define CLEAR(arr) memset(arr, 0, sizeof arr)
#define PRINTARR(arr, n) for(int i=0;i<n;i++){cout<<arr[i]<<' ';}cout<<endl

using namespace std;
const int MAXN = 200002;
const int mod = 1000000007;
const int huge = 1000000000;
const int big = 20000000;

typedef long long ll;
typedef std::pair<int, int> pii;
typedef std::pair<int, int> pll;

int t, n;

// dont forget to set task type!
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;
    FORT {
        cin >> n;
    }


    return 0;
}
