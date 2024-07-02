#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

int temp[1000000];
int* arr;
using namespace std;
void merge(int left, int mid, int right)
{
    int l, m, t;

    l = left;
    m = mid + 1;
    t = left;

    //정렬 후 합병
    while (l <= mid && m <= right)
    {
        if (arr[l] <= arr[m])
            temp[t++] = arr[l++];
        else
            temp[t++] = arr[m++];
    }

    if (l > mid)
    {
        while (m <= right)
            temp[t++] = arr[m++];
    }
    else
    {
        while (l <= mid)
            temp[t++] = arr[l++];
    }

    //원래 배열로 복사
    while (left <= right)
    {
        arr[left] = temp[left];
        left++;
    }
}

void merge_sort(int left, int right)// 분할과정 -> partition
{
    int mid;

    if (left >= right)
        return;

    mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);
    merge(left, mid, right);
}

int main() {
    int n;

    cout << "배열의 크기 입력: ";
    cin >> n;

    arr = new int[n];//동적메모리 할당

    cout << "배열의 요소 입력: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0, n - 1);

    cout << "정렬된 배열: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // 동적 할당 메모리 해제

    return 0;
}