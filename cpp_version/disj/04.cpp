extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	if(!( x==y && x<=49 && x>=0)) {
		 return 0;
	}

	while(y>=0) {
	x=x+1; 
	Depth(1); 
	if (x<50) 
		y=y+1; 
	else 
		y=y-1;
	}

	if(!(x==99 && y==-1)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
