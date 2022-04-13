#include<iostream>
#include<fstream>
using namespace std;
class Pro{
	private: 
	int tiap_bln=50000, i, tot, keluar[12], hasil, index=0;
	string baris;
    ifstream ambil;
    ofstream tulis;
	public:
		void total();
};

void Pro::total(){
      ambil.open("../dummy/out_input.txt");
  while(!ambil.eof()){
      ambil >> keluar[index];
      index += 1;
    }
      tot=keluar[0]+keluar[1]+keluar[2];
      hasil=150000-tot;
      ambil.close();
      tulis.open("../dummy/out_proses.txt");
      tulis<<tot<<endl;
      tulis<<hasil<<endl;
      tulis.close();
}