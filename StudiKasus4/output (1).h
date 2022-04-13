using namespace std;
class Out{
	private: 
		int tiap_bln=50000, i, tot[10], keluar_bln[12], hasil[12], tot_tabunguan[15], index=0;
    string baris, data_file[10];
    ifstream data;
	public:
		void cetak();
};

void Out::cetak(){
	data.open("../dummy/out_proses.txt");
      while(!data.eof()){
      data >> data_file[index];
      index += 1;
    }
      getline (data,baris);
      cout <<"Total Pengeluaran : Rp. "<<data_file[0]<<endl;
      cout <<"Total Tabungan    : Rp. "<<data_file[1]<<endl;
  data.close();
}