#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    int zero = 0;
    int one = 0;
    int ans = 0;
    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            int a = 0;
            cin >> a;
            if (a == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (one >= 2)
        {
            ans++;
        }
        zero = 0;
        one = 0;

    }
    cout << ans << endl;

    return 0;
}