#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    if(n%2==1) cout<<"-1";
    else
        for(int i = 1; i < n; i+=2) cout<<i+1<<" "<<i<<" ";
    return 0;
}