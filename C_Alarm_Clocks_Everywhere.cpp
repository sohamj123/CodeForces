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
void calculate(vector<int> times, vector<int> alarms){
    vector<int> differences;
    for(int i = 0;i<times.size()-1;i++){
        differences.push_back(times[i + 1] - times[i]);
    }
    bool isTrue = false;
    int i = 0;
    int j = 0;
    while(j < alarms.size()){
        while(differences[i] % alarms[j] == 0 && i < differences.size()){
            i++;
        }
        cout << endl;
        if(i == differences.size()){
            isTrue =true;
            break;
        } else {
            i =  0;
            j++;
        }
    }

    if(isTrue){
        cout << "YES" << endl << times[0] << " " << j+1;
    } else {
        cout << "NO";
    }
}

int main(){
    int x;
    int y;
    cin >> x >> y;
    vector<int> times;
    for(int i = 0;i<x;i++){
        int l;
        cin >> l;
        times.push_back(l);
    }
    vector<int> alarms;
    for(int i = 0;i<y;i++){
        int l;
        cin >> l;
        alarms.push_back(l);
    }
    calculate(times,alarms);
}   