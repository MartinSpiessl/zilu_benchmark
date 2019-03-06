extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;
	int z;

	if(!( x>0 || y>0 || z>0)) {
		 return 0;
	}

	while(1) {
	Depth(1); 
	if (x>0) 
		x++; 
	else { 
		Depth(2); 
		if (y>0) 
			y++; 
		else 
			z++;
	}

		if(!(x>0 || y>0 || z>0)) {
			 goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
