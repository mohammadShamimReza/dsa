#include<stdio.h>
#include<iostream>
using namespace std;
 
int main (){
    char s;
    cin >> s;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}