#include <iostream>
using namespace std;

char Al[100] = {'Z', 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
int n, k;
int d = 0;
int a[100];
void indl()
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
		{
			cout << Al[i] << ' ';
		}
	}
	cout << endl;
}

void back(int i)
{
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) {
			d = 0;
			for (int e = 1; e <= n; ++e)
			{
				if (a[e]==1)
				{
					d++;
				}
			}
			if (d == k) {
				indl();
			}
		} 
		else
		{
			back(i + 1);
		}
	}
}

int main()
{
	// to hop chap k cua n
	cin >> n >> k;
	back(1);
}