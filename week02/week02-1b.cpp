//week02-1.cpp
//SOIT106_ADVANCE_001 using c
#include <stdio.h>
int main(){

	int n;
	scanf("%d",&n);

	int ans=0,b=n;
	while(n>0){
		ans=ans*10+n%10;
		n=n/10;
	}
	printf("%d+%d=%d\n",b,ans,ans+b);
}
