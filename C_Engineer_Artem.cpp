#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(vector< vector<int> > nums,int m,int n){
    vector< vector<int> > booleans;
    for(int i = 0; i< m;i++){
        vector<int> val;
        for(int j = 0;j<n;j++){
            val.push_back(0);
        }
        booleans.push_back(val);
    }
    for(int i = 0; i<m-1;i++){
        for(int j = 0;j<n-1;j++){
            if(nums[i][j] == nums[i][j+1] and nums[i+1][j] == nums[i][j]){
                booleans[i][j+1] = 1;
                booleans[i+1][j] = 1;
                nums[i][j+1]++;
                nums[i+1][j]++;
            }
        }
    }
    for(int i = 0; i<m;i++){
        for(int j = 0;j<n-1;j++){
            if(nums[i][j] == nums[i][j+1]){
                    booleans[i][j+1] = 1;
                    nums[i][j+1]++;
                    j++;
            }
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0;j<m-1;j++){
            if(nums[j][i] == nums[j+1][i] and booleans[j+1][i] == 0){
                    nums[j+1][i]++;
                    j++;
                } else if(nums[j][i] == nums[j+1][i]){
                    nums[j][i]++;
                    j++;
                }
            }
        }

    for(int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        vector< vector<int> > nums;
        int m;
        int s;
        cin >> m >> s;
        for(int j = 0; j<m;j++){
            vector<int> vec;
            for(int x = 0; x<s;x++){
                int val;
                cin >> val;
                vec.push_back(val);
            }
            nums.push_back(vec);
        }
        calculate(nums,m,s);    
    }
}