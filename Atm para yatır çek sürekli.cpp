#include<iostream>



int main(){
	using namespace std;
	int hesap=1000;
	int secim;
	int miktar;
	for(;;){
	
	cout<<"islem tipini seciniz para yat�r 1 para cek 2";
	cin>>secim;
	switch(secim){
		case 1:
			cout<<"miktar� giriniz";
			cin>>miktar;
			hesap=hesap+miktar;
			cout<<"paran�z"<<hesap;	
		case 2:
			cout<<"miktar giriniz";
			cin>>miktar;
			hesap=hesap-miktar;
			cout<<"paran�z"<<hesap;
	}
	
}
	
	return 0;
}
