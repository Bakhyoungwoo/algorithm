//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//// �ּ� ���� ����ϴµ� �ʿ��� ���� ���� �� �켱���� ť ����
//priority_queue<int, vector<int>, greater<int> > pq;
//
//int main() {
//    // ������� ������ ����Ű�� ���� ����
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//
//    int N;  // �Է� ���� ������ ����
//    cin >> N;
//
//    int number;  // �Է� ���� ���� ����
//    for (int i = 0; i < N; i++) {
//        cin >> number;
//        pq.push(number);  // ���ڸ� �켱���� ť�� ����
//    }
//
//    int result = 0;  // ���� ����� ������ ����
//    while (pq.size() > 1) {  // �켱���� ť�� �ϳ� �̻��� ���ڰ� ���� ���� ������ �ݺ�
//        int first, second;
//
//        first = pq.top();  // ���� ���� ����
//        pq.pop();
//        second = pq.top();  // �� �������� ���� ����
//        pq.pop();
//
//        result += first + second;  // �� ������ ���� ����� ����
//        pq.push(first + second);  // �� ������ ���� �켱���� ť�� �ٽ� ����
//    }
//
//    cout << result;  // ���� ��� ���
//}
