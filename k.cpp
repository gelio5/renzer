#include <iostream>
const M=5
const N=6
using namespace std;
int main()
{
	double A[M][N];
	double X[N];
	double Y[M];
	int i,j,k;
	for (i = 0; i < M; ++i) //считывание матрицы А
	{
		for (j = 0; i < N; ++j)
		{
			cin >> A[i][j];
		}
	}
	for (i = 0; i < N; ++i) //считывание матрицы Х
		cin >> X[i];
	for (k=0;k<M,++k)	//вывод матрицы У - произведение транспонированной матрицы Х на матрицу А
		cout << Y[k] << endl;
	return 0;
}