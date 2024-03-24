// DINH VAN TUNG
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <stdlib.h>
#include <time.h>
#include <vector>      
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <numeric>
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     string a, b; cin >> a >> b;
     ll ia = 0, ib = 0;
     while(a[ia] == '0') ia += 1;
     while(b[ib] == '0') ib += 1;

     ll na = ll(a.length()), nb = ll(b.length());
     if (na - ia > nb - ib) cout << '>';
     else if (na - ia < nb - ib) cout << '<';
     else
     {
          ll c = 0;
          while (ia < na && ib < nb)
          {
               if (a[ia] != b[ib])
               {
                    if (a[ia] > b[ib]) c = 1;
                    else c = -1;
                    break;
               }
               ia += 1, ib += 1;
          }
          if (c == 0) cout << '=';
          else if (c == 1) cout << '>';
          else cout << '<';
     }
     return 0;
}
// DINH VAN TUNG