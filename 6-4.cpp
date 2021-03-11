int narcissistic( int number ){
	int k = number;
	int temp = number,i = 1,sum = 0;
	int a=0;
	while (temp>0){
		a++;
		temp = temp/10;
	} 
	while(number>0){
		temp = number % 10;
		number = number / 10;
		sum = sum + pow(temp,a);
	}
	return sum == k;
}

void PrintN( int m, int n )
{
	for(++m;m<n;++m)
		if(narcissistic(m))
			printf("%d\n",m);
}