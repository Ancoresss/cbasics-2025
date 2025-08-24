#include <stdio.h>
int main(){
int a;
int b;
int len=0;
int code[32];
printf("Enter the number:");
scanf("%d", &a);
    while(a<0){
	do{
        printf("Enter a non-negative number:");
        scanf("%d", &a);
}   while(a<0);
}

        do{
	    b=a%2;
            a=a/2;
	    code[len++]=b;
}       while(a>0);

    for(int i=len-1;i>=0;i--){
   	printf("%d", code[i]);
    

}
printf("\n");
return 0;
    


}
