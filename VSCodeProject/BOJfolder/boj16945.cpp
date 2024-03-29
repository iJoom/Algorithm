#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;


bool majicnumcheck(vector<int> p)
{
	//행열이 모두 같은지 체크
	int sum = p[0] + p[1] + p[2];
	if (sum != (p[3] + p[4] + p[5])) return false;
	if (sum != (p[6] + p[7] + p[8])) return false;

	
	if (sum != (p[0] + p[3] + p[6])) return false;
	if (sum != (p[1] + p[4] + p[7])) return false;
	if (sum != (p[2] + p[5] + p[8])) return false;

	if (sum != (p[0] + p[4] + p[8])) return false;
	if (sum != (p[2] + p[4] + p[6])) return false;
	return true;
}

int main()
{
    vector<int> majic{1,2,3,4,5,6,7,8,9};
    vector<int> m(9);

    int answer = INT_MAX;

    for(int i=0;i<9;i++)cin>>m[i];

    do
    {
        if(majicnumcheck(majic)) {
            int im=0;
            for(int i=0;i<9;i++) {
                    im += abs(m[i]-majic[i]);
            }
            answer = min(answer,im);
        }
    } while (next_permutation(majic.begin(),majic.end()));
    
    cout<<answer;
    


    // do{
    //         for(auto it = v.begin();it != v.end();it++) {
    //             cout<<*it<<' '; // 순열 출력
    //         }
    //         cout<<endl; // 줄바꿈
    // }while (next_permutation(v.begin(),v.end()));

    // sort(c.begin(),c.end());
    // do{
    //     for(int i =0; i<v.size();i++) {
    //             if(c[i]==1)cout<<v[i]<<' '; 
    //     }
    //     cout<<endl; 
    // }while(next_permutation(c.begin(),c.end()));

    // do{
    //     for(int i =0; i<v.size();i++) {
    //             if(c[i]==1)cout<<v[i]<<' '; 
    //     }
    //     cout<<endl; 
    // }while(prev_permutation(c.begin(),c.end()));

   
	return 0;
}