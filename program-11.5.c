#include<stdio.h>

main()
{
	
	int i , j , n = 5;
	
	for(i = 1; i <= n; i++){
		
		for(j = i; j <= n; j++){
			printf("%d ", i);
		}
		printf("\n");
		}
}

	// output :
	
	// 1 1 1 1 1
	// 2 2 2 2
	// 3 3 3
	// 4 4
	// 5
