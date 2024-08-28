 #include<reg51.h>
void MSDelay(unsigned int);
void main(void)
{  
	unsigned int count=90/(1.8*4);
	unsigned int i;
	while(1){
	  for(i=0;i<=count;i++){
			P1=0x06;
			MSDelay(40);
			P1=0x0C;
			MSDelay(40);
			P1=0x09;
			MSDelay(40);
			P1=0x03;
			MSDelay(40);
		}  
	}
}

void MSDelay(unsigned int k){
	unsigned int s,j;
  for(s=0;s<k;s++){
     for(j=0;j<1275;j++){
		 }
	 }		 	            
}