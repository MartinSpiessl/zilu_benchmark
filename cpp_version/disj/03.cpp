extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int n;

	if(!(x==0)) {
		 return 0;
	}

	while(x<n) {
	x++;
	}

	if(!(n<=0||x==n)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
