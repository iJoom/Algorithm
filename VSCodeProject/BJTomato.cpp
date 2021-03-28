#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <utility>
#define X first
#define Y second

using namespace std;


int vis[1002][1002];
int board[1002][1002];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
  cin.tie(0);

    cin>>m>>n;
//행 열이 반대로 입력됨, 낚시주의
    queue<pair<int,int>> Q;

    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++) {
            cin>>board[a][b];
            if(board[a][b]==0)vis[a][b]=-1;
            if(board[a][b]==1){ Q.push({a,b});
            }
        }
    }


    while (!Q.empty())
    {
        pair<int,int> cur = Q.front(); Q.pop();
      for(int d=0;d<4;d++){
          int nx = cur.X + dx[d];
          int ny = cur.Y + dy[d];
          if(nx <0 || nx>=n || ny<0 || ny>=m)continue;
          if(vis[nx][ny]>=0)continue;
          vis[nx][ny] = vis[cur.X][cur.Y] + 1;
          Q.push({nx, ny});
      }
    }
    int ans = 0;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < m; b++)
        {
            // cout<<vis[a][b];
            if (vis[a][b] == -1)
            {
                cout << -1;
                return 0;
            }
            ans = max(ans, vis[a][b]);
        }
        // cout<<"\n";
    }
   cout << ans;
}