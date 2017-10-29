#include<stdio.h>
class num{
	public:
	int a,b;
	void operator=(int x){
		a = x/100;
		b = x%100;
	}
	void print(){
		printf("%d,%d \n",a,b);
	}
	num operator+(num n){
		num n1;
		n1.b = b + n.b;
		n1.a = a + n.a + n1.b/100;
		n1.b = n1.b % 100;
		return n1;
	}
	num operator*(int n){
		num n1;
		n1.b = b * n;
		n1.a = a * n + n1.b/100;
		n1.b = n1.b % 100;
		return n1;
	}
};
int main(){
	num x,y,z,w;
	x = 7235; x.print();
	y = 1195; y.print();
	z = x + y; z.print();

	x = 42173493;
	y = x*378;
	//printf("%d\n",42173493*378);
	y.print();
}
