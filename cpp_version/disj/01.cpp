extern void __assert_fail();

#define Depth(n) do{;} while(0)
int main() {
	int j;
	int k;
	int flag;

	if(!(j==2&&k==0)) {
		return 0;
	}

	while(1) {
		Depth(1); 
		if(flag>0) 
			j=j+4; 
		else { 
			j=j+2; 
			k=k+1; 
		}

		if(!(k==0||j==2*k+2)) {
			goto ERROR;
		}
	}
	return 0;

ERROR: 
	__assert_fail();
	return 1;
}
