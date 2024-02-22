#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>

/* FOR TEXT FORMATTING */
void CenterAlignText(const char *text);

/* Functions Declarations*/
void modemsg(void);
void titlemsg(void); 
void UserName(char *firstName, char *otherNames);
void BirthDate(char *year, char *month, char *day);
void GenderChoice(char* gender);
void AskAddress(void);
void AskContact(char *phone, char *mail);
int SubmitOrCorrect(void); 

#endif

