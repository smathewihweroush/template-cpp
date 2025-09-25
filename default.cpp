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
#define PRINTC(arr, si) for(int ari=0;ari<si;ari++) cout<<arr[ari]<<' '; cout<<endl

using namespace std;
typedef long long ll;
typedef std::pair<int, int> pii;

const int mod = 1000000007;
const int huge = 1000000000;
const int big = 20000000;

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
