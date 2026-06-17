#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    int arr[3] = {i, j, k};
    for (int l = 0; l < 2; l++)
    {

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

    cout << arr[2];
    
    

    return 0;
}