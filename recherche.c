#include<stdio.h>
int main(){ int t[9]={1,2,3,4,5,6,7,8,9,10};
           int i,x,trouve=0;
           printf("entrer la valeur recherche:");
           scanf("%d",&x);
            for(i=0;i<=9;i++){
            	if(t[i]==x){printf("valeur trouve");
            	trouve=1;
            	
            break;
				}
			} if (!trouve){printf("valeur non trouve");
			}
		   return 0;}
