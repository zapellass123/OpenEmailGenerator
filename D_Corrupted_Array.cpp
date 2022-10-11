#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define loop for(int i = 0; i < n; i++)
using namespace std;
 
int countDigit(long long n){
return floor(log10(n) + 1);
}
//-----------------------------------------------------------------------------
void solve(){
    int n; cin >> n;
    int a[n+2];
    for(int i = 0; i < n+2; i++){
       cin >> a[i];         
    }
    sort(a, a+n+2);
    int index = -1;
    int sum = accumulate(a, a+n+2, 0);
    for(int i = 0; i < n+1; i++){

        int temp = (sum-a[i]);
        // cout << i<<" temp " << temp << endl;
        if(temp%2 == 0){
            if(temp/2 == a[n+1]){
                index = i;
                // cout << index << endl;
                break;
            }
        }
    }
    if((sum-a[n+1])%2==0){
        if(a[n] == (sum-a[n+1])/2) index = n+1;
    }
    // cout << index << endl;
    // cout << endl;
    if(index == -1){
        cout << index << endl;
        return;
    }
    if(index == n+1){
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 0; i < n+1; i++){
        if(i != index)cout << a[i] << " ";
    }
    cout << endl;
    return;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}