#include<iostream>
#include<fstream>
using namespace std;
main(){
	int ab=17000;
	int ag=21000;
	string pil;
	ifstream myfile;
	ofstream myfile2("Struk.txt");
	int jumlah,menu,a,b,totalab,totalag,bayar,diskon;
	cout<<"DAFTAR MENU : "<<endl;
	cout<<"=========================="<<endl;
	cout<<"1. AYAM GORENG"<<endl;
	cout<<"2. AYAM BAKAR"<<endl;
//	cout<<"3. TOTAL"<<endl;
	cout<<"=========================="<<endl;
	do{
	cout<<"Masukkan Menu : ";
	cin>>menu;
	if(menu==1){
		cout<<"Masukkan Jumlah Ayam Goreng : ";
		cin>>a;
		totalag=a*ag;
	}
	else if(menu==2){
		cout<<"Masukkan Jumlah Ayam Bakar : ";
		cin>>b;
		totalab=b*ab;
	}
	if(menu==3){
		jumlah=totalab+totalag;
		if(jumlah>45000){
		diskon=jumlah*0.1;
		cout<<"Total Harga : "<<jumlah-diskon<<endl;
		}
	}
	cout<<"=========================="<<endl;
	cout<<"Lanjut Pesan? (y/n) : ";
	cin>>pil;
	cout<<"=========================="<<endl;	
	}
	while(pil=="y");{
		jumlah=totalab+totalag;
		if(jumlah>45000){
		diskon=jumlah*0.1;
		myfile2<<"=========================="<<endl;
		myfile2<<"AYAM BAKAR  | AYAM GORENG"<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"      "<<a<<"             "<<b<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"      TOTAL : "<<jumlah-diskon<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"Harga Sebelum Diskon : "<<jumlah<<endl;
		myfile2<<"Total Harga : "<<jumlah-diskon<<endl;
		}
		else{
		myfile2<<"=========================="<<endl;
		myfile2<<"AYAM BAKAR  | AYAM GORENG"<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"      "<<a<<"             "<<b<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"      TOTAL : "<<jumlah-diskon<<endl;
		myfile2<<"=========================="<<endl;
		myfile2<<"Harga Sebelum Diskon : "<<jumlah<<endl;
		myfile2<<"Total Harga : "<<jumlah-diskon<<endl;
		}
	myfile2.close();
}
}
