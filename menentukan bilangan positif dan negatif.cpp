#include<stdio.h>
#include<conio.h>
int main()
{
    int bil;
    printf("--------------------\n");
    printf("bilangan positif dan negatif\n");
    printf("--------------------\n");
    printf("nursetiana\n");
    printf("\nMasukan bilangan : ");

    scanf("%d",&bil);

    if(bil>0)
        printf("\n\n%d termasuk bilangan positif",bil);
    else if(bil<0)
        printf("\n\n%d termasuk bilangan negatif",bil);
    else
        printf("\n\n%d termasuk bilangan Nol",bil);
    getch();

}
