extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int i;
	int n;
	int sn;

	if(!(sn==0&&i==0)) {
		 return 0;
	}

	while(i<n) {
	i++; 
	sn++;
	}

	if(!(sn==n||sn==0)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
