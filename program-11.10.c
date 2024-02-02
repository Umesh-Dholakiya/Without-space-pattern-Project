#include <stdio.h>

main() {
	
    int r = 5 ,n = 1 , i , j;
    
    char ch = 'A';

    for ( i = 0; i < r; i++) {
    	
        for ( j = 0; j < r; j++) {
        	
            if (j % 2 == 0) {
            	
                printf("%d ", n++);
                
            } 
			else {
            	
                printf("%c ", ch++);
                
            }
        }
        printf("\n");
    }

    
}


	// output :
	
	// 1   A   2   B   3
	// 4   C   5   D   6
	// 7   E   8   F   9
	// 10   G   11   H   12
	// 13   I   14   J   15
