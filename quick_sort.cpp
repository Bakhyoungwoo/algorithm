#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

const int MAX_SIZE = 100; // 최대 배열 크기 지정

void show(int arr[], int size) { // 배열 출력
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void QuickSort(int arr[], int start, int end) {
    if (start >= end) // 원소가 1개인 경우 그대로 두기
        return;

    int pivot = start; // 피봇은 첫번째 원소
    int i = start + 1, j = end, temp;

    while (i <= j) { // 엇갈릴 때까지 반복
        while (i <= end && (arr[i] <= arr[pivot])) { // 피봇보다 큰 값을 찾을 때까지
            i++;
        }
        while (j > start && (arr[j] >= arr[pivot])) { // 피봇보다 작은 값을 찾을 때까지
            j--;
        }

        if (i > j) { // 엇갈린 상태. 피봇보다 작은 값과 피봇과 교체
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
        else { // 엇갈리지 않았다면 i와 j를 교체
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    QuickSort(arr, start, j - 1);// 분리된 집합에서 피벗 선정 후 다시 정렬
    QuickSort(arr, j + 1, end);// 분리된 집합에서 피벗 선정 후 다시 정렬
}

int main() {
    int n;
    cout << "배열의 크기 ";
    cin >> n;


    int arr[MAX_SIZE];

    cout << "배열의 원소 입력 :";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    cout << "정렬된 배열: ";
    show(arr, n);

    return 0;
}
