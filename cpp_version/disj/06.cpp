extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int z;

	if(!( x==z && x<25)) {
		 return 0;
	}

	while(x<100) {
	 Depth(1); 
	 if(x<25) 
		 z=z+1; 
	 else 
		 z=z+5; 
	 
	 x=x+1;
	}

	if(!( (x==100)&&(z==400))) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
