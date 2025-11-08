#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    string val1 = "X++";
    string val2 = "++X";

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(s == val1 || s == val2){
            res++;
        }else{
            res--;
        }
    }
    cout << res;

    return 0;
}