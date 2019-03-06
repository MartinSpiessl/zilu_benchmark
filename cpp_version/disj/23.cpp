extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;
	int N;

	if(!( x==y && x<=N && N>=0)) {
		 return 0;
	}

	while(y>=0) {
	Depth(1); 
	if (x<=N) 
		y=y+1; 
	else 
		y=y-1; 
	
	x=x+1; 
	}

	if(!(x<2*N+4)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
