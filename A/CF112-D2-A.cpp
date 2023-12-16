// Problem: CF112-D2-A 
// Title: Petya and Strings
// Tags: Implementation, Strings, 800

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main(){
    string s1, s2; cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 

    if(s1 > s2) cout << 1 << endl;
    if(s1 < s2) cout << -1 << endl;
    if(s1 == s2) cout << 0 << endl;

    return 0;
}