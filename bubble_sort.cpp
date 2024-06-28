#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;
int arr[500000];

void bubble_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++) {
        bool check = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }

        // 중간 결과 출력
        cout << i + 1 << "번째 결과:\t";
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";

        if (!check) {
            break;
        }
    }
}

int main() {

	int size;
	cin >> size;


	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	bubble_sort(arr, size);
    cout << "정렬된 결과 입니다. : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}