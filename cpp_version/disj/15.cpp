extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int n;
	int x;

	if(!(n==0&&x==0)) {
		 return 0;
	}
	while(1) {
	n++; x+=2*n-1;
		if(!(x==n*n)) {
			 goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}