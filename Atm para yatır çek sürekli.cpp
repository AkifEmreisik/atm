#include<iostream>



int main(){
	using namespace std;
	int hesap=1000;
	int secim;
	int miktar;
	for(;;){
	
	cout<<"islem tipini seciniz para yatır 1 para cek 2";
	cin>>secim;
	switch(secim){
		case 1:
			cout<<"miktarı giriniz";
			cin>>miktar;
			hesap=hesap+miktar;
			cout<<"paranız"<<hesap;	
		case 2:
			cout<<"miktar giriniz";
			cin>>miktar;
			hesap=hesap-miktar;
			cout<<"paranız"<<hesap;
	}
	
}
	
	return 0;
}
