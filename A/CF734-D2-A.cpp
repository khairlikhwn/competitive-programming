/*
Problem: CF734-D2-A 
Title: A. Anton and Danik
Date: 2023-12-16 3:05 PM
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;

    int a=0, d=0;
    for(int i=0; i<n; i++)
        if(s[i]=='A') a++; else d++;
    if(a>d) cout << "Anton" << endl;
    if(d>a) cout << "Danik" << endl;
    if(a==d) cout << "Friendship" << endl;
    return 0; 
}