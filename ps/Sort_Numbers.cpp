#include<stdio.h>
#include<iostream>
using namespace std;
 
int main (){
    int i, j, k;
    cin >> i >> j >> k;
    int arr[3] ={i, j, k};
    for (int l = 0; l < 2; l++)
    {
        /* code */
   
    
        for (int x = 0; x < 2; x++)
        {
            if (arr[x] < arr[x + 1])
            {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
            }
        }
    }

    cout << arr[2] << endl;
    cout << arr[1] << endl;
    cout << arr[0] << endl;
    cout << endl;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}