extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	if(!( y == x)) {
		 return 0;
	}

	while(1) {
	 x++; 
	 y++;

		if(!(x == y)) {
			 goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
