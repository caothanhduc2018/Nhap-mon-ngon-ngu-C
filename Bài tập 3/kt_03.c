#include <stdio.h>

int main(){
int i;
for (i = 1; 1 <20; i+=2 )
{
if ((i == 5) || (i == 11) || (i == 15))
continue;
printf("%d\n", i);
}
	getchar();
	return 0;
}
