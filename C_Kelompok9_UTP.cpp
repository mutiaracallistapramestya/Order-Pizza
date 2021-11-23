//KELOMPOK 9 Kelas C
//Mutiara Callista Pramestya 2117051013
//Enjelita Aini Natasya 	 2117051028
//Agung Suari				 2117051091

//Header
#include <iostream>

//mempersingkat penulisan std
using namespace std;

//Fungsi yang tidak memiliki nilai kebalikan
void pilih(int a){
	string list[3]={
				"1. Pizza Pepperoni\t\t\t\tKode:111\tHarga:Rp73000",
				"2. Pizza Supreme Chicken\t\t\tKode:222\tHarga:Rp90000",
				"3. Pizza Supreme Chiken With Papperoni\t\tKode:333\tHarga:Rp150000"};
				
	//menambahkan warna di teks tertentu			
	system("color B");	
	cout << "                               ====================|| KALIZZA PIZZA||====================" << endl;
	cout << "                               ====================||Selamat Datang||====================" << endl;
	cout << "                                     >>>>>>>>>   Mau Pesan Apa Hari ini?   <<<<<<<<<<    " << endl;	
	cout <<"\n" << endl;

	//perulangan untuk menunjukkan list
	for(int i=0;i<3;i++){
		cout<<list[i]<<endl;
	}

}

int main(){
    int a;
	int kode,uang;
	int jumlah;
	int b;
	pilih(a);
	
	cout << "\n" << endl;
	cout << "Masukkan kode pesanan :";
	cin >> kode;
	cout << "Jumlah pesanan        :";
	cin>> jumlah;
	system("cls");

	//menyimpan data di array
	int harga [3] = { 73000, 90000, 150000 };
	cout<< "Masukkan Jumlah Uang yang Anda Miliki\t: ";
	cin>> uang;

	//percabangan untuk memilih pesanan
    if (kode==111){ 
    if (uang>=harga[0]*jumlah) {
	
    	cout<<"Uang Kembalian Anda\t\t\t: " << uang-(harga[0]*jumlah) << endl;
    	cout<<"\n";
    	cout<<"Terimakasih Atas Kunjungan Anda" << endl;
    	cout<<"Silahkan Datang Kembali" << endl;
    } else {
    	cout << "Maaf Uang Anda Tidak Cukup";
	} 
	}
	
    	
	 if (kode==222){
		if (uang>=harga[1]*jumlah){
		cout<<"Uang Kembalian Anda\t\t\t: " << uang-(harga[1]*jumlah) << endl;
		cout<<"\n";
		cout<<"Terimakasih Atas Kunjungan Anda" << endl;
    	cout<<"Silahkan Datang Kembali" << endl;
		} else {
		  	cout << "Maaf Uang Anda Tidak Cukup";
		}
		}
		
		
	  if (kode==333){
		if (uang>=harga[2]*jumlah){
		cout<<"Uang Kembalian Anda\t\t\t: " << uang-(harga[2]*jumlah) << endl;
		cout<<"\n";
		cout<<"Terimakasih Atas Kunjungan Anda" << endl;
    	cout<<"Silahkan Datang Kembali" << endl;
		} else {
			cout << "Maaf Uang Anda Tidak Cukup";
		}
		
		}
	



	return 0;
}
