#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n;
	int arr[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int min, temp;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			
			if (arr[min] > arr[j])
			{
				min =j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}