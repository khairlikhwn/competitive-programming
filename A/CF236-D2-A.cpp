// Problem: CF236-D2-A
// Title: Boy or Girl
// Tags: Brute force, Implementation, Strings, 800

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main(){
    string str; cin >> str;
    set<char> dchar;

    for(char c : str) dchar.insert(c);
    if(dchar.size() % 2 == 0) cout << "CHAT WITH HER!";
    if(dchar.size() % 2 == 1) cout << "IGNORE HIM!";

    return 0;
}