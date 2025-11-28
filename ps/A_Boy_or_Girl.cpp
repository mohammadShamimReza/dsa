#include<bits/stdc++.h>
using namespace std;
 
int main (){
    string nam;
    int allch[29] = {0} ;
    int count = 0;
    cin >> nam;
    for (int i = 0; i < nam.size(); i++)
    {
        int a = nam[i] - 96;

        if (allch[nam[i] - 96] == 0)
        {

            allch[nam[i] - 96] = 1;
            count++;
        }
    }
    if(count %2 == 0){
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }


    return 0;
}