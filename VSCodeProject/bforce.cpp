#include<iostream>
#include<string>

using namespace std;
int answer;
int main() {
    string A,word;

    getline(cin,A);
    getline(cin,word);
    int leng = word.size();
    while(1) {
    // cout<<A.find(word)<<endl;
    int fidx = A.find(word);
    if(fidx == -1) {
        cout<<answer;
        return 0;
    } else {
        answer +=1;
    }
    
   for(int i=fidx;i<fidx+leng;i++) {
       A[i] = '0';
   }

    }
}