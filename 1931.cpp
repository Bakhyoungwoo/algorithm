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
//    //끝나는 시간 저장용도
//    vector<pair<int, int>> p(N);
//
//    // pair 입력 받기
//    for (int i = 0; i < N; i++)
//    {
//        // pair를 sort하면 첫 번째 인자를 오름차순 정렬해서 두 번째 값을 정렬하기 위해 second와 first순서를 바꿔 입력 받음
//        cin >> p[i].second >> p[i].first;
//        //p[i].second에는 시작 시간이 저장
//        //p[i].first에는 끝나는 시간이 저장
//    }
//
//    // 끝나는시간을 오름차순으로 정렬
//    sort(p.begin(), p.end());
//
//
//    // 첫 번째 수가 connect(0으로 시작)q보다 크면 해당 케이스의 second를 connect에 담아서 갱신
//    for (int i = 0; i < N; i++) {
//        if (p[i].second >= connect) {
//            connect = p[i].first;
//            cnt++;
//        }
//    }
//    cout << cnt;
//}
//
//    // 끝나는 시간 순으로 정렬
//    // 정렬 배열에서 시작시간(start_time)이 현재시간보다 크거나 같을 경우 회의 수행
//
