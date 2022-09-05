#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(int numNotes,vector<int> nums){
    unordered_set<int> notes;
    for(int i = 0;i<nums.size();i++){
        if(notes.count(nums[i]) == 1){
            notes.insert(nums[i]+1);
        } else {
            notes.insert(nums[i]);
        }
    }
    cout << notes.size() << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int h;
         cin >> h;
         vector<int> nums;
         for(int j=0;j<h;j++){
             int l;
             cin >> l;
             nums.push_back(l);
         }
         calculate(h,nums); 
    }
}