#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct {
	uint32_t rollNumber;
	char name[50];
	float score;
	uint32_t age;
}STUDENT_INFO_t;

#define MAX_STUDENT 3

void display_records(STUDENT_INFO_t *base, uint32_t max){

    printf("\n##########################################\n");
    uint32_t i, rollNum;
    STUDENT_INFO_t *ptr = base;
    if(base != NULL){
        for(i = 0; i < max; i++){
            if(base->rollNumber > 0){
                printf("Student %d information:\n",i+1);
                printf("Roll Number:%5d\n", base->rollNumber);
                printf("Name:%5s\n", base->name);
                printf("Score:%5f\n", base->score);
                printf("Age:%5d\n", base->age);
                base++;
            }
            else{
                break;
            }
        }
    }
    if(!i){
        printf("No records found.\n");
    }

    printf("##########################################\n");
}

int checkForDuplicate(STUDENT_INFO_t *ptr, uint32_t rollNum, uint32_t max){
    uint32_t i;
    if(ptr != NULL){
        for(i = 0; i < max; i++){
            if(ptr->rollNumber > 0){
                if(ptr->rollNumber != rollNum){
                    ptr++;
                }
                else{
                    printf("Duplicate records found.\n");
                    return -1;
                }
            }
            else{
                break;
            }
        }
        // records shall be added
        return i;
    }
}

void add_record(STUDENT_INFO_t *base, uint32_t max){

    printf("\n##########################################\n");
    uint32_t i, rollNum;
    STUDENT_INFO_t *ptr = base;
    char name[30];
    if(base != NULL){
        for(i = 0; i < max; i++){
            if(base->rollNumber > 0){
                base++;
            }
            else{
                printf("Enter the roll number:\n");
                scanf("%u",&rollNum);
                int err = checkForDuplicate(ptr, rollNum, max);
                if(err == max){
                    printf("Records cannot be added.\n");
                    break;
                }
                else if(err>=0){
                    base->rollNumber = rollNum;
                    // Clear the input buffer (non-standard approach)
                    printf("Enter the name:\n");
                     // Clear the input buffer before reading the string
                    while (getchar() != '\n'); // Discard leftover newline character
                    scanf("%[^\n]s",name);
                    strcpy(base->name, name);
                    printf("Enter the score:");
                    scanf("%f", &base->score);
                    printf("Enter the age:");
                    scanf("%u", &base->age);
                }
                break;
            }
        }
        if(i == max){
            printf("Records cannot be added. Max reached.\n");
        }
    }

    printf("\n##########################################\n");
}

void delete_record(STUDENT_INFO_t *base, uint32_t max){

    printf("\n##########################################\n");
    uint32_t i = 0, rollNum;
    STUDENT_INFO_t *ptr = base;
    printf("Enter the roll number:\n");
    scanf("%d",&rollNum);
    if(ptr != NULL){
        while(ptr->rollNumber!=rollNum && i < max){
            ptr++;
            i++;
        }
        if(i == max){
            printf("No data found\n");
        }
        else{
            while(i < max-1){
                if(ptr->rollNumber >  0){
                    ptr->rollNumber = (ptr+1)->rollNumber;
                    ptr->age = (ptr+1)->age;
                    ptr->score = (ptr+1)->score;
                    strcpy(ptr->name,(ptr+1)->name);
                    i++;
                    ptr++;
                }
                else{
                    break;
                }
            }
            ptr->rollNumber = 0;
            ptr->age = 0;
            memset(ptr->name, '\0', sizeof(ptr->name));
            ptr->score = 0;

            printf("Record deleted.\n");
        }
    }

    printf("\n##########################################\n");
}

int main(){
#ifdef MAX_STUDENT
    STUDENT_INFO_t student[MAX_STUDENT] = {0};
    uint32_t choice;
    do{
        printf("\n##########################################\n");
        printf("1. Display all records.\n");
        printf("2. Add record.\n");
        printf("3. Delete record.\n");
        printf("0. Exit.\n");
        printf("##########################################\n");
        scanf("%u",&choice);
        switch(choice){
            case 1:
                display_records(student, MAX_STUDENT);
                break;
            case 2:
                add_record(student, MAX_STUDENT);
                break;
            case 3:
                delete_record(student, MAX_STUDENT);
                break;
            case 0:
                printf("Exiting application.\n");
                break;
            default:
                printf("Your choice is invalid\n");
                break;
        }
    }while(choice);
#endif
	return 0;
}
