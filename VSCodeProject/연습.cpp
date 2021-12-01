#include<bits/stdc++.h>

using namespace std;

long long solution(string expression) {

   long long answer = 0;
   vector<char> oper;
   vector<long long> num;
   string n;
   for (int i = 0; i<expression.size(); i++) {

      if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*') {
         oper.push_back(expression[i]);
         num.push_back(stoll(n));
         n = "";
      }
      else {
         n += expression[i];
      }
      
   }
   num.push_back(stoll(n));
   
   vector<char> operch(oper);
   sort(operch.begin(), operch.end());
   operch.erase(unique(operch.begin(), operch.end()), operch.end());
   for (int i = 0; i < operch.size(); i++)
   {
      cout << operch[i];
   }
   do
   {
      vector<long long> ak(num);
      vector<char> pos(oper);
      for (int i = 0; i < operch.size(); i++) {

         for (int k = 0; k < pos.size(); k++) {
            if (pos[k] == operch[i]) {
               switch (pos[k])
               {
               case '+': ak[k] += ak[k + 1];
                  break;
               case '-': ak[k] -= ak[k + 1];
                  break;
               case '*': ak[k] *= ak[k + 1];
                  break;
               default:
                  break;
               }
               ak.erase(ak.begin() + k + 1);
               pos.erase(pos.begin() + k);
               //현재 k 기준으로 연산자 및 계산되어지는 숫자 먼저 지워야함
               k--;
               //erase때문에 뒤에 연산자가 앞으로 와짐 150*200*3 이라면 앞* 사라지고 , 뒤에 *가 0의자리로
            }
         }
         //이 우선순위대로 숫자랑 연산자 연산하면됨
      }
      for (int i = 0; i < ak.size(); i++)
      {
         cout << ak[i] << ' ';
      }
      for (int i = 0; i < pos.size(); i++)
      {
         cout << pos[i] << ' ';
      }
      cout << "출력 끝" << endl;
      answer = max(answer, abs(ak[0]));
   } while (next_permutation(operch.begin(), operch.end()));


   return answer;
}
int main() {
   string a;

   cin >> a;

   cout<<solution(a);

   return 0;
}