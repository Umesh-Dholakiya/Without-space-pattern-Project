#include<stdio.h>

main()
{
	
	int i , j , n = 5;
	
	for(i = 1; i <= n; i++){
		
		for(j = i; j >= 1; j-- ){
			printf("%d ", j);
		}
		printf("\n");
		}
}

	// output :

	//  1
	//  2 1
	//  3 2 1
	//  4 3 2 1
	//  5 4 3 2 1
