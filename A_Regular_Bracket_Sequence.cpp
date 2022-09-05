#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(string str){
    int countQuestion = 0;
    bool yesNo = true;
    if(str.at(0) == ')' || str.at(str.length()-1) == '('){
        yesNo = false;
    }
    if(yesNo == true){
        for(int i = 0;i<str.length();i++){
            if(str.at(i) == '?'){
                countQuestion++;
            }
        }
    }
    if(yesNo == true && countQuestion%2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }    
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         string str;
         cin >> str;
         calculate(str); 
    }
}