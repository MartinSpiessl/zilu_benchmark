extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;
	int m;
	int n;

	if(!(m>=0&&m<n&&x<=m&&y==m)) {
		 return 0;
	}

	while(x<n) {
	x++; 
	Depth(1); 
	if(x>m) 
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
