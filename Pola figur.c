#include <stdio.h>
#include <math.h>

int main(){
	int opcja;
	
	printf("Wybierzsz Kwadrat - 1, Trojkat - 2, prostokat - 3: ");
	scanf("%d", &opcja);
	
	float a, b, c;
	switch(opcja){
		case 1:
			printf("Podaj bok kwadratu: ");
			scanf("%f", &a);
			
			printf("Pole kwadratu o boku %f wynosi %.3f", a, pow(a, 2));
	
	
			case 2:
			printf("Podaj boki trojkata: ");
			scanf("%f", &a);
			printf("\n Podaj drugi bok: ");
			scanf("%f", &b);
			printf("\n Podaj trzeci bol: ");
			scanf("%f", &c);
			
			printf("Pole trojkata o bok %f %f %f wynosi %.3f", a, b, c, a*b*c);

			case 3:
			printf("Podaj boki prostokata: ");
			scanf("%f", &a);
			printf("\n Podaj drugi bok: ");
			scanf("%f", &b);
			
			printf("Pole prostokata o bok %f %f wynosi %.3f", a, b, a*b);
	}

	scanf("%f", &c);
	return 0;
}
