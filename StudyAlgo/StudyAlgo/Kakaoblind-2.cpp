//
//  Kakaoblind-2.cpp
//  StudyAlgo
//
//  Created by IJ . on 2021/02/19.
//  Copyright © 2021 jun. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>


using namespace std;

map<string,int> freq[11];

int main() {
    
    vector<string> orders[10];
    
    
//    for(int i=1;i< (1 << 3);i++){
//        cout<<(1 << 4)<<endl;
//    }
//
//
//
//    for(auto order : orders) {
//        sort(order.begin(),order.end());
//                //1비트 왼쪽으로 order.size 만큼 이동
//        for(int i=1;i< (1 << order.size()); i++)
//        {
//            string menu;
//            int tmp = i;
//
//            for(int j=0; j< order.size();j++) {
//                if(tmp%2)menu += order[j];
//                tmp /=2;
//            }
//
//            freq[menu.size()][menu]++; //이 부분 이해가 안가네
//        }
//
//    }
    freq[0].insert({"aa",4});
    freq[2]["aac"]++;
    freq[2]["aab"] = 2500;
    
    cout<<freq[2]["aac"];
    cout<<freq[2]["aab"];
    
    auto iter = freq[0].begin();
    auto iter2 = freq[2].begin();
    cout<<"iter2:"<<iter2->second<<endl;
    cout<<iter->second<<endl;


    cout<<"asdf";
    
    return 0;
}
