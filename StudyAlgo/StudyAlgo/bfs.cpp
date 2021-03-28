//#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include<utility>

#define X first
#define Y second

using namespace std;


int vis[502][502];
string board[101];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{

  cin >> n >> m;

  for (int a = 0; a < n; a++)
  {
      cin>>board[a];
  }
  
  for(int k=0;k<n;k++) fill(vis[k],vis[k]+m,-1);
  

      queue<pair<int,int>> Q;
      Q.push({0,0});
      vis[0][0] = 0; // {0,0} = 0으로 하지않으면, -1값이므로 skip됨

      
      while (!Q.empty())
      {

        pair<int, int> cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;
          if ( vis[nx][ny] >= 0 || board[nx][ny] != '1')
            continue;
          vis[nx][ny] = vis[cur.X][cur.Y] + 1;
          Q.push({nx,ny});
        }
      }

      cout<<vis[n-1][m-1]+1;



  return 0;
}
