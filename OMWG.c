#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);

	int m[t], n[t];
	for(int i = 0; i < t; i++){
		scanf("%d%d",&n[i],&m[i]);
	}
	printf("\n");
	for(int i = 0; i < t; i++){
        printf("%d\n",m[i] * (n[i] - 1) + n[i] * (m[i] - 1));
	}

return 0;
}
