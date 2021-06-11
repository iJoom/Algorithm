#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void po(int a) {
    if(a==1)return;
    cout<<a<<endl;
    po(a-1);
    po(a-2);
}

void po2(int a) {
    if(a==2)return;
    cout<<a<<endl;
    po(a-1);
}

int main()
{
    int n;
    //cin >> n;


    po(5);
    //po2(4);






    //vector<int> v{1,2,3,4,5};

    // vector<pair<int, int>> v;
    // vector<int> getsum;
    // int a, b;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     v.push_back({a, 0});
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     v[i].second = a;
    // }
    // int answer = 0;

    // do
    // {
    //     int sum = 0;
    //     int life = 100;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if(life - v[i].first <= 0){
    //             //sum = 0;
    //             break;
    //         } else {
    //             life -= v[i].first;
    //             sum += v[i].second;
    //         }
            
    //     }
    //     answer = max(answer,sum);
       

    // } while (next_permutation(v.begin(), v.end()));

    // cout<<answer;

    //재귀 DFS/ DP / knapsack

    return 0;
}