#include<stdio.h>
#include<iostream>
using namespace std;
 
int main (){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string num;
        cin >> num;
        int len = num.length();

      
        for (int j = len-1; j >= 0; j--)
        {
            cout << num[j];
            if(j != 0){
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}