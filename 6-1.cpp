void pyramid( int n ){
	int num_space , i,j;
	i = 1;
	while (1){
		num_space = n - i;
		j = i;
		while(num_space--){
			printf(" ");
		}
		while(j--){
			printf("%d ",i);
		}
		printf("\n");
		if (i == n) break;
		++i;
	}
}