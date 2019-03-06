extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int x;
	int y;

	if(!(x<=50 && y==50)) {
		return 0;
	}

	while(x<100) {
		x++; 
		Depth(1); 
		if (x>50) {
			Depth(2); 
			if (y>70) 
				y++; 
			else 
				y++;
		}
	}

	if(!(y==100)) {
		goto ERROR;
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
