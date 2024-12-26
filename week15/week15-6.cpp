//week15-6.cpp SOIT106 ADVANCE 005
#include <stdio.h>

int MYPOWER(int a, int b)
{
	int ans = 1;
	for(int i=0; i<b; i++){
		ans = ans * a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
