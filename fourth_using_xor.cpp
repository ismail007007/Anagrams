/* This is the best solution I can think of using XOR function
I have come up with the idea of using xor function while doing the question "which no. in array occurs odd times"

O(n) time complexity and O(1) space complexity.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   int ans = 0 ;
    string m = "POST";
    string n = "POST";


    for(int i=0;i<m.length();i++)
    {
      ans = ans^(int(m[i]))^(int(n[i]));

    }


    if(ans == 0)
      cout << "Anagram";
    else
      cout << "Not an Anagram";


    return 0;
}

