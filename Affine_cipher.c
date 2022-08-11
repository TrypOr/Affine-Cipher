#include<stdio.h>
#include<string.h>
#include <assert.h>
#include <stdlib.h>
/*Helper function to inverse a*/
int GetMultiplicativeInverse(int a)
{
    int i,MI;
 for(i=1;i<=a;i++)
 {
  MI=((i*26)+1);
  if(MI%a==0)
  {
   break;
  }
 }
 MI=MI/a;
 return(MI);
}

void affine_encr(char* plaintext){
    int i,a=11,b=19,m=26;
    char encrypted[100],converted[100];
     for(i=0;i<strlen(plaintext);i++)
 {
  if(plaintext[i]!=' ')
  converted[i]=plaintext[i]-'A';
  else
  converted[i]=-20;
 }
    printf("\nAffine Cipher encrypted message is :");   
    for(i=0;i<strlen(plaintext);i++)
    {
     if(converted[i]!=-20)
     {
     encrypted[i]=((a*converted[i])+b)%m;
          printf("%c",(encrypted[i]+'A'));         
     }
     else
     {
          printf(" ");      
     }
    }
printf("\n");
}


void affine_decr(char* ciphertext){
       int i,a=11,b=19,m=26,a_inv;
       char decrypted[100],converted[100];
 for(i=0;i<strlen(ciphertext);i++)
 {
  if(ciphertext[i]!=' ')
  converted[i]=ciphertext[i]-'A';
  else
  converted[i]=-20;
 }
       a_inv=GetMultiplicativeInverse(a);
        printf("Affine Cipher encrypted message is :");   
    for(i=0;i<strlen(ciphertext);i++)
    {
     if(converted[i]!=-20)
     {
        decrypted[i]=((a_inv)*(converted[i]-b))%m;
        if(decrypted[i]<0) /*Needed if to avoid negative's*/
        {
        decrypted[i]=decrypted[i]+26;
        }
            printf("%c",(decrypted[i]+'A'));         
            
     }
     else
     {
          printf(" ");      
     }
    }
printf("\n");
}
/*Function to test affine cipher*/
int main(void){
 char test[]="AFFINE CIPHER";
 char en_test[]="TWWDGL PDCSLY";
 char test2[]="ATTACKWHILEASLEEP";
 char en_test2[]="TUUTPZBSDKLTJKLLC";
  char test3[]="CRYPTOGRAPHYTEST";
 char en_test3[]="PYXCURHYTCSXULJU";
  /*AFFINE  CIPHER TEST 1*/
    printf("\n AFFINE CIPHER TEST 1:");
    affine_encr(test);
    affine_decr(en_test);
     /*AFFINE  CIPHER TEST 2*/
    printf("\n AFFINE CIPHER TEST 2:");
    affine_encr(test2);
    affine_decr(en_test2);
     /*AFFINE  CIPHER TEST 3*/
    printf("\n AFFINE CIPHER TEST 3:");
    affine_encr(test3);
    affine_decr(en_test3);
    return 0;
}
