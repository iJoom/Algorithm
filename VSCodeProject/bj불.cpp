#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <utility>

#define X first
#define Y second

using namespace std;

string board[1001];
int fire[1001][1001];
int dist[1001][1001];


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {

 ios::sync_with_stdio(0);
  cin.tie(0);

    int n,m;
    cin>>n>>m;


    for(int a=0;a<n;a++) {
            cin>>board[a];
    }
    queue<pair<int,int>> Q;
    queue<pair<int,int>> J;
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
                dist[a][b] = -1;
               fire[a][b] = -1;
            if(board[a][b]=='F'){
                Q.push({a,b});
                fire[a][b] = 0;
            }

            if(board[a][b]=='J'){
                J.push({a,b});
                dist[a][b] = 0;
            }
              
        }
    }

    while (!Q.empty())
    {
        pair<int,int> cur = Q.front(); Q.pop();
        for(int d=0;d<4;d++) {
            int nx = cur.X + dx[d];
            int ny = cur.Y + dy[d];
            if(nx<0 || nx>=n || ny<0 || ny>=m)continue;
            if(fire[nx][ny]>=0 || board[nx][ny]=='#')continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }

    // for (int a = 0; a < n; a++)
    // { //불체크
    //     for (int b = 0; b < m; b++)
    //     {
    //         cout << fire[a][b];
    //     }
    //     cout << "\n";
    // } 불 코드복기

    bool check = false;

    while (!J.empty())
    {
        auto cur = J.front(); J.pop();

        for(int d=0;d<4;d++) {
            int nx = cur.X + dx[d];
            int ny = cur.Y + dy[d];

            if(nx<0 || nx>=n || ny<0 || ny >= m){
                cout<<dist[cur.X][cur.Y]+1;
                // cout<<"탈출";
                // check = true;
                // break;
                return 0;
            }
            if(dist[nx][ny]>=0 || board[nx][ny]=='#')continue;
            if(fire[nx][ny] != -1 && fire[nx][ny] <= dist[cur.X][cur.Y]+1 )continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            J.push({nx,ny});
        }
        //if(check==true)break;
    }

    // for(int a=0;a<n;a++){ 
    //     for(int b=0;b<m;b++){
    //         cout<<dist[a][b];            
    //     }
    //     cout<<"\n";
    // }
    cout << "IMPOSSIBLE";
    return 0;
}