#include <stdio.h>
#include <math.h>

void sort(int *ptr , int n){
	int temp;

	for(int i=0 ; i<n ; i++){
		for (int j=i+1 ; j<n ; j++){
			if(*(ptr + i)> *( ptr + j )){
				temp = *(ptr + i);
				*(ptr + i)= *(ptr + j);
				*(ptr + j) = temp;

			}

		}	
	}

		for(int i=0 ; i<n ; i++){
		printf("%d ",*(ptr + i));
	}
}

int main(void)
{ 
	int i , n , list[100];

	printf("entr the total no :");
	scanf("%d",&n);
	for (int i=0 ; i<n ; i++){
		scanf("%d",&list[i]);
	}

	sort(list,n);

}

