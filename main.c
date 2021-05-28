
#include "dictionary.h"
#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"



int main(void){
    char* temp2,* temp;
    struct dictionary_t* n1;
    //allocate memory for filename
    char* tab=(char*)calloc(40, sizeof(char));
    if(tab==NULL){
        printf("Failed to allocate memory");
        return 8;
    }
    //input filename
    printf("Input filename: ");
    if(scanf("%50[^\n]%*c", tab)==0){
        printf("Incorrect input");
        free(tab);
        return 1;
    }
    //clear buffer
    fseek(stdin, 0, SEEK_SET);

    //check if filename is proper
    if(strcmp(tab+strlen(tab)-4,".txt")!=0&&strcmp(tab+strlen(tab)-4,".bin")!=0){
        free(tab);
        printf("Incorrect input data");
        return 2;
    }
    int choice=0;
    //choose to read from binary file or from text file
    printf("Choose 0(bin) or 1(txt): ");
    if(scanf("%d", &choice)!=1){
        printf("Incorrect input");
        free(tab);
        return 1;
    }
    //check if choice i s proper
    if(choice!=0&&choice!=1){
        printf("Incorrect input data");
        free(tab);
        return 2;
    }
    //creating structure by reading from binary file
    if(choice==0){
        int error=0;
        n1=load_dictionary_b(tab, &error);
        switch (error){
            case 0:
                break;
            case 2:
                printf("Couldn't open file");
                free(tab);
                return 4;
            case 3:
                printf("File corrupted");
                free(tab);
                return 6;
            case 4:
                printf("Failed to allocate memory");
                free(tab);
                return 8;
            default:
                break;
        }
    }
    //creating structure by reading from txt file
    else{
        FILE * fp=fopen(tab, "rt");
        if(fp==NULL){
            free(tab);
            printf("Couldn't open file");
            return 4;
        }
        int error;
        n1= create_dictionary(10, &error);
        if(error!=0||n1==NULL){
            free(tab);
            fclose(fp);
            printf("Failed to allocate memory");
            return 8;
        }
        //loop which reads subsequent words to dictionary
        while(1) {
            int i = 0, flag = 0;
          //reading words
            while (i < 50) {
                char c;
                if (fscanf(fp, "%c", &c) != 1) {
                    flag++;
                    break;
                }
                if (isalpha(c) != 0) {
                    *(tab + i) = c;
                    i++;
                } else if (c == ' '||c=='\n') {
                    break;
                }

            }
            if (flag > 0&&i==0) {
                break;
            }

            if (*tab == '\0') {
                continue;
            }
            *(tab+i)='\0';
            //add loaded word to dictionary
            if (dictionary_add_word(n1, tab) != 0) {
                free(tab);
                fclose(fp);
                printf("Failed to allocate memory");
                destroy_dictionary(&n1);
                return 8;
            }
            if(flag>0){break;}
        }
        fclose(fp);

    }
    int len=strlen(tab);
    //allocate memory for new filename with appended _alpha
    temp=realloc(tab, len+1+6);
    if(temp==NULL){
        free(tab);
        printf("Failed to allocate memory");  destroy_dictionary(&n1);  return 8;
    }
    int aux=len-4;
    //append _alpha to filename
        strcpy(temp+aux,"_alpha.bin");

        //sort words in dictionary alphabetically
    dictionary_sort_alphabetically(n1);
    //save sorted dictionary to file
    if(save_dictionary_b(n1, temp)!=0){
        printf("Couldn't create file\n");
    }
    else{
        printf("File saved\n");
    }

    //////////////////
    //alloc memory to append _occ to filename
    temp2=realloc(temp, len+1+4);
    if(temp2==NULL){
        printf("Failed to allocate memory");
        free(temp);
        destroy_dictionary(&n1); return 8;
    }
    //append _occ to filename
        strcpy(temp2+aux,"_occ.bin");
    //sort words in dictionary by number of given words in file
    dictionary_sort_occurence(n1);
    //save sorted dictionary to file
    if(save_dictionary_b(n1, temp2)!=0){
        printf("Couldn't create file\n");
    }
    else{
        printf("File saved\n");
    }
//free filename
    free(temp2);
    //free struct/dictionary
    destroy_dictionary(&n1);
    return 0;

}
