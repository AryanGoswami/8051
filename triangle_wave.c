#include<reg51.h>
void msdelay(unsigned int itime);
void main(void)
{ 
	unsigned int i;
	while(1){
   for (i=0;i<255;i++){
    P1=i;
    msdelay(30);
	}
  for(i=255;i>0;i--){
   P1=i;
    msdelay(30);
	}
 }
}
void msdelay(unsigned int itime)
{ 
	int i ,j;
  for (i=0;i<itime;i++)
	{ 
		for (j=0;j<1275;j++);
  }
}