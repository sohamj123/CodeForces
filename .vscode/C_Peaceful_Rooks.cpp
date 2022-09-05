#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(vector< vector<int> > nums,int l){
    int turn = 0;
    vector<bool> rooks;
    for(int i = 0; i<l;i++){
        if(nums[i][0] == nums[i][1]){
            rooks.push_back(true);
        } else {
            rooks.push_back(false);
        }
    }
    for(int i = 0;i<l;i++){
        bool x = false;
        bool y = false;
        if(rooks[i] == false){
            for(int j=i+1;j<l;j++){
                if(nums[j][0] == nums[i][1]){
                    x = true;
                }
                if(nums[j][1] == nums[i][0]){
                    y = true;
                }
                if(y == true && x == true){
                    turn+=2;
                    rooks[j] = true;
                    break;
                }
            }
            turn++;
            rooks[i] = true;
        }
    }
    cout << turn << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int j;
         cin >> j;
         int k;
         cin >> k;
         vector< vector<int> > nums;
         for(int l = 0;l<k;l++){
             int m,n;
             cin >> m >> n;
             vector<int> num;
             num.push_back(m);
             num.push_back(n);
             nums.push_back(num);
         }
         calculate(nums,k);
    }
}