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
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	string sentence;             
//	bool Minus = false;// ��ȣ�Ǻ� �����̸� true ���ϱ��̸� false
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
//			if (Minus == true) {    
//				// ���ڿ� ������ ���ڸ� ���������� ��ȯ
//				result -= stoi(number);   //string to int �Լ� 
//				// ���� ���ڴ� �������� �ʱ�ȭ
//				number = "";                    
//
//			}
//
//			// �ռ� '-'�� �����ٸ�, ���ڸ� ������
//			else if (Minus == false) {
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
//			Minus = true;
//		}
//
//	}
//
//	cout << result;
//
//	return 0;
//}