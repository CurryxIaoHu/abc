void sort( int a[], int n ){
	int min,temp,j,i;
	for (i=0;i<n;++i){
		min = i;
		for(j=i+1;j<n;++j)
		    if(a[j] < a[min])
		        min = j;
		        
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}