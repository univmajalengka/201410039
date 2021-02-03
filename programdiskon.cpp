#include<iostream>
using namespace std;
int main ()
{
	//Deklarasi 
	float diskon0, diskon1, diskon2, diskon3;
	int totalbelanja, totalbayar, diskon;
	diskon0 = 0;
	diskon1 = 0.1;
	diskon2 = 0.125;
	diskon3 = 0.15;
	
	cout << "=========== PROGRAM DISKON =========== \n";
	cout << "      HILDA NURHIDAYATI     \n"<<endl;
	
	cout << "Masukan Total Belanja : Rp. ";
	cin >> totalbelanja;
	cout <<endl;
	
	//Jumlah belanja 0 - 25000 = 0% diskon
	if (totalbelanja <= 25000){
		diskon = totalbelanja * diskon0;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 0%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
			
	//Jumlah belanja 25.000 - 50.000 = 10% diskon		
	} else if (totalbelanja <= 50000){
		diskon = totalbelanja * diskon1;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 10%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		
	//Jumlah belanja 50.000 - 100.000 = 12,5% diskon	
	} else if (totalbelanja <= 100000){
		diskon = totalbelanja * diskon2;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 12.5%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		
	//Jumlah belanja lebih dari 100.000 = 15% diskon 	
	} else if (totalbelanja > 100000){
		diskon = totalbelanja * diskon3;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 15%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
 	}
	return 0;
}
