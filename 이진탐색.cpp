//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// ���� Ž�� �Լ�
//int BinarySearch(int arr[], int size, int target)
//{
//    int low = 0;
//    int high = size - 1;
//    int mid = 0;
//
//    while (low <= high)
//    {
//        mid = (low + high) / 2; // �߰���
//
//        if (target < arr[mid])
//            high = mid - 1;
//        else if (target > arr[mid])
//            low = mid + 1;
//        else
//            return mid;  // ��ȯ ���� �ε���
//    }
//
//    return -1;  // ��Ұ� �迭�� ���� ��� -1 ��ȯ
//}
//
//int main() {
//    int size;
//
//    // �迭 ũ�� �Է�
//    cout << "�迭�� ũ��: ";
//    cin >> size;
//
//    // �迭 ����
//    int* arr = new int[size];
//
//    // �迭 ��� �Է�
//    cout << "�迭�� ��Ҹ� �Է� :";
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//
//    // �迭 ����
//    sort(arr, arr + size);
//
//    int target;
//
//    // ã���� �ϴ� �� �Է�
//    cout << "ã���� �ϴ� ��: ";
//    cin >> target;
//
//    // ���� Ž�� �Լ� ȣ��
//    int result = BinarySearch(arr, size, target);
//
//    // ��� ���
//    if (result != -1)
//        cout << "��Ұ� �迭�� �ε��� " << result << " ��ġ�� �ֽ��ϴ�." << endl;
//    else
//        cout << "��Ұ� �迭�� �����ϴ�." << endl;
//
//    // ���� �迭 �޸� ����
//    delete[] arr;
//
//    return 0;
//}
