/**
다음 코드를 get() getline()을 사용해 수정해라

#include <iostream>
using namespace std;
int main() {
     int n;
     char name[100];
     while (true) {
	cout << "정수 ID 입력 >> ";
	cin >> n;
	cout << "이름 문자열 입력 >> ";
	cin.getline(name, 100);
	cout << "ID: " << n << ' ' << name << endl;
     }
     return 0;
}
**/

#include <iostream>
using namespace std;

int main()
{
	int		n;
	char	name[100];

	while (true)
	{
		cout << "Input intiger ID >> ";
		cin >> n;
		cin.get(); /** erase  '\n' in buf **/
		cout << "Input string name >> ";
		cin.getline(name, 100);
		cout << "ID : " << n << ' ' << name << endl;
	}
	return (0);
}

