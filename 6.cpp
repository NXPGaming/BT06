#include <iostream>
using namespace std;

void a();
void b(int i);

int n;
int t[1000];
bool check[1000] = { false };


void a() {
	for (int i = 1; i <= n; ++i)
	{
		cout << t[i] << ' ';
	}
	cout << endl;
}

void b(int k) {
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == false) {
			t[k] = i;
			check[i] = true;
			if (k == n) {
				a();
			}
			else
			{
				b(k + 1);
			}
			check[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	b(1);
}
