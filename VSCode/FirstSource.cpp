#include <iostream>
#include <array>
using namespace std;

// int func3(int N) {


//     for(int i=1; i*i <=N ;i++)
//     {
//         if(i*i == N)return 1;
//     }

//     return 0;
// }

int func4(int N) {
    int val = 1;
    while (2*val <= N)
    {
        val *= 2;
    }

    return val;
    
}


int main() {

    cout<<func4(97615282)<<endl;
    return 0;
}