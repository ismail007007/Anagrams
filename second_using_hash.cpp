/* Given two words I can think of i will encounter every letter twice not more not less
so if every value of every key is 2 then this is the solution but problem is O(n) as space complexity)
*/

#include <bits/stdc++.h>
using namespace std;

bool anagram(string m, string n)
{

   std:map<char, int> hash;
    for (int i = 0; i < m.length(); i++)
        {
          hash[m[i]]++;
          hash[n[i]]++;
        }


    for (auto j : hash) {
        if(j.second != 2)
          return false;
        }
    return true;
}

int main()
{
    string m = "POST";
    string n = "STOP";

    bool result = anagram(m, n);

    if(result)
      cout << "Anagram";
    else
      cout << "Not an Anagram";

    return 0;
}

