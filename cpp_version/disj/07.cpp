extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	if(!(x==-50)) {
		 return 0;
	}

	while(x < 0) {
	x=x+y; 
	y++;
	}

	if(!(y>0)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
