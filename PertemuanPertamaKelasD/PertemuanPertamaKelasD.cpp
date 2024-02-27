// PertemuanPertamaKelasD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{//begin
	
	//numeric nAlas, nTinggi, nLuas 
	//display 'Masukan Alasnya='
	//accept nTinggi 
	//nLuas = 1/2 * nTinggi 
	//compute nLuas = 1/2 nAlas * nTinggi 
	//dispalay 'luasnya adalah = ' + nLuas 

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukan Alasnya= ";
	cin >> nAlas;
	cout << "Masukan Tingginya";
	cin >> nTinggi;
	nLuas = 0.5 * (nAlas * nTinggi);
	cout << "Luasnya adalah= " << nLuas << endl;


	system("pause");

}//end 
