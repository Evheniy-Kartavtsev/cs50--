#include <stdio.h>
#include <cs50.h>

int main(void) {

	int num, str, sym, prob;
	char sl = '#';

	do {																			// цикл перевіряє чи введено числа від 1 до 8																		
		num = get_int("Enter height: ");	} 		
	while (num < 1 || num > 8);

	for (str = 0; str != num; str++) {												// цикл к-сті рядків
		
		for (prob = num - str; prob > 1; prob--)	{								// цикл к-сті пробілів
            	printf(" ");	}
		
		for (sym = -1; sym != str; sym++) 	{										// цикл	к-сть символів зліва
				printf("%c", sl);	}	
		printf("  ");																// пробіли посередині
		for (sym = -1; sym != str; sym++) 	{										// цикл	к-сть символів справа
				printf("%c", sl);	}				
		
		printf("\n");	}
return 0;
}
