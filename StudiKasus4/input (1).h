#include <iostream>
#include <fstream>
using namespace std;

class tabung{
private: 
		int tiap_bln=50000, i, tot, keluar_bln[12], hasil[12], semua=0;
	  ofstream cetak_dta;
public:
	void bulan(){
    cout<<"Uang saku tiap bulan : Rp "<<tiap_bln<<endl<<endl;
	for(int i=1; i<=3; i++){
    cout<<endl;
		cout<<"Bulan "<<i<<" : "<<endl;
		cout<<"Pengeluaran tiap bulan  : Rp. "; cin>>keluar_bln[i];
    }
    cetak_dta.open("../dummy/out_input.txt");
    cetak_dta<<keluar_bln[1]<<endl;
    cetak_dta<<keluar_bln[2]<<endl;
    cetak_dta<<keluar_bln[3]<<endl;
    cetak_dta.close();
}
};