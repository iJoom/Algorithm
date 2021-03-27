//#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <utility>

#define X first
#define Y second

int board[502][502];
bool vis[502][502];

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};


int answer=0;
int pcnt;

using namespace std;

int main()
{

  cin >> n >> m;

  for (int a = 0; a < n; a++)
  {
    for (int b = 0; b < m; b++)
    {
      cin >> board[a][b];
    }
  }

  for (int a = 0; a < n; a++)
  {
    for (int b = 0; b < m; b++)
    {
     
      if (board[a][b] == 0 || vis[a][b] == 1)continue;
      
      pcnt++;
      queue<pair<int, int>> Q;
      Q.push({a, b});
      vis[a][b] = 1;

      int area = 0;
      while (!Q.empty())
      {
        area++;
        pair<int, int> cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;
          if (vis[nx][ny] || board[nx][ny] != 1)
            continue;
          vis[nx][ny] = 1;
          Q.push({nx, ny});

        }
      }
        answer = max(area,answer);


    }
  }

  cout<<pcnt<<endl;
  cout<<answer;

  return 0;
}