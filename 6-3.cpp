/* 你的代码将被嵌在这里 */
double funcos( double e, double x){
	double sum = 0.0;
	double temp = 1.0;
	int i = 0,cnt = 1;
	while(1){
		if (i==0) ;
		else temp = temp*1.0*i*(i-1);
		if (cnt%2 == 1)
			sum = sum + (pow(x,i)/temp);
		else
		    sum = sum - (pow(x,i)/temp);
		++cnt;    
		if (pow(x,i)/temp < e) return sum;
		i = i + 2; 
	}
}