#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int n; cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++) cin>>nums[i];
    sort(nums, nums + n);
    for(int i = 0; i < n; i++) cout<<nums[i]<<" ";
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