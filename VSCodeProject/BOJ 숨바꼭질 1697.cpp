#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <utility>
#define X first
#define Y second

using namespace std;

int dist[100001];
int n,k;

int dx[2] = {1,-1};
int main() {
    cin>>n>>k;
    fill(dist,dist+100001,-1);
    dist[n] = 0 ; //시작점 0으로 체크
    queue<int> Q;
    Q.push(n);
    
    while (!Q.empty())
    {
        auto cur = Q.front(); Q.pop();
        for (int i = 0; i < 3; i++)
        {
            int nx;
            if(i==0 || i==1)nx = cur + dx[i];
            if(i==2)nx= cur*2;

            if(nx <0 || nx>100000)continue;
            if(dist[nx] != -1)continue;

            dist[nx] = dist[cur] + 1;
            Q.push(nx);
        }
    }
    
    cout<<dist[k];


    return 0;
}