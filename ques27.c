#include<stdio.h>
int main(){
  int a[100],me,mo,n,i;
    printf("\nEnter number of elements=");
    scanf("%d",&n);
    printf("\nEnter the elements=");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            continue;
        me=a[i];
        break;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i]>me)
            me=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            continue;
        mo=a[i];
        break;
    }
    for(;i<n;i++)
    {
        if(a[i]%2!=0 && a[i]>mo)
        mo=a[i];
    }
    printf("Largest even number=%d\n",me);
    printf("Largest odd number=%d",mo);
}