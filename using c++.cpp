/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int row, col, i, l, a, ao, lo, io;
    cin >> row >> col;
    int arr[row + 1][col + 1];
    int r = row;
    int c = col;
    for (i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k = 1;
    int x = 1;
    int low = 1;
    int b = 1;
    int n = ceil(col / 2);
    for (int j = 1; j <= n; j++)
    {
        for (i = k; i <= row; i++) //upar se neeche
        {
            cout << arr[i][j] << " ";
        }
        k++;
        row--;
        io = --i;
        for (l = k; l <= col; l++) // left to right
        {
            cout << arr[io][l] << " ";
        }
        col--;
        lo = --l;
        for (a = r - 1; a >= low; a--) //neeche se upar
        {
            cout << arr[a][lo] << " ";
        }
        r--;
        low++;
        ao = ++a;
        for (int m = c - 1; m >= x + 1; m--) // right to left
        {
            cout << arr[ao][m] << " ";
        }
        c--;
        x++;
    }
    cout << "END";
    return 0;
}
