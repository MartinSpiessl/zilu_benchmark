extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;
	int n;

	if(!(x>=0 && x<=y && y<n)) {
		 return 0;
	}

	while(x<n) {
	x++; 
	if (x>y) 
		y++;
	}

	if(!(y==n)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
