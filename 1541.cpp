//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cout.tie(null);
//	cin.tie(null);
//
//	string sentence;             
//	bool minus = false;// ��ȣ�Ǻ� �����̸� true ���ϱ��̸� false
//	string number = "";          
//	int result = 0;          
//
//	cin >> sentence;
//
//	for (int i = 0; i <= sentence.size(); i++) {
//
//		if (sentence[i] == '-' || sentence[i] == '+' || i == sentence.size()) {  
//
//			// �ռ� '-'�� �־��ٸ�, ���ڸ� ����
//			if (minus == true) {    
//				// ���ڿ� ������ ���ڸ� ���������� ��ȯ
//				result -= stoi(number);   //string to int �Լ� 
//				// ���� ���ڴ� �������� �ʱ�ȭ
//				number = "";                    
//
//			}
//
//			// �ռ� '-'�� �����ٸ�, ���ڸ� ������
//			else if (minus == false) {
//				result += stoi(number);
//				number = "";
//
//			}
//
//		}
//		// 2. ��ȣ�� �ƴ� ��� (������ ���)
//		else {
//			number += sentence[i];     // ���ڿ� ���·� ���� ����
//		}
//
//		if (sentence[i] == '-') {      // - �߰� ��, true�� ����
//			minus = true;
//		}
//
//	}
//
//	cout << result;
//
//	return 0;
//}