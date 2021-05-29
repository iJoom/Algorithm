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

// int ary[10];
// bool isused[10];
// int n,m;
// void backtrack(int depth){
//     if(depth == m){
//         for(int i=0;i<m;i++){ // depth출력이므로 0부터 시작
//             cout<<ary[i]<<' ';
//         }
//         cout<<'\n';
//         //return;
//     }
    
//     for(int i=1;i<=n;i++){
//         if (!isused[i]) // 숫자 사용했는지 체크이므로 1부터 isused[1] = false는 1사용 X
//         {
//             ary[depth] = i;
//             isused[i] = 1;
//             backtrack(depth+1);
//             isused[i] = false;
//         }
//     }
// }
// int main(void)
// {
//     cin >> n >> m;
//     backtrack(0);
// }

int n, s; //boj1182
int arr[30];
int cnt = 0;
void func(int cur, int tot){
  if(cur == n){
    if(tot == s) cnt++;
    return;
  }
  cout<<cur<<' '<<tot<<endl;
  func(cur+1, tot);
  cout<<cur<<"func다음1  "<<tot<<endl;
  func(cur+1, tot+arr[cur]);
  cout<<cur<<"func다음2  "<<tot<<endl;
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> s;
  for(int i = 0; i < n; i++)
    cin >> arr[i];
  func(0, 0);
  if(s == 0) cnt--;
  cout << cnt;
}