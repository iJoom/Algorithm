//
//  main.cpp
//  StudyAlgo
//
//  Created by IJ . on 2020/05/11.
//  Copyright © 2020 jun. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;



int main(){
    
    vector<int> graph[10];
    
    graph[0].push_back(3);
    graph[0].push_back(4);
    
    
    cout<<graph[0][1]<<endl;
    
    return 0;
}


//vector<int> solution(vector<int> prices) {
//    //프로그래머스 주식가격
//    vector<int> answer;
//    int check = 0;
//    for(int i=0;i<prices.size();i++)
//    {
//
//        for(int p=i+1;p<prices.size();p++)
//        {
//               check++;
//            if(prices[i] > prices[p]){
//
//                break;
//            }
//
//        }
//
//        answer.push_back(check);
//        check=0;
//    }
//
//
//    return answer;
//}
//
//
//int main(){
//
//    vector<int> a(5);
//    a.push_back(1);
//    a.push_back(2);
//    a.push_back(3);
//    a.push_back(2);
//    a.push_back(3);
//
//
//
//    return 0;
//}


//void BFS(int x, int y);
//
//int map[101][101]={0,};
//int check[101][101]={0,};
//
//int dx[] = {-1,0,1,0};//시계방향
//int dy[] = {0,1,0,-1};
//
//int n,m;
//int main(){
//    scanf("%d", &n);
//    m=n;
//
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++){
//
//            scanf("%1d", &map[i][j]);
//        }
//    }
//
//    BFS(0,0);
//
//
//}
//
//
//void BFS(int x, int y){
//    queue<pair<int, int>> q;
//    q.push(make_pair(x,y));
//
//}
