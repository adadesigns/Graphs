//Grafuri orientate

#include <iostream>
#include <fstream>
using namespace std;
int a[50][50], i, j, nrNoduri,nrArce;
ifstream f("graf.txt");


//int a[50][50], i, j, n;
//
//int citireMatrice(int matrice[50][50])
//{
//	cout << "cate elem?";
//	cin >> n;
//	for ( i = 1; i <= n; i++)
//		for ( j = 1; j <= n; j++)
//		{
//			cout << "a[" << i << "][" << j << "]= ";
//			cin >> a[i][j];
//			
//		}
//	return n;
//}
//
void afisareMatrice(int matrice[50][50])
{
	for (i = 1; i <= nrNoduri; i++)
	{
		for (j = 1; j <= nrNoduri; j++)
		{
			cout << a[i][j]<<" ";

		}
		cout << endl;
	}
}

//void calculGradNod(int matrice[50][50],int nrNoduri) {
//
//	
//	for (i = 1; i <= nrNoduri; i++)
//	{
//		int suma = 0;
//		for (j = 1; j <= nrNoduri; j++)
//			suma = suma + matrice[i][j];
//		cout << "gradul nodului " << i << "este: " << suma << endl;
//	}
//}
int main()
{
	f >> nrNoduri;
	while (f >> i >> j) {
	
		a[i][j] = 1;
		nrArce++;
	}

	afisareMatrice(a);
	cout << "Graful are " << nrArce << "arce" << endl;


	f.close();
	//int nrNod = 0;
	//nrNod=citireMatrice(a);
	//afisareMatrice(a);
	//calculGradNod(a, nrNod);
}


