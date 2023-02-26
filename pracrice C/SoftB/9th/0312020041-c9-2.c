/*必須課題c9-2*/
/*2つの値を交換できるようにプログラムを修正(参照渡し)*/


#include <stdio.h>
/*【before】 viud swap(int a, int b)*/
void swap(int *a, int *b)
{
	int temp;
	/*【before】 *a->a, *b->b */
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 10;
	int b = 100;
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
/*swap関数内での処理がmain関数内にも反映される*/