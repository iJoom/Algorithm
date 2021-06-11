#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

int m[1001]; // 에라토스테네스의 체 배열 크기 지정

void eratos() {

   for(int i=2;i<1000;i++) {
       if(m[i]==1)continue;
       for(int k=i+i;k<1000;k+=i){
           m[k]=1;
       }
   }
}

int main() {
    int cnt;
    int judge = 0;

    eratos(); // m[] == 0 이면 소수 , 1이면 소수X

    int ck=0;
    for(int i=2;i<1000;i++){
        if(m[i]==0)cout<<i<<' ';
        ck++;
        if(ck%10==0)cout<<endl;
    }
    
    int num;
    cin>>cnt;
    while(cnt>0){
        cnt--;

        judge = 0;
        cin>>num;

        for(int a=2;a<1000;a++) {
            if(m[a]==1)continue;
        for(int b=2;b<1000;b++){
                if(m[b]==1)continue;
            for(int c=2;c<1000;c++) {
                 if(m[c]==1)continue;
                if((a+b+c) == num) {
                    cout<<a<<' '<<b<<' '<<c<<endl;
                    judge = 1;
                    break;
                }
            }
            if(judge == 1)break;
        }
        if(judge == 1)break;
    }
    if(judge != 1)cout<<0<<endl;

    }
    

    return 0;
}