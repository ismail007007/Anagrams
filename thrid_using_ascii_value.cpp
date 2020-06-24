

#include <bits/stdc++.h>
using namespace std;

bool anagram(string m, string n)
{
   int sum_m =0, sum_n=0;
  /*  "If" statement is because ASCII value of A is 65 and ascii
      value of Z is 90 and their lcm is 1170 if I dont check
      for length then 13 length string with only z and
      18 length string with only A will show its an anagram

  */
   if(m.length() == n.length())
   {

    for (int i = 0; i < m.length(); i++)
        {
          sum_m += (int)m[i];
        }

    for (int i = 0; i < n.length(); i++)
        {
          sum_n += (int)n[i];
        }


    if(sum_m == sum_n)
      return true;
    else
      return false;
   }
   else
   {
     return false;
   }
}

int main()
{
    string m = "ZZZZZZZZZZZZZ";
    string n = "AAAAAAAAAAAAAAAAAA";

    bool result = anagram(m, n);

    if(result)
      cout << "Anagram";
    else
      cout << "Not an Anagram";

    return 0;
}


