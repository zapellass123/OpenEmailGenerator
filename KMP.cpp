#include <bits/stdc++.h>
using namespace std;

// lps is of pattern
// O(n+m) tIME AND o(m) SPACE
void fill_LPS(const string &pattern, vector<int> &lps)
{
    int m = pattern.size();
    // lenght of longest proper prefix suffix
    lps[0] = 0;  // as proper prefix of string length  is 0
    int i = 1;   // starting from first
    int len = 0; // in, starting len = 0 
    // len is previous length of matching 
    while (i < m)
    {
        // if next char matches with len
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {

                lps[i] = 0;
                i++;
            }
            else
            { // recusively search for next len 
                len = lps[len - 1];
            }
        }
    }
}

void KMP(const string &text, const string &pattern)
{
    int n = text.size();
    int m = pattern.size();

    vector<int> lps(m, 0);
    fill_LPS(pattern, lps);
    int i = 0, j = 0;
    while (i < n)
    { 
//       if match then move forward 
        if (pattern[j] == text[i])
        {
            i++;
            j++;
        }
        // if after match , it is covers entire lenght of pat.
        if (j == m)
        {
            cout << (i - j) << " ";
            j = lps[j - 1]; //FIND THE NEXT TO MATCH 
        }
        //  if not match 
        else if (i < n and pattern[j] != text[i])
        { 
          // if first charcater not matching
            if (j == 0)
            {
                i++;
            }
            // search recursively
            else
            {
                j = lps[j - 1];
            }
        }
    }
}


int main()
{
    string text;
    cin >> text;
    string pat;
    cin >> pat;
    KMP(text, pat);
    return 0;
}
