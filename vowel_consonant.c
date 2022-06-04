#include<stdio.h>
int main(){
        char a;
        scanf("%c",&a);
        if((a =='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='U'||a=='O')){
            printf("%c is an vowel",a);

        }
        else if((a>=65&&a<=90)||(a>=97&&a<=122)){
            printf("%c is a consonant",a);
        }
}