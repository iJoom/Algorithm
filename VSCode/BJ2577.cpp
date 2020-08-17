#include <iostream>
#include <stack>
using namespace std;
//백준 2577 Success at once
// int arr[10];
// int main() {
//     ios::sync_with_stdio(0);

//     int a,b,c,sum;
//     cin>>a>>b>>c;
//     sum = a*b*c;

//     while (sum>0)
//     {
//         arr[sum%10]++;
//         sum/=10;
//     }

//     for(int i=0;i<10;i++) {
//         cout<<arr[i]<<"\n";
//     }
    

// }

int main() {
    stack<int> S;
    string n;
    int c,sum=0;
    cin>>c;
    while(c-->0) {
        int k;
        cin>>k;
        if(k==0){ 
            sum-=S.top();
            if(!S.empty())S.pop();
            continue;
        }
        else S.push(k);
        if(!S.empty())sum+=S.top();

    }
   cout<<sum;
    // cout<<"문자열 입력";
    // cin>>n;
    // S.push(5);
    // cout<<(int)S.empty();
    
    // if(n == "push") {
    //     int k;
    //     cin>>k;
    //     S.push(k);
    // }
    // else if(n == "pop") cout<<"pop입력";
}