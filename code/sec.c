#include <stdio.h>

int main(){
	int i,n;
	

	
	printf("enter a number ;");
	scanf("%d",&n);

	int a[n+1];

	for (int i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}

	 int j;
	 int k=0;
	 
	 printf("enter extra :");
	scanf("%d",&j);
	
	 for (int g=0 ;a[g]<j ; g++){
	 	k++;
	 }

	 printf("%d",k);
	}