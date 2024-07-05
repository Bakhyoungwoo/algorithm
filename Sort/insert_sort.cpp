#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;
int arr[5000];

void insert_sort(int arr[], int n)
{
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		for ( j = i-1; j >=0 ; j--)
		{
			if( arr[j] > key)
				swap(arr[j+1], arr[j]);
		}
		arr[j + 1] = key;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	insert_sort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}