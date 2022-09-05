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
void calculate(string str,int y, int z){
    int count0 = 0;
    int count1 = 0;
    int rem0;
    int rem1;
    for(int i = 0;i<y+z;i++){
        if(str.at(i) == '1'){
            count1++;
        } else if(str.at(i) == '0'){
            count0++;
        }
    }
    if(count0>y || count1>z){
        cout << -1 << endl;
    } else if(y%2 != 0 && z%2 != 0){
        cout << -1 << endl;
    } else if(z == 0){
        for(int i = 0;i<y;i++){
            str.at(i) = '0';
        }
        cout << str << endl;
    } else if(y == 0){
        for(int i = 0;i<z;i++){
            str.at(i) = '1';
        }
        cout << str << endl;
    } else {
        rem0 = y-count0;
        rem1 = z-count1;
        string reverse;
        string half;
        int max;
        bool isPos = true;
        if((y+z)%2==1){
            max = (y+z)/2;
        } else {
            max = (y+z)/2-1;
        }
        for(int i = y+z-1;i>max;i--){
            reverse += str.at(i);
        }
        for(int i = 0;i<(y+z)/2;i++){
            half += str.at(i);
        }
        for(int i = 0;i<half.length();i++){
            if(half.at(i) != reverse.at(i) && half.at(i)!='?' && reverse.at(i) != '?'){
                cout << -1 << endl;
                isPos = false;
                break;
            } else if(half.at(i) != reverse.at(i) && half.at(i)=='0'){
                reverse.at(i) = '0';
                rem0--;
            }  else if(half.at(i) != reverse.at(i) && half.at(i)=='1'){
                reverse.at(i) = '1';
                rem1--;
            }  else if(half.at(i) != reverse.at(i) && reverse.at(i)=='0'){
                half.at(i) = '0';
                rem0--;
            } else if(half.at(i) != reverse.at(i) && reverse.at(i)=='1'){
                half.at(i) = '1';
                rem1--;
            }
            if(rem0<0 || rem1<0){
                isPos = false;
                cout << -1 << endl;
                break;
            }
        }
        
        if(isPos != false){
            for(int i = 0;i<half.length();i++){
                if(half.at(i)=='?'){
                    if(rem1>1){
                        half.at(i) = '1';
                        reverse.at(i) = '1';
                        rem1-=2;
                    } else if(rem0>1){
                        half.at(i) = '0';
                        reverse.at(i) = '0';
                        rem0-=2;
                    } else {
                        isPos = false;
                        cout << -1 << endl;
                        break;
                    }
                }
            }
            if(isPos != false){
            if((y+z)%2==1){
                if(str.at((y+z)/2) == '?'){
                    if(rem1 > 0){
                        str.at((y+z)/2) = '1';
                    } else {
                        str.at((y+z)/2) = '0';
                    }
                }
            }
            for(int i = 0;i<half.length();i++){
                str.at(i) = half.at(i);
            }
            for(int i = 0;i<reverse.length();i++){
                str.at(str.length()-1-i) = reverse.at(i);
            }
            cout << str << endl;
            }
        }
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
      int y,z;
      cin >> y >> z;
      string str;
      cin >> str;
      calculate(str,y,z);
    }
}       