//Grafuri orientate

#include <iostream>
#include <fstream>
using namespace std;
int a[50][50], i, j, nrNoduri, nrArce, gradeExterne[50], gradeInterne[50];
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

void calculGradNod(int matrice[50][50],int nrNoduri) {

	int sumaGradeExterne = 0, sumaGradeInterne=0;
	for (i = 1; i <= nrNoduri; i++)
	{
		int gradExtern = 0;
		for (j = 1; j <= nrNoduri; j++)
			gradExtern = gradExtern + matrice[i][j];
		cout << "gradul extern al nodului " << i << " este: " << gradExtern << endl;
		sumaGradeExterne = sumaGradeExterne + gradExtern;
	}
	cout << endl << "Suma gradelor externe este: " << sumaGradeExterne <<endl;
	
	for (j = 1; j <= nrNoduri; j++)
	{
		int gradIntern = 0;
		for (i = 1; i <= nrNoduri; i++)
			gradIntern = gradIntern + a[i][j];
		cout << "gradul intern al nodului " << j << " este: " << gradIntern << endl;
		sumaGradeInterne = sumaGradeInterne + gradIntern;
	}
	cout << endl << "Suma gradelor interne este: " << sumaGradeInterne << endl;


}

void creareVectoriGrade(int matrice[50][50], int gradeExterne[50], int gradeInterne[50])
{
	for (i = 1; i <= nrNoduri; i++)
	{
		for (j = 1; j <= nrNoduri; j++)
			gradeExterne[i] = gradeExterne[i] + a[i][j];

	}

	for (j = 1; j <= nrNoduri; j++)
	{
		for (i = 1; i <= nrNoduri; i++)
			gradeInterne[j] = gradeInterne[j] + a[i][j];
	}
}


void afisareVectoriGrade(int gradeExterne[50], int gradeInterne[50])
{
	cout <<endl<< "Grade externe din vector:" << endl;
	for (i = 1; i <= nrNoduri; i++)
		cout << "Gradul extern pentru nodul " << i << " este " << gradeExterne[i]<<endl;
	cout <<endl<< "Grade interne din vector:" << endl;
	for (j = 1; j <= nrNoduri; j++)
		cout << "Gradul intern pentru nodul " << j << " este " << gradeInterne[j] << endl;

}
int main()
{
	f >> nrNoduri;
	while (f >> i >> j) {
	
		a[i][j] = 1;
		nrArce++;
	}
	
	afisareMatrice(a);
	cout <<endl<< "Graful are " << nrArce << " arce" << endl;
	calculGradNod(a, nrNoduri);
	creareVectoriGrade(a, gradeExterne, gradeInterne);
	afisareVectoriGrade(gradeExterne, gradeInterne);
	f.close();
	//int nrNod = 0;
	//nrNod=citireMatrice(a);
	//afisareMatrice(a);
	//calculGradNod(a, nrNod);
}


