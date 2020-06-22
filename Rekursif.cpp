#include <iostream>
using namespace std;

int a = 2;
int row(int s){
	if(s==0||s==1){
		return(1);
	}
	else {
		return (a+row(s-1));
	}
	
}
int main(){
	int total = 0;
	for(int i = 1; i<=5; i++){
		total=row(i)+total;
	}
	printf("s = 2+4+6+8+10\ns = %d",total);
	
}
