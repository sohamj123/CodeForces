#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
#include <iostream>     
#include <algorithm>  
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <iostream>     
#include <algorithm>    
#include <vector>
using namespace std;
void calculate(vector<int> nums,int y){
    sort(nums.begin(),nums.end());
    int sum = 0;
    vector<int> ans;
    for(int i = 0;i<nums.size();i++){
        sum+=nums[i];
    }
    int large1=nums[nums.size()-1];
    int large2=nums[nums.size()-2];
    if(large2 == (sum-large1-large2)){
        for(int i = 0;i<nums.size()-2;i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    } else {
        sum -= large1;
        int pos=-1;
        for(int i = 0;i<nums.size()-1;i++){
            if(sum-nums[i] == large1){
                pos = i;
                break;
            }
        }
        if(pos == -1){
            cout << -1 << endl;
        } else {
            for(int i = 0;i<nums.size()-1;i++){
                if(i != pos){
                    cout << nums[i] << " ";
                }
            }
            cout << endl;
        }
    }

}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
      int y;
      cin >> y;
      vector<int> nums;
      for(int i = 0;i<y+2;i++){
          int z;
          cin >> z;
          nums.push_back(z);
      }
      calculate(nums,y);
    }
}   