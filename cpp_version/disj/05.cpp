extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	if(!( x==y && x<25)) {
		 return 0;
	}
	
	while(x<100) {
	 Depth(1); 
	 if(x<=50) 
		 y=y+1; 
	 else 
		 y=y-1; 
	 
	 x=x+1;
	}

	if(!( (x==100)&&(y==2))) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
