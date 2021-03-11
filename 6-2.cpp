int gcd(int x, int y){
	int temp;
	while (y!=0){
		temp = x%y;
		x = y;
		y = temp;
	}
	return x;
}