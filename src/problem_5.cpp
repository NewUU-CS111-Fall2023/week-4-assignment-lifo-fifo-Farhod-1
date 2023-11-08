#include <bits/stdc++.h>

using namespace std;


int main()
{
    string arr;
    getline(cin, arr);
    int r = 0;
    int b = 0;
    int y = 0;
    int g = 0;
    int n = arr.length();
    for(int i=0; i<n; i++)
    {
        if(arr[i] == '!')
        {
            int j = i;
            bool was = false;
            while(j+4 < n)
            {
                j+=4;
                was = true;
                if(arr[j] != '!')
                    break;
            }
            if(was)
            {
                if(arr[j] == 'R')
                    r++;
                else if(arr[j] == 'B')
                    b++;
                else if(arr[j] == 'G')
                    g++;
                else if(arr[j] == 'Y')
                    y++;
            }
            else
            {
                j = i;
                bool was1 = false;
                while(j-4 > -1)
                {
                    j-=4;
                    was1 = true;
                    if(arr[j] != '!')
                        break;
                }
                if(was1)
                {
                    if(arr[j] == 'R')
                        r++;
                    else if(arr[j] == 'B')
                        b++;
                    else if(arr[j] == 'G')
                        g++;
                    else if(arr[j] == 'Y')
                        y++;
                }
            }

        }
    }

    cout << r << ' ' << b << ' ' << y << ' ' << g;
    return 0;
}