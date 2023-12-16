// Problem: CF263-D2-A
// Title: A. Beautiful Matrix
// Tags: Implementation, 800

#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans, num;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            num; cin >> num;
            if(num==1) ans = abs(i-3) + abs(j-3);
        }
    }
    cout << ans << endl;
    return 0;
}