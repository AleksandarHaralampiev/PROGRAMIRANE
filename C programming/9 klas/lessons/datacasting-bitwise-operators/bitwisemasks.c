#include <stdio.h>

int main(){
    unsigned char lights = 0;//0000 0000
    unsigned char lights1 = 1<<0; //0000 0001
    unsigned char lights2 = 1<<1; //0000 0010
    unsigned char lights3 = 1<<2; //0000 0100
    unsigned char lights4 = 1<<3; //0000 1000
    unsigned char lights5 = 1<<4; //0001 0000
    unsigned char lights6 = 1<<5; //0010 0000
    unsigned char lights7 = 1<<6; //0100 0000
    unsigned char lights8 = 1<<7; //1000 0000

    lights = lights | lights4;
    lights = lights | lights7;
    for(int i = 7; i >= 0; i--){
        printf("%d", (lights>>i)&1);
    }
    int isLight4on = (lights & lights4) == lights4;
    printf("\nisLight4on = %d\n", isLight4on);
    int isLight5on = (lights & lights5) == lights5;
    printf("isLight5on = %d\n", isLight5on);
    
    int light = lights & (~lights4);
    
    return 0;
}
