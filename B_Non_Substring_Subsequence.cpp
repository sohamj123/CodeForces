#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(string bruh,int n,int m){
    for(int i = 0; i<m;i++){
        bool yes = false;
        int begening;
        int end;
        cin >> begening >> end;
        int length = end - begening + 1;
        end--;
        begening--;
        if(end == n){
            continue;
        } else {
            string sub = bruh.substr(begening,length);
            for(int i = 0; i < begening;i++){
                if(bruh.at(i) == sub.at(0)){
                    yes = true;
                    break;
                }
            }
            for(int i = end + 1; i < n;i++){
                if(bruh.at(i) == sub.at(sub.length()-1)){
                    yes = true;
                    break;
                }
            }

        }
        if(yes == true){
            cout << "YES";
        } 
        if(yes == false){
            cout << "NO";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int j;
         int k;
         cin >> j >> k;
         string bruh;
         cin >> bruh;
         calculate(bruh,j,k);
    }
}