#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <ctime>
#include <queue>

using namespace std;
bool check[1001];

int main()
{
    int n, w, l;
    vector<int> weight;
    vector<pair<int, int>> bridgew;
    queue<int> q;


    int time = 0;
    cin >> n;
    cin >> w;
    cin >> l;
    cin.clear();
    int c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        weight.push_back(c);
    }

    int now = 0;
    int truck = 0;
    while (1)
    {
        time++;

        if(q.size()==w){
            now-=q.front();
            q.pop();
        }

        if (now + weight[truck]<=l)
        {
            if (truck == n-1)
            {
                time+=w;
                break;
            }
            
            q.push(weight[truck]);
            now+=weight[truck];
            truck++;
        } else {
            q.push(0);
        }
    }
    cout << time;
    return 0;
}