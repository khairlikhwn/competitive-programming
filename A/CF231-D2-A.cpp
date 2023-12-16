// Problem: CF231-D2-A
// Title: A. Team
// Tags: brute force, greedy, 800

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int ans=0;
    for(int i=0; i<n; i++){
        int a, b, c; cin >> a >> b >> c;
        int d = a+b+c;
        if(d>=2) ans++;
    }
    cout << ans << endl;
    return 0;
}