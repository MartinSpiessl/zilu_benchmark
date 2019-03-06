extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int xa;
	int ya;

	int flag;
	if(!( xa==0 && ya==0)) {
		return 0;
	}

	while(1) {
		int x;
		int y;

		x=xa+2*ya; 
		y=-2*xa+ya; 
		x++; 
		Depth(1); 
		if (flag) 
			y=y+x; 
		else 
			y=y-x; 
		xa=x-2*y; 
		ya=2*x+y;

		if(!(xa+2*ya>=0)) {
			goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
