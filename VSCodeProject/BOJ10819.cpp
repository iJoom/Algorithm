#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

vector<int> m;
int cnt;

int main() {

    cin>>cnt;
    int im;
    for(int i=0;i<cnt;i++){
        cin>>im;
        m.push_back(im);
    }

    sort(m.begin(),m.end());
    int sum=0;
    int imsi=0;
    do
    {
        for(int i=0;i<cnt;i++){
            if(i==cnt-1)break;
            imsi+=abs(m[i]-m[i+1]);
        }   
        sum = max(sum,imsi);
        imsi = 0;

    } while (next_permutation(m.begin(),m.end()));
    
    cout<<sum;

   
    return 0;
}