#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int pairs(vector < int > a,int k) {
   int ans;
    
    return ans;
}

/* Tail starts here */
int main() {
    int res;
    
    long long n,k;
    cin >> n>>k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    map<long long,int> mymap;
    long long a;;
    for(long long _a_i=0; _a_i<n; _a_i++) {
        cin >> a;
        mymap[a] = 1;    }
    map<long long,int> :: iterator it;
    for(it = mymap.begin();it!=mymap.end();it++){
        if(mymap.find(it->first +k)!=mymap.end())
            res++;
    }
    //res = pairs(_a,_k);
    cout << res;
    
    return 0;
}
