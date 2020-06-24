////Sorting Based O(nlogn) time  and O(1) space complexity

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string m = "POST";
    string n = "TOSP";

    sort(m.begin(), m.end());
    sort(n.begin(), n.end());

    if(m==n)
    {
      cout << "Anagram " ;
    }
    else
    {
      cout << "Not an Anagram" ;
    }

    return 0;
}


