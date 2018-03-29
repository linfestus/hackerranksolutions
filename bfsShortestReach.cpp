#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#include <limits>
#include <fstream>

using namespace std;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int> > vvi;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define DEC(i,a,b) for(int i=(a); i>=b; --i)
#define FORV(v,i) for(int i=0;i<v.size();++i)
#define FORD(v,i) for(int i=v.size()-1;i>=0;--i)
#define all(c) (c).begin(),(c).end()
#define sz(c) int((c).size())
#define pb push_back
#define ull unsigned long long
#define ll long long
#define MOD 1000000007ULL


void bfs(vector<set<int> > &V,int &S,stringstream &ss)
{
    vector<bool> A(V.size(),false);
    vi D(V.size(),-1);
    D[S] = 0;
    queue<int> Q;
    Q.push(S);
    //ss<<"size:"<<V[S].size()<<"\n";
    A[S] = true;
    while(!Q.empty())
    {
        int f = Q.front(); Q.pop();
        //ss<<f<<","<<V[f].size()<<":";
        for(set<int>::iterator it = V[f].begin();
            it != V[f].end() ; ++it)
        {
            int p = *it;
            if(!A[p])
            {
                //ss<<p<<",";
                D[p] = D[f] + 1;
                /*
                 int v = D[f] + 1;
                 if( v < D[p])
                 D[p] = D[f] + 1;
                 */
                A[p] = true;
                Q.push(p);
            }
        }
        //ss<<"\n";
    }
    //ss<<"\n";
    
    //sort(all(D));
    //int C = 0;
    FORV(D,i)
    {
        if(D[i] == -1)
            ss<<-1<<" ";
        else if(D[i] > 0)
            ss<<(D[i]*6)<<" ";
    }
    ss<<"\n";
    //FOR(i,0,C)
    //	ss<<-1<<" ";
}


int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin>>t;
    stringstream ss;
    FOR(i,0,t)
    {
        int n,m;
        cin>>n>>m;
        vector<set<int> > V(n,set<int>());
        FOR(j,0,m)
        {
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            V[a].insert(b);
            V[b].insert(a);
        }
        int S;
        cin>>S;
        S--;
        bfs(V,S,ss);
    }
    cout<<ss.str();
    return 0;
}
