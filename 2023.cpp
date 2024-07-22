//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//// �Ҽ��� ���ϴ� ���̸� ������ ���� ����
//static int N;
//
//// �־��� ���ڰ� �Ҽ����� Ȯ���ϴ� �Լ�
//bool isPrime(int num) {
//    if (num < 2) return false; // 2���� ���� ���ڴ� �Ҽ��� �ƴ�
//    for (int i = 2; i <= num / 2; i++) {
//        if ((num % i) == 0) return false; // num�� 2���� num/2������ � ���ڷε� ���������� �Ҽ��� �ƴ�
//    }
//    return true; // ���������� ���ڰ� ������ �Ҽ���
//}
//
//// ����� ���� �켱 Ž�� �Լ��� ���̰� N�� �Ҽ��� ���� �� ���
//void dfs(int x, int digitCount) {
//    if (digitCount == N) {
//        if (isPrime(x)) {
//            cout << x << "\n"; // N �ڸ����� �Ҽ��� ���
//        }
//        return; // ���� ��� ��� ����
//    }
//
//    // ������ �� �ڸ����� Ȧ�������� �����ϱ� ���� Ȧ�� �ڸ����� �ݺ�
//    for (int i = 1; i < 10; i += 2) {
//        int newNumber = x * 10 + i;
//        if (isPrime(newNumber)) {
//            dfs(newNumber, digitCount + 1); // �� ���ڰ� �Ҽ��̸� ��������� ���ڸ� ����
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0); // ����� ����ȭ
//    cin.tie(0); // cin�� cout�� ������ ����
//    cout.tie(0); // cout�� ������ ����
//
//    cin >> N; // �Ҽ��� ���ϴ� ���̸� �Է� ����
//
//    // �� �ڸ� �Ҽ��� DFS ����
//    dfs(2, 1);
//    dfs(3, 1);
//    dfs(5, 1);
//    dfs(7, 1);
//
//    return 0;
//}
