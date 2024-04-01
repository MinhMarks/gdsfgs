
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds ;


#define ll long long
#define pb emplace_back
#define ft first
#define sd second
#define all(Minhnhat) (Minhnhat).begin() , (Minhnhat).end() 

template<typename... T>
void see(T&... args) { ((cin >> args), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args <<  " "), ...); cout << "\n" ; }
template<typename T >
istream& operator >> ( istream& cin , vector < T > &v )  {
    for ( T &i : v ) cin >> i ; return cin ; }
template<typename T >
ostream& operator << ( ostream& cout , vector < T > &v )  {
    for ( T &i : v ) cout << i << ' ' ; cout << "\n" ; return cout ; }
template<typename T >
istream& operator >> ( istream& cin , pair<T,T> &v ) {
    cin >> v.ft >> v.sd ; return cin ; }
template<typename S , typename T>
istream& operator >> ( istream& cin , pair<S,T> &v ) {
    return cin >> v.first >> v.second ; }
template< class T > using Tree = tree< T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update > ;

//date: 2024-03-12 08:33:39
const ll Mod = 1e9 + 7 ;
const ll maxC = 1 << 20 ;
const int maxN = 3005 ;
typedef pair < ll , int > LI ;
typedef pair < int , int > II ;
ll Pow_Mod(ll a, ll b ,ll _Mod ) { ll tmp = a , ans = 1; while (b > 0) { if (b&1) ans = ans * tmp % _Mod ; tmp = tmp * tmp % _Mod; b >>= 1; } return ans; }
/* 
    MORE CAREFUL  
    int overflow, array bounds  
    special case 
    DON'T GET STUCK ON ONE APPROACH
    file name 
    test for AC 
    read problem carefully
*/

void Input(){
}

int gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 
 
    int x1, y1; // To store results of recursive call 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 
 
    // Update x and y using results of 
    // recursive call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
 
    return gcd; 
} 

map <int,bool> M ; 
int main() {
    srand(time(0)) ;
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define task "i" 
    if ( fopen(task".inp","r") ) {
        freopen(task".inp" ,"r",stdin ) ;
        freopen(task".out" ,"w",stdout ) ;
    }
    else if ( fopen("D:/Code_place/@vnoi/i.inp","r") ){
        freopen("D:/Code_place/@vnoi/i.inp" ,"r",stdin ) ;
        freopen("D:/Code_place/@vnoi/i.out" ,"w",stdout ) ;
    }

    int x, y, a = 26513, b = 32321 ; 
    int g = gcdExtended(a, b, &x, &y); 

    cout << x << " " << y ;

    /*
    if (system("fc i.OUT i.ANS") != 0){
        cerr << ": WRONG!\n";
        return 0;
    }*/
    cerr << "\n" << 1.0 * clock() / CLOCKS_PER_SEC ; 
    return 0 ;
}

