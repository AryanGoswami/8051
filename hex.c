//2-digit HEX
#include<reg51.h>
void msdelay(unsigned int itime);
void main(){
unsigned int i;
	for(i=0;i<=255;i++){
	P1=i;
		msdelay(80);
	}
}
void msdelay(unsigned int itime)
{ int i ,j;
for (i=0;i<itime;i++)
{ for (j=0;j<1275;j++);
}
}