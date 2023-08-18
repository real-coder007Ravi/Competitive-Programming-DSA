#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1 = "codeforces";
    while (t--)
    {
        string s2;
        cin >> s2;
        int i = 0, j = 0;
        int count = 0;
        while (i < s1.size() && j < s2.size())
        {
            if (s1[i] != s2[j])
            {
                count++;
            }
            i++;
            j++;
        }
        cout << count << endl;
    }
}