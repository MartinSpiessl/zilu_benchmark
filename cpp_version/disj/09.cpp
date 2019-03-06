extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;
	int state;

	int flag;
	if(!(x!=y&&state>=0)) {
		 return 0;
	}

	while(x!=y) {
	state=-1; 
	x=y; 
	Depth(1); 
	if (flag) { 
		state=1; 
		y++; 
	}
	}

	if(!(state<0)) {
		 goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
