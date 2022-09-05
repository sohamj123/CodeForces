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
#include <set>
using namespace std;
void calculate(int x, int y, int z, vector<int> num, vector< vector<int> > nums){
    for(int i = 0; i < y;i++){
        int count = 0;
        if(nums[i][0] == nums[i][1]){
            count = z-1;
        } else{
        for(int j = nums[i][0] - 1;j<nums[i][1];j++){
            if(j == nums[i][0]-1){
                count += num[j] - 1;
                count += num[j+1] - num[j] - 1; 
            } else if(j == nums[i][1]-1){
                count += z-num[j];
                count += num[j] - num[j-1] -1;
            } else {
                count += num[j] - num[j-1] -1;
                count += num[j+1] - num[j] - 1; 
            }
        }
        }
        cout << count << endl;
    } 
}

int main(){
        int x,y,z;
        cin >> x >> y >> z;
        vector<int> num;
        vector< vector<int> > nums;
        for(int i = 0; i<x;i++){
            int l;
            cin >> l;
            num.push_back(l);
        } 
        for(int i = 0;i<y;i++){
            vector<int> hold;
                int l,k;
                cin >> l >> k;
                hold.push_back(l);
                hold.push_back(k);
                nums.push_back(hold);
        }
        calculate(x,y,z,num,nums);
}
   