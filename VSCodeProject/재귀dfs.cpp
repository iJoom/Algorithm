#include <iostream>
#include <vector>

using namespace std;
//https://velog.io/@choiiis/%EC%9E%AC%EA%B7%80%ED%95%A8%EC%88%98-stack%EC%9D%84-%EC%9D%B4%EC%9A%A9%ED%95%9C-DFS-%EA%B8%B0%EB%B3%B8-%EA%B5%AC%ED%98%84
// vector<int> v[10] = {{}, {2, 3}, {1, 3, 4, 5}, {1, 2, 6, 7}, {2, 8}, {2, 9}, {3}, {3}, {4}, {5}};
// bool isVisited[9];

// void bfs(int cur_node)
// {
//     cout << "cur node : " << cur_node << endl;
//     isVisited[cur_node] = true;
//     for (auto i = v[cur_node].begin(); i != v[cur_node].end(); i++)
//     {
//         printf("%d\n",!isVisited[*i]);
//         if (!isVisited[*i])
//         {
//             printf("bfs(%d)",*i);
//             bfs(*i);
//         }
//     }
// }

int ary[10];
bool isused[10];
int n,m;
void backtrack(int depth){
    if(depth == m){
        for(int i=0;i<m;i++){
            cout<<ary[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    
    for(int i=1;i<=n;i++){
        if (!isused[i])
        {
            ary[depth] = i;
            isused[i] = 1;
            backtrack(depth+1);
            isused[i] = false;
        }
    }
}
int main(void)
{
    cin >> n >> m;
    backtrack(0);
}