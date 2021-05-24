#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int dp(int k) {
    if(k==1)return 1;
    if(k==2)return 2;
    if(k==3)return 4;
    
    return dp(k-1) + dp(k-2) + dp(k-3);
}

int main() {
    //BF인줄 알았으나, DP 문제

    //A(1) = 1 경우의 수 1
    //A(2) = 1+1 , 2 경우의 수 2
    //A(3) = 1+2 , 2+1 , 1+1+1 , 3  경우의 수 4
    //A(4) = 1+1+1+1 , 1+1+2 , 1+2+1, 2+1+1, 2+2 , 3+1 , 1+3 경우의 수 7 => 이전 케이스 총 경우의 수 합(7)
    
    int c;
  
    cin>>c;
    vector<int> k(c);
    vector<int> answer;
    for(int i=0;i<c;i++) {
        cin>>k[i];
        answer.push_back(dp(k[i]));
        
    }
    for(int i=0;i<c;i++)
    cout<<answer[i]<<endl;
    

        return 0;
}