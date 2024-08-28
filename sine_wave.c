#include<reg51.h>
void msdelay(unsigned int itime);
//sine_wave[13]={128,192,238.848,256,238.848,192,128,64,17.152,0,64,17.152};
void main(){

unsigned char sine_wave[]={0, 16, 32, 64, 110, 128,192,238.848,255,238.848,192,128, 110, 64, 32, 16, 0};
unsigned char x;
while(1){
for(x=0;x<13;x++){
P1=sine_wave[x];
msdelay(250);
}
}

}

void msdelay(unsigned int itime)
{ int i ,j;
for (i=0;i<itime;i++)
{ for (j=0;j<1275;j++);
}
}