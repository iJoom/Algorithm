#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int answer;

string ch[50];
    int N;

int eatcandy() {
    int result=1;

        for(int i=0;i<N;i++) {
            int temp = 1;
                for(int j=0;j<N-1;j++) {
                    if (ch[i][j] == ch[i][j+1])
                    {
                        temp++;
                    }else {
                        result = max(result,temp);
                        temp=1;
                    }
                    result = max(result,temp);
                }
        }

        //위 아래
       for(int i=0;i<N;i++) {
            int temp = 1;
                for(int j=0;j<N-1;j++) {
                    if (ch[j][i] == ch[j+1][i])
                    {
                        temp++;
                    }else {
                        result = max(result,temp);
                        temp=1;
                    }
                    result = max(result,temp);
                }
        }
        return result;
}
int main() {
//     string A,word;

//     getline(cin,A);
//     getline(cin,word);
//     int leng = word.size();
//     while(1) {
//     // cout<<A.find(word)<<endl;
//     int fidx = A.find(word);
//     if(fidx == -1) {
//         cout<<answer;
//         return 0;
//     } else {
//         answer +=1;
//     }
    
//    for(int i=fidx;i<fidx+leng;i++) {
//        A[i] = '0';
//    }

//     }


    cin>>N;
    int result=0;
    for(int i=0;i<N;i++) {
        cin>>ch[i];
    }

    for(int a=0;a<N;a++) {
        for(int b=0;b<N;b++) {
            
            swap(ch[a][b],ch[a][b+1]);
            result = max(result,eatcandy());
            swap(ch[a][b],ch[a][b+1]);

            swap(ch[a][b],ch[a+1][b]);
            result = max(result,eatcandy());
            swap(ch[a][b],ch[a+1][b]);
        }
    }

    cout<<result;

    return 0;
}