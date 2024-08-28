#include<reg51.h>
void delay(unsigned int itime);
void main(){
unsigned int z;
	P1=0x01;//0x80 for from p7(left to right)
	for(z=0;z<9;z++){
	delay(1000);
	P1 = P1<<1;//p1>>1 for from p7(left to right)
		
	}
}
void delay(unsigned int itime)
{ int i ,j;
for (i=0;i<itime;i++)
{ for (j=0;j<1275;j++);
}
}