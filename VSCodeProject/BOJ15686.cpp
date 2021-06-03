#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#include <limits.h>

using namespace std;

int n, m;
int board[55][55]; // 50 , 13 보다 넉넉하게
vector<pair<int, int>> chicken;
vector<pair<int, int>> home;

int main()
{
    cin >> n >> m;

    //문제에서 좌표를 1,1 부터 시작하므로 행열 1,1부터 입력 받음
    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < n; p++)
        {
            cin >> board[i][p];
            if (board[i][p] == 2)
                chicken.push_back({i, p});
            if (board[i][p] == 1)
                home.push_back({i, p});
        }
    }
    //0 = 빈칸 , 1 = 집 , 2 = 치킨집
    vector<int> brute(chicken.size(), 1);      // 주어진 치킨집 개수
    fill(brute.begin(), brute.begin() + chicken.size() - m, 0); // m개만큼 조합으로 뽑기위함

    int min_dis = 150000;
    //치킨집중에서 조합으로 m개를 뽑았을 때 치킨거리가 최소인 경우
    do
    {
        int total_dist = 0;
        for (auto h : home)
        {
            int tmp = 150000;
            for (int i = 0; i < brute.size(); i++)
            {
                if (brute[i] == 0)
                    continue; // 선택안된경우 넘어가기
                tmp = min(abs(h.first - chicken[i].first) + abs(h.second - chicken[i].second), tmp);
            }
            total_dist+=tmp;
        }
        min_dis = min(total_dist,min_dis);
    } while (next_permutation(brute.begin(), brute.end()));

    cout << min_dis;

    //각 치킨집
    return 0;
}