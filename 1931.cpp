//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//int connect;
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL);
//    cin.tie(NULL);
//    int N;
//    cin >> N;
//    int cnt = 0;
//    //������ �ð� ����뵵
//    vector<pair<int, int>> p(N);
//
//    // pair �Է� �ޱ�
//    for (int i = 0; i < N; i++)
//    {
//        // pair�� sort�ϸ� ù ��° ���ڸ� �������� �����ؼ� �� ��° ���� �����ϱ� ���� second�� first������ �ٲ� �Է� ����
//        cin >> p[i].second >> p[i].first;
//        //p[i].second���� ���� �ð��� ����
//        //p[i].first���� ������ �ð��� ����
//    }
//
//    // �����½ð��� ������������ ����
//    sort(p.begin(), p.end());
//
//
//    // ù ��° ���� connect(0���� ����)q���� ũ�� �ش� ���̽��� second�� connect�� ��Ƽ� ����
//    for (int i = 0; i < N; i++) {
//        if (p[i].second >= connect) {
//            connect = p[i].first;
//            cnt++;
//        }
//    }
//    cout << cnt;
//}
//
//    // ������ �ð� ������ ����
//    // ���� �迭���� ���۽ð�(start_time)�� ����ð����� ũ�ų� ���� ��� ȸ�� ����
//
