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

// int func4(int N) {
//     int val = 1;
//     while (2*val <= N)
//     {
//         val *= 2;
//     }

//     return val;
    
// }
// int main() {

//     string a;
//     cout<<func4(97615282)<<endl;
//     cin>>a;
//     cout<<a;
//     return 0;
// }
//MARK: 알고리즘 Array Part Code
#include <iostream>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {
  for(int i=len;i>len;i--) 
    arr[i] = arr[i-1];
    arr[idx] = num;
    len++;
  
}

void erase(int idx, int arr[], int& len){
  len -= 1;
  for(int i=idx;i<len;i++) {
    arr[i]=arr[i+1];
  }
}

void printArr(int arr[], int& len) {
  for(int i=0; i < len; i++)cout<<arr[i]<< ' ';
  cout<<"\n\n";
}
int main() {
  cout << "Hello World!\n";
}

