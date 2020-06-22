#include <iostream>
using namespace std;

long faktorial (int bil){
	if (bil>1)
		return (bil*faktorial(bil-1));
	else 
		return 1;
}

int main(){
	int angka;
	cout<<" Bilangan : ";
	cin>>angka;
	cout<<angka<<"! = "<<faktorial(angka);
	return 0;
}
