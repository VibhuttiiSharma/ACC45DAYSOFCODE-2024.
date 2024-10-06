#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<y && y%x!=0){
	    printf("%d\n",y/x);}
	    else if(y>x && y%x==0){
	        printf("%d\n",(y/x)-1);
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}