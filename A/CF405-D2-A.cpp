// Problem: CF405-D2-A
// Title: Gravity Flip
// Tags: Greedy, Implementation, Sortings, 900

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}