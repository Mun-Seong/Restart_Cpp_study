/**
아래 C 프로그램을 C++ 스타일로 수정

#include <stdio.h>
int sum(); // 함수 원형 선언

int main() {
  int n=0;
  printf("끝 수를 입력하세요>");
  scanf("%d", &n);
  printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum(1, n));
  return 0;
}

int sum(int a, int b) {
  int k, res=0;
  for(k=a; k<=b; k++) {
    res += k;
    }
  return res;
}
**/

#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int k, sum(0);
	for (k=a; k<=b;k++)
		sum += k;
	return (sum);
}

int main()
{
	int n(0);
	cout << "input end digit >>";
	cin >> n;
	cout << "From 1 to " << n << " SUM = " << sum(1, n) << endl;
}
