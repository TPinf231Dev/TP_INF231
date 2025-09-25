#include<stdio.h>
int main(){ int a,b,p;
printf("entrer deux  nombres");
scanf("%d%d",&a,&b);
while(a<0 || b<0){ printf("entrer deux nombres positifs");
scanf("%d%d",&a,&b);
}
p=a*b;
printf("le resultat est %d",p);
return 0;
}
