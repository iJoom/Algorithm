#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> chicken;
vector<pair<int,int>> home;
int n,m;
int board[55][55];

int main(){

    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
            if(board[i][j]==1){
                home.push_back({i,j});
            }
            if(board[i][j]==2){
                chicken.push_back({i,j});
            }
        }
    }

    vector<int> v(chicken.size(),1); // 치킨 m 개 뽑는 순열 조건 만들기
    fill(v.begin(),v.begin()+chicken.size()-m,0);
     int dist =0;
     int answer = INT_MAX;
    do
    {
   
        for(int i=0;i<home.size();i++) {
            int chicdist =15000;
            for(int j=0;j<chicken.size();j++){
           if(v[j]==0)continue;
            chicdist = min(abs(home[i].first-chicken[j].first)+abs(home[i].second-chicken[j].second),chicdist);
        }
        dist += chicdist;
        }
        answer = min(dist,dist);
    
    } while (next_permutation(v.begin(),v.end()));
    
    cout<<answer;


    return 0;
}