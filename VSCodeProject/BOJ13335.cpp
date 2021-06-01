#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;
bool check[1001];

int main() {
    int n,w,l;
    vector<int> weight;
    int answer=0;
    cin>>n>>w>>l;

    for (int i = 0; i < n; i++)
    {
       cin>>weight[i];
    }

    while (n>0)
    {
        int now = 0;
        int cnt =0;
        for (int i = 0; i < n; i++)
        {
            if(check[i]==true)continue;
            if(now+weight[i]<=l){
                now+=weight[i];
                check[i]=true;
                cnt++;
            }
        }

        for (int i = 0; i < w; i++)
        {
            answer+=1;
        }
        n-=cnt;
        
        
        //(다리 건너기 전) 건널 수 있는 트럭 무게 체크 , 동시에 건널 수 있는 만큼 최대로
        //(다리 건너는중) 다리에 트럭 올리고 무게체크
        //트럭이 다리 다 지나가면, 다시 또 체크
    }
    
    cout<<answer;

    
    return 0;
}