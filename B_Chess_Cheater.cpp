#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>

using namespace std;

int gsum(string in){
    int ret=0;
    for(int i=0;i<in.length();i++){
        if(in.at(i) == 'W'){
            if (i-1>=0 && in.at(i-1) =='W') {
                ret+=2;
            } else {
                ret ++;
            }
        }
    }
    return ret;
}

void calculate(string in,int c){
    
    int ret = gsum(in);
    //cout << "initial sum : " << ret << endl;
    map<int,int> carr;
    for(int i=0;i<in.length();i++){
        int cval=0;
        if(in.at(i) == 'L'){
            if (i-1>=0 && in.at(i-1) =='W') {
                cval+=2;
            } else {
                cval ++;
            }
            if (i+1<in.length() && in.at(i+1) =='W') {
                cval++;
            } 
            carr[i] =cval;
        }
    }
    
    
    
    while(c>0){
        bool loop = false;

        for(int i=0;i<in.length();i++){
            if(carr[i] == 0) continue;
            
            loop = true;
            if (carr[i] == 3) {
                c--;
                ret+=3;
                carr[i] = 0;
                
                if (c <= 0) break;
                continue;
            }
            
            if (carr[i] == 2) {
                c--;
                ret +=2;
                carr[i] = 0;

                if (i+1 >= in.length() && carr[i+1] > 0) {
                    carr[i+1] ++;
                }
                if (c <= 0) break;
                continue;
            }

        }

        if (!loop) break;
    }
    cout <<ret<<endl;
}
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int g, c;
        cin >> g >> c;
        string games;
        cin >> games;
        calculate(games,c);
    }
}