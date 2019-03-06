extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int i;
	int sn;
	int a;
	int size;

	if(!(sn==0&&i==0)) {
		 return 0;
	}

	while(i<size) {
	i++; 
	sn+=a;
	}

	if(!(sn==size*a||sn==0)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
