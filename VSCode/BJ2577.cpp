#include<iostream>
using namespace std;
//백준 2577 Success at once
int arr[10];
int main() {
    ios::sync_with_stdio(0);

    int a,b,c,sum;
    cin>>a>>b>>c;
    sum = a*b*c;

    while (sum>0)
    {
        arr[sum%10]++;
        sum/=10;
    }

    for(int i=0;i<10;i++) {
        cout<<arr[i]<<"\n";
    }
    

}