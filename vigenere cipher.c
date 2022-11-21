#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[] = "SAMIRRAI";
    char key[] = "AIR";
    int msgLength = strlen(msg), keyLength = strlen(key), i, j;
 
    char newKey[msgLength], encryptedMsg[msgLength], decryptedMsg[msgLength];
 
    //generating new key
    for(i = 0, j = 0; i < msgLength; ++i, ++j){
        if(j == keyLength)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLength; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
    //decryption
    for(i = 0; i < msgLength; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i])+26) % 26) + 'A';
 
    decryptedMsg[i] = '\0';
 
    printf("Full Name: %s", msg);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedMsg);
    printf("\nDecrypted Message: %s", decryptedMsg);
 
return 0;
}
    
    
    
  