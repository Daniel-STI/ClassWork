#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    string password;
    password=get_string("Enter your password: ");
    bool up=0,lo=0,num=0,sym=0;
    int t;
    for(int i=0;i<strlen(password);i++){
        t=(int)password[i];
        if(t>=65&&t<=90)
            up=1;
        else if(t>=97&&t<=122)
            lo=1;
        else if(t>=48&&t<=57)
            num=1;
        else if((t>=33&&t<=47)||(t>=58&&t<=64)||(t>=91&&t<=96)||(t>=123&&t<=127))
            sym=1;
        if(up==1&&lo==1&&num==1&&sym==1){
            printf("Your password is valid\n");
            return 0;
        }
    }
    printf("Your password needs at least one uppercase letter, one lowercase letter, number and symbol!\n");
    return 0;
}
