#include "main.h"

/* Display Model Infos*/
void modemsg(void)
{
    CenterAlignText("--- ONLINE REGISTRATION FORM TEMPLATE ---\n");
    printf("This is for learning purposes and no information will be saved.\n");
    printf("--------------------------------------------------------\n");
    printf("RELEASE DATE: \033[2m22-02-2024\033[0m\n");
    printf("RELEASE TIME: \033[2m16:54 GMT\033[0m\n");
    printf("AUTHOR: Kelvin Nyantakyi Owusu \033[1m<@qelvyn99>\033[0m\n");
    printf("--------------------------------------------------------\n\n\n\n");
}

/* Display Message*/
void titlemsg(void)
{
    CenterAlignText("\033[31mABC REGISTRATION FORMS\033[0m");
    CenterAlignText("=====================================");


    printf("\nPlease fill out the form for registration.\n");
}


