#include<stdio.h>

double pricea(int a) {
	if (a == 1)
		return 5000000;
	else if (1 < a<= 3)
		return 3000000;
	else if (3 < a <= 6)
		return 2000000;
	else if (6 < a  <= 10)
		return 500000;
	else if (10 < a <= 15)
		return 300000;
	else if (15 < a <= 21)
		return 100000;
	else
		return 0;
}
double priceb(int b) {
	
	if (b == 1)
		return 5120000;
	else if (1 < b <= 3)
		return 2560000;
	else if (3 < b <= 7)
		return 1280000;
	else if (7 < b<= 14)
		return 640000;
	else if (14 < b  <= 31)
		return 320000;
	else
		return 0;
	

}
int main(void) {
	int T;
	int a[1000], b[1000];
	scanf("%d", &T);
	double price[1000];
		
	for (int t = 0; t < T; t++) {
		
		scanf("%d %d", &a[t], &b[t]);
		price[t] = pricea(a[t]) + priceb(b[t]);
		printf("%d", pricea(a[t]));
		printf("%d\n", pricea(b[t]));

	}
	for (int t = 0; t < T; t++) {
		
		printf("%d\n", price[t]);


	}



	return 0;
}