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
    int pos;
    for(int i = 0;i<y-1;i++){
        if(nums[i] != nums[i+1]){
            if(i == 0){
                if(nums[1]==nums[2]){
                    pos = 1;
                } else {
                    pos = 2;
                }
            } else {
                pos = i+2;
            }
            break;
        }
    }
    cout << pos << endl;
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
      int y;
      cin >> y;
      vector<int> nums;
      for(int i = 0;i<y;i++){
          int z;
          cin >> z;
          nums.push_back(z);
      }
      calculate(nums,y);
    }
}   