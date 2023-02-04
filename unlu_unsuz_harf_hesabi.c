#include <stdio.h>
// klavyeden girilen metindeki ünlü ve ünsüz harf sayısını hesapla

int main() 

{

 int c = 0; // index
  
 int UnluSayaci = 0;  
  
 int UnsuzSayaci = 0;
  
 char s[1000];  
 
 printf("metin girin: ");
 gets(s);
 		
  while(s[c] != '\0')	
  {
  	
   if(s[c]=='a' || s[c]=='A' || s[c]=='e' || s[c]=='E'  || s[c]=='i' || s[c]=='I' || s[c]=='o' || s[c]=='O' || s[c]=='u' || s[c]=='U')
   {
    UnluSayaci++;  
   }	
  
   else if(s[c]=='b' || s[c]=='B' || s[c]=='c' || s[c]=='C' || s[c]=='d' || s[c]=='D' || s[c]=='f' || s[c]=='F' || s[c]=='g' || s[c]=='G' || s[c]=='h' || s[c]=='H' || s[c]=='j' || s[c]=='J' || s[c]=='k' || s[c]=='K' || s[c]=='l' || s[c]=='L' || s[c]=='m' || s[c]=='M' || s[c]=='n' || s[c]=='N' || s[c]=='p' || s[c]=='P' || s[c]=='r' || s[c]=='R' || s[c]=='s' || s[c]=='S'  || s[c]=='t' ||  s[c]=='T' ||  s[c]=='v' || s[c]=='V' || s[c]=='y' ||  s[c]=='Y' || s[c]=='z' || s[c]=='Z' )
   {
    UnsuzSayaci++;
   }
  	
   c++;   	
  }		
	 	
  printf("metindeki unlu harf sayisi: %d\n",UnluSayaci);
 	
  printf("metindeki unsuz harf sayisi: %d",UnsuzSayaci); 
	 	
  return 0;
 
}