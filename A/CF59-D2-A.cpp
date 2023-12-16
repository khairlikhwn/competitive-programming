// Problem: CF59-D2-A
// Title: Word
// Tags: Implementation, Strings, 800

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main(){
    string str; cin >> str;
    int upperCount=0, lowerCount=0;
    for(char c : str) {
        if(isupper(c)) upperCount++;
        if(islower(c)) lowerCount++;
    }
    if(upperCount > lowerCount) transform(str.begin(), str.end(), str.begin(), ::toupper); 
    if(upperCount < lowerCount) transform(str.begin(), str.end(), str.begin(), ::tolower); 
    if(upperCount == lowerCount) transform(str.begin(), str.end(), str.begin(), ::tolower); 
    cout << str << endl;

    return 0;
}