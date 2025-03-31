void caesarCipher(char message[100],int shift,char encrypted[100]){
    while(message<0){
       int character = message % 10;
        encrypted = character + shift;
        message = message/10;
    }

}