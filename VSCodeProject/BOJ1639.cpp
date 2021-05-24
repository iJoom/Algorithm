#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

    string a;
    int length;
    cin>>a;

    length = a.size();
    int start_num = length%2==0 ? length : length-1;
    string test;
    while (1)
    {
        for(int i=0;i<length;i++){
        int sum1=0; // 왼쪽합
        int sum2=0; // 오른쪽합

        for(int k=0;k<start_num/2;k++) {
            if(start_num/2+i+k >= length){
                sum1=0; sum2=0;
                break;
            }
            sum1 += a[i+k];
            sum2 += a[(start_num/2)+i+k];
            test.push_back(a[i+k]);
        }
        if(sum1 == sum2 && sum1>0 && sum2>0) {
            // cout<<sum1<<' '<<sum2<<endl;
            // cout<<test<<endl;
            cout<<start_num;
            return 0;
        }
        test.clear();
    }
    if(start_num == 1){
        cout<<0;
        return 0;
    }
    start_num-=2;
    }
    
 
    return 0;
}