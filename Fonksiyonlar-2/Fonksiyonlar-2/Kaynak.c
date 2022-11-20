#include<stdio.h>
#include<stdlib.h>

int toplam(int s1, int s2)
{
	int s3;
	s3 = (s1 + s2) * 6 - 4;
}

int main() {

	int t;
	t = toplam(8, 4);
	printf("Toplam=%d\n", t);

	t = toplam(3, 5);
	printf("Toplam=%d\n", t);

	t = toplam(9, 1);
	printf("Toplam=%d", t);

	return 0;
}
