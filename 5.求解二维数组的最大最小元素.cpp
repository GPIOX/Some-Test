#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

#define MAXN 20

void FindMaxMin(int &max, int &min, int n, int (*a)[MAXN])
{
	int row;
	int col;

	max = a[0][0];
	for (row = 0; row < n; row++)
	{	/* 找到每行中的最大数 */
		for (col = 0; col < n; col++)
		{
			if (max < a[row][col]) {
				max = a[row][col];
			}
		}
	}

	min = a[0][0];
	for (row = 0; row < n; row++)
	{	/* 找到每行中的最小数 */
		for (col = 0; col < n; col++)
		{
			if (min > a[row][col]) {
				min = a[row][col];
			}
		}
	}
}

int main()
{
	int min;	/* 存储最小值 */
	int max;	/* 存储最大值 */
	int row,col,n;
	int a[MAXN][MAXN];

	system("cls");
	cout << "Please input the order of the matrix:";/* 输入方阵的阶次 */
	cin  >> n;
	cout << "Please input the elements of the matrix,from a[0][0] to a[" \
		 << n-1 << "]" <<'[' << n-1 <<"]:";

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{
			cin >> a[row][col];
		}
	}

	FindMaxMin(max,min,n,a);

	cout << "The maximum of matrix numbers is " << max <<endl;
	cout << "The minimum of matrix numbers is " << min <<endl;
	system("pause");
}