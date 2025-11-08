#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int t, p;
    cin >> t;
   cin >> p;
    int arr[t];
    int res=0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    
    }
    // cout << p << " " << arr[p];

    for (int i = 0; i < t; i++)
    {

        if(arr[i] >= arr[p-1] && arr[i] > 0){
            res++;
            // cout << arr[i] << endl;
        }
        }

        cout << res;

        return 0;
}