#include <iostream>
#include <climits>  // INT_MIN을 사용하기 위해 추가

using namespace std;

const int MAX_SIZE = 1000;

// 배열의 최대값을 찾는 함수
int findMax(int arr[], int n) {

    int max = INT_MIN;  // INT_MIN으로 초기화
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }// 몇번 반복 할 것 인지에 대하여
    return max;
}

// 자릿수를 기준으로 counting sort를 수행하는 함수
void countingSort(int arr[], int n, int exp) {
    const int radix = 10;  // 10진수 기준으로 정렬하므로 기수를 10으로 설정
    int* output = new int[n];  // 정렬된 결과를 저장할 output 배열을 동적으로 할당
    int count[radix] = { 0 };  // 각 자릿수의 빈도를 저장할 count 배열을 0으로 초기화

    // 각 자릿수에 해당하는 개수를 센다
    for (int i = 0; i < n; ++i) {
        int digit = (arr[i] / exp) % radix;  // 현재 자릿수의 숫자를 계산
        count[digit]++;  // 해당 자릿수의 빈도를 증가
    }

    // count[i]를 count[i-1]과 누적하여 현재 자릿수에서의 정확한 위치를 구한다
    for (int i = 1; i < radix; ++i) {
        count[i] += count[i - 1];  // 누적 합계를 계산하여 실제 위치를 결정
    }

    // output 배열에 요소를 복사한다
    for (int i = n - 1; i >= 0; --i) {
        int digit = (arr[i] / exp) % radix;  // 현재 자릿수의 숫자를 계산
        output[count[digit] - 1] = arr[i];  // 해당 위치에 숫자를 배치
        count[digit]--;  // 배치 후 해당 자릿수의 위치를 감소
    }

    // output 배열을 arr로 복사한다
    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];  // 정렬된 결과를 원래 배열로 복사
    }

    delete[] output;  // 동적으로 할당한 메모리 해제
}


// 기수 정렬 함수
void radixSort(int arr[], int n) {
    // 가장 큰 수를 찾는다
    int max_value = findMax(arr, n);

    // 가장 큰 수의 자릿수만큼 counting sort를 반복한다
    for (int exp = 1; max_value / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);// 배열, 배열원소 수, 자릿수
    }
}

// 배열을 입력받는 함수
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

// 배열을 출력하는 함수
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";  // 줄바꿈 추가
}

int main() {
    int n;
    cout << "정렬할 자료의 갯수 : ";
    cin >> n;

    int* arr = new int[n];  // 동적으로 배열 할당

    inputArray(arr, n);

    radixSort(arr, n);

    cout << "정렬된 결과 : ";
    printArray(arr, n);

    delete[] arr;  // 동적으로 할당한 메모리 해제

    return 0;
}
