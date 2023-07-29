/*
Example 1:
Input:
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 2:
Input:
a1[] = {1, 2, 3, 4, 4, 5, 6}
a2[] = {1, 2, 4}
Output:
Yes
Explanation:
a2[] is a subset of a1[]
*/

#include <iostream>
using namespace std;
bool checkForSubset(int arr1[], int arr2[], int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (arr2[i] == arr1[j])
            {
                cnt++;
                break;
            }
        }
    }
    if (cnt == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr1[] = {11, 7, 1, 31, 21, 3, 7, 3}, arr2[] = {21, 3, 7, 1, 7}, x = 8, y = 5;
    if (checkForSubset(arr1, arr2, x, y) == true)
    {
        cout << "arr2 is a subset of arr1";
    }
    else
    {
        cout << "arr2 is not a subset of arr1";
    }
    return 0;
}
