//
//  newDFS.cpp
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//




#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
 
vector<int> dfs_order = vector<int>();
vector<int> bfs_order = vector<int>();
vector<bool> visited;
int map[1001][1001];
 
int V,E;
 
void dfs(int here) {
     
    visited[here] = true;
    dfs_order.push_back(here);
 
    for (int to = 1; to<=V; to++)
        if (!visited[to] && map[here][to] == 1)
            dfs(to);
}
 
void bfs(int start) {
 
    queue<int> q;
    q.push(start);
    bfs_order.push_back(start);
    visited[start] = true;
 
    while (!q.empty()) {
        int here = q.front();
        q.pop();
        for (int next = 1; next<=V; next++)
            if (!visited[next] && map[here][next] == 1) {
                q.push(next);
                bfs_order.push_back(next);
                visited[next] = true;
            }
    }
}
 
void print_order(vector<int> &order) {
    for (int i = 0; i < order.size(); i++)
        printf("%d ", order[i]);
    printf("\n");
}
 
 
int main() {
     
    scanf("%d %d", &V, &E);
 
    int start;
    scanf("%d", &start);
    for (int i = 0; i<E; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b] = map[b][a] = 1;
    }
 
    visited = vector<bool>(V + 1);
    dfs(start);
    visited = vector<bool>(V + 1);
    bfs(start);
 
    print_order(dfs_order);
   // print_order(bfs_order);
 
}
