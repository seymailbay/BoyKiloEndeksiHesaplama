#include <iostream>
using namespace std;
main(){
	double kilo,indeks, boy;
	int index;
	cout << " kilonuzu giriniz:";
	cin >> kilo ;
	cout << "boyunuzu giriniz(m):";
	cin >> boy;
	indeks = kilo / (boy * boy);
	index=indeks*10;
	cout<<"endeksiniz ";
switch (int (indeks*10) ){
	case 0 ...185 : {
		cout << "zayif";
		break;
	}
	case 186 ... 249: {
		cout << " normal";
		break;
	}
	case 250 ... 299 : {
		cout << "fazla kilolu";
		break;
	}
	case 300 ... 349 : {
		cout << "1.derece obez";
		break;
	}
	case 350 ... 399 : {
		cout << "2.derece obez";
		break;
	}
	case  400 ... 700 : {
		cout << " 3. derece obez";
		break;
	}
	default :{
		cout << " gecersiz sayi girdiniz";
		break;
	}
}
cout<< endl << "indeksiniz:"<< indeks << endl;
}
