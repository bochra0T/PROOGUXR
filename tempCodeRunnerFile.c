#include <stdio.h>
int premier(int t[], int n){
int i, j, a;
for(i = 0; i < n; i++) {
a=1;
for(j = 2; j < t[i]; j++) {
if(t[i]%j== 0){a=0;}}
if(a==1 && t[i]>2) {printf("%d ,",t[i]);}}
return t[i];
}
int main()
{
int x=100,t[x],n,i,j;
printf("entere la taill de t");
scanf("%d",&n);
for (i=0;i<n;i++){
printf("t[%d]",i);
scanf("%d",&t[i]); }
printf("les nombres premiers est ;\n");
premier(t,n);
return 0;}