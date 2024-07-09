//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// 이진 탐색 함수
//int BinarySearch(int arr[], int size, int target)
//{
//    int low = 0;
//    int high = size - 1;
//    int mid = 0;
//
//    while (low <= high)
//    {
//        mid = (low + high) / 2; // 중간값
//
//        if (target < arr[mid])
//            high = mid - 1;
//        else if (target > arr[mid])
//            low = mid + 1;
//        else
//            return mid;  // 반환 값은 인덱스
//    }
//
//    return -1;  // 요소가 배열에 없는 경우 -1 반환
//}
//
//int main() {
//    int size;
//
//    // 배열 크기 입력
//    cout << "배열의 크기: ";
//    cin >> size;
//
//    // 배열 선언
//    int* arr = new int[size];
//
//    // 배열 요소 입력
//    cout << "배열의 요소를 입력 :";
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//
//    // 배열 정렬
//    sort(arr, arr + size);
//
//    int target;
//
//    // 찾고자 하는 값 입력
//    cout << "찾고자 하는 값: ";
//    cin >> target;
//
//    // 이진 탐색 함수 호출
//    int result = BinarySearch(arr, size, target);
//
//    // 결과 출력
//    if (result != -1)
//        cout << "요소가 배열의 인덱스 " << result << " 위치에 있습니다." << endl;
//    else
//        cout << "요소가 배열에 없습니다." << endl;
//
//    // 동적 배열 메모리 해제
//    delete[] arr;
//
//    return 0;
//}
