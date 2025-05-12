#include <iostream>
using namespace std;
const int N = 5;
int main()
{
	setlocale(LC_ALL, "rus");
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cout << "arr[" << i << "]-";
		cin >> arr[i];
	}
	cout << "результирующий массив:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " "<<endl;
	}
	return 0;//статический массив
}

















