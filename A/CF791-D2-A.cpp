// Problem: CF791-D2-A
// Title: A. Bear and Big Brother
// Tags: Implementation, 800

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;

    int ans=0;
    while(1){
        ans++;
        a*=3;
        b*=2;
        if(a>b) break;
    }
    cout << ans;
    return 0;
}