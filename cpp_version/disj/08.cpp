extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	int flag1 flag2;
	if(!( x==y && x==0)) {
		 return 0;
	}
	while(1) {
	Depth(1); 
	if(flag1) {
		x++; 
		y=y+2;
	} else { 
		Depth(2); 
		if (flag2 && x>=4) {
			x++; 
			y=y+3;
		} 
	}

		if(!(3*x>=y)) {
			 goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
