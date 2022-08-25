/**
다음 c-string을 string 클래스로 변환

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while(true) {
		cout << "암호>>";
		cin >> password;
		if(strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else 
			cout << "암호가 틀립니다~~" << endl;
	}
}
**/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pass;
	cout << "Input Password" << endl;
	while (1)
	{
		cout << "Password : ";
		cin >> pass;
		if (pass == "C++")
		{
			cout << "Exit Program" << endl;
			break ; 
		}
		else 
			cout << "Wrong Password" << endl;
	}
}

