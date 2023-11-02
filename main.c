#include <stdio.h>
#include <stdlib.h>
    // Klavyeden girilen bir cumledeki kelime sayisini bulan C programi yaziniz.
int main()
{
        char cumle[100];
        int i=0;
        int sayac =0;
        printf("Lutfen bir cumle giriniz.\n");
        gets(cumle); //Cumlenin bolunmemesi icin scanf ile almýyoruz.

        while(cumle[i])
        {
            if(cumle[i]== 32)
            {
                sayac++;
            }
            i++;
        }

        printf("Girilen cumledeki kelime sayisi :%d\n",sayac+1);
}
