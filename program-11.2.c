#include<stdio.h>

main()
{
	
	int i , j , n = 5 ;
	
	for(i = n; i >= 1; i--){
		
		for(j = i; j <= n; j++ ){
			printf("%d ", j);
		}
		printf("\n");
		}
}


	// output : 

	// 5
	// 4 5
	// 3 4 5
	// 2 3 4 5
	// 1 2 3 4 5
