#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n, k, a[2001], cnt = 0; cin>>n>>k;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        if (5 - a[i] >= k) cnt++;
    cout<<cnt / 3;
    return 0;
}
/*
      ___                       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \         /\__\         /\__\         /\  \         /\  \    
    /:/  /         /\  \      /::\  \       /:/  /        /:/  /        /::\  \       /::\  \   
   /:/__/          \:\  \    /:/\:\  \     /:/__/        /:/__/        /:/\:\  \     /:/\ \  \  
  /::\  \ ___      /::\__\  /:/  \:\  \   /::\  \ ___   /::\__\____   /::\~\:\  \   _\:\~\ \  \ 
 /:/\:\  /\__\  __/:/\/__/ /:/__/ \:\__\ /:/\:\  /\__\ /:/\:::::\__\ /:/\:\ \:\__\ /\ \:\ \ \__\
 \/__\:\/:/  / /\/:/  /    \:\  \  \/__/ \/__\:\/:/  / \/_|:|~~|~    \/__\:\/:/  / \:\ \:\ \/__/
      \::/  /  \::/__/      \:\  \            \::/  /     |:|  |          \::/  /   \:\ \:\__\  
      /:/  /    \:\__\       \:\  \           /:/  /      |:|  |          /:/  /     \:\/:/  /  
     /:/  /      \/__/        \:\__\         /:/  /       |:|  |         /:/  /       \::/  /   
     \/__/                     \/__/         \/__/         \|__|         \/__/         \/__/    
*/