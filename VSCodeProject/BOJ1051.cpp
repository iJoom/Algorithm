#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int n, m;
string board[51];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {

        cin >> board[i];
    }

    int start;
    
    start = min(n,m); // 최대 정사각형 한변의 길이
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            for (int boxsize = 1; boxsize <= start; boxsize++)
            {
                if (i + boxsize - 1 > n || k + boxsize - 1 > m)
                    continue;
                if (board[i][k] == board[i][k + boxsize - 1] && board[i][k + boxsize - 1] == board[i + boxsize - 1][k + boxsize - 1] &&
                    board[i + boxsize - 1][k + boxsize - 1] == board[i + boxsize - 1][k] && board[i][k]==board[i+boxsize-1][k])
                {
                   answer = max(answer,boxsize);
                }
            }
        }
    }

    cout<<answer*answer;

    return 0;
}