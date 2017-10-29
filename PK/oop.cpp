#include <iostream>
#include<stdio.h>
using namespace std;
class tim{
	public:
	int hr, min;
	int convert_to_minutes(){
		return hr*60 + min;
	}
	tim convert_to_time(int x){
		tim t1;
		t1.hr = x/60;
		t1.min = x%60;
		return t1;	
	}
	void operator=(int x){
		hr = x;
	}
	void print(){
		printf("%d hours %d min \n", hr, min);
	}
	tim operator/(int x){
		int s = convert_to_minutes();
		//printf("%d %d ", x, s);
		s = s/x;
		tim t = convert_to_time(s);
		return t;
	}
	tim operator+(tim t1){
		int sec1 = t1.convert_to_minutes();
		int sec2 = convert_to_minutes();
		int sec = sec1 + sec2;
		return convert_to_time(sec);
	}
};
int main(){

	tim x,y,z,w;
	x = 17; x.print();
	y = x/3 ; y.print();
	z = x/2; z.print();
	w = y+z; w.print();
	return 0;
}
	
