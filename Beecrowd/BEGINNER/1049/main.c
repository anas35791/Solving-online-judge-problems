#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20],c[20],x,y,z;
    scanf("%s%s%s",a,b,c);
    x=strcmp(a,"vertebrado");
    y=strcmp(b,"ave");
    z=strcmp(c,"carnivoro");
    if(x==0&&y==0&&z==0)
        printf("aguia\n");
    x=strcmp(a,"vertebrado");
    y=strcmp(b,"ave");
    z=strcmp(c,"onivoro");
    if(x==0&&y==0&&z==0)
        printf("pomba\n");
    x=strcmp(a,"vertebrado");
    y=strcmp(b,"mamifero");
    z=strcmp(c,"onivoro");
    if(x==0&&y==0&&z==0)
        printf("homem\n");
    x=strcmp(a,"vertebrado");
    y=strcmp(b,"mamifero");
    z=strcmp(c,"herbivoro");
    if(x==0&&y==0&&z==0)
        printf("vaca\n");
    x=strcmp(a,"invertebrado");
    y=strcmp(b,"inseto");
    z=strcmp(c,"hematofago");
    if(x==0&&y==0&&z==0)
        printf("pulga\n");
    x=strcmp(a,"invertebrado");
    y=strcmp(b,"inseto");
    z=strcmp(c,"herbivoro");
    if(x==0&&y==0&&z==0)
        printf("lagarta\n");
    x=strcmp(a,"invertebrado");
    y=strcmp(b,"anelideo");
    z=strcmp(c,"hematofago");
    if(x==0&&y==0&&z==0)
        printf("sanguessuga\n");
    x=strcmp(a,"invertebrado");
    y=strcmp(b,"anelideo");
    z=strcmp(c,"onivoro");
    if(x==0&&y==0&&z==0)
        printf("minhoca\n");

    return 0;
}
