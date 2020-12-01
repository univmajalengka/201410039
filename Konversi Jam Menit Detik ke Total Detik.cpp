#include<iostream>
using namespace std;
int main()
{
	int j,m,d,td;
	cout<<"Masukkan Jam : ";
	cin>>j;
	cout<<"Masukkan Menit : ";
	cin>>m;
	cout<<"Masukkan Detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik : "<<td;
	return 0;
}
