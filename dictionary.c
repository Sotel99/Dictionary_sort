#include "dictionary.h"
#include "tested_declarations.h"
#include "rdebug.h"


#include "dictionary.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"





//function which compares strings
int function_to_compare_strings(char *string11, char *string22) {
    int i;
    for (i = 0; *(string11 + i) && *(string22 + i); i++) {

        if ((*(string11 + i) >= 'A' && *(string11 + i) <= 'Z') && (*(string22 + i) >= 'A' && *(string22 + i) <= 'Z')) {

            if (*(string11 + i) > *(string22 + i)) {
                return 2;
            } else if (*(string11 + i) < *(string22 + i)) {
                return 1;
            }
        } else if ((*(string11 + i) >= 'a' && *(string11 + i) <= 'z') &&
                   (*(string22 + i) >= 'a' && *(string22 + i) <= 'z')) {

            if (*(string11 + i) > *(string22 + i)) {
                return 2;
            } else if (*(string11 + i) < *(string22 + i)) {
                return 1;
            }

        } else if ((*(string11 + i) >= 'A' && *(string11 + i) <= 'Z') &&
                   (*(string22 + i) >= 'a' && *(string22 + i) <= 'z')) {
            return 1;
        } else if ((*(string11 + i) >= 'a' && *(string11 + i) <= 'z') &&
                   (*(string22 + i) >= 'A' && *(string22 + i) <= 'Z')) {

            return 2;
        }
    }

    if (((*(string11 + i) == '\x0')) && (*(string22 + i) == '\x0'))
        return 0;
    if ((*(string11 + i) == '\x0'))
        return 1;
    if ((*(string22 + i) == '\x0'))
        return 2;

    return 0;

}

int dictionary_sort_alphabetically(struct dictionary_t *d)
{
    if (d == NULL)
        return 1;
    if (d->wc == NULL)
        return 1;
    if (d->size < 0 || d->capacity < 0 || d->capacity < d->size || d->wc == NULL)
        return 1;

    int sth1 = 0;
    int i, j, n;
    n = d->size;
    for (i = 0; i < n - 1; i++)
    {
        sth1 = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (function_to_compare_strings((d->wc + j)->word, (d->wc + j + 1)->word) == 2)
            {
                char * let = (d->wc + j)->word;
                int temporary = (d->wc + j)->counter;
                (d->wc + j)->word = (d->wc + j + 1)->word;
                (d->wc + j)->counter = (d->wc + j + 1)->counter;
                (d->wc + j + 1)->word = let;
                (d->wc + j + 1)->counter = temporary;
                sth1 = 1;
            }
        }


        if (sth1 == 0)
            break;
    }

    return 0;
}

int dictionary_sort_occurence(struct dictionary_t *d)
{


    if (d == NULL)
        return 1;
    if (d->wc == NULL)
        return 1;
    if (d->size < 0 || d->capacity < 0 || d->capacity < d->size || d->wc == NULL)
        return 1;

    int i, j, n;
    n = d->size;
    int sth1 = 0;
    for (i = 0; i < n - 1; i++)
    {
        sth1 = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if ((d->wc + j)->counter  <  (d->wc + j + 1)->counter )
            {
                char * let = (d->wc + j)->word;
                int temporary = (d->wc + j)->counter;
                (d->wc + j)->word = (d->wc + j + 1)->word;
                (d->wc + j)->counter = (d->wc + j + 1)->counter;
                (d->wc + j + 1)->word = let;
                (d->wc + j + 1)->counter = temporary;
                sth1 = 1;
            }

            if((d->wc + j)->counter  ==  (d->wc + j + 1)->counter)
                if (function_to_compare_strings((d->wc + j)->word, (d->wc + j + 1)->word) == 2)
                {
                    char * let = (d->wc + j)->word;
                    int temporary = (d->wc + j)->counter;
                    (d->wc + j)->word = (d->wc + j + 1)->word;
                    (d->wc + j)->counter = (d->wc + j + 1)->counter;
                    (d->wc + j + 1)->word = let;
                    (d->wc + j + 1)->counter = temporary;
                    sth1 = 1;
                }
        }

        if (sth1 == 0)
            break;
    }



    return 0;
}

int save_dictionary_b(const struct dictionary_t *d, const char *filename)
{
    if (d == NULL || filename == NULL)
        return 1;
    if(d->size<=0 || d->capacity <=0|| d->wc == NULL)
        return 1;
    FILE*f = fopen(filename, "wb");
    if (f == NULL)
        return 2;
    fwrite(&d->size, sizeof(int), 1, f);
    for(int i = 0 ; i < d->size ; i ++)
    {
        int len = strlen((d->wc + i)->word);
        fwrite(&len, sizeof(int),1, f);
        fwrite((d->wc + i)->word, len, 1, f);
        fwrite(&(d->wc + i)->counter, sizeof(int), 1, f);
    }
    fclose(f);
    return 0;

}

struct dictionary_t* load_dictionary_b(const char *filename, int *err_code)
{

    if (filename == NULL)
    {
        if (err_code != NULL)
            *err_code = 1;
        return NULL;
    }
    struct dictionary_t* d= (struct dictionary_t*)malloc(sizeof(struct dictionary_t));;
    if (d == NULL)
    {
        if (err_code != NULL)
            *err_code = 4;
        return NULL;
    }
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        if (err_code != NULL)
            *err_code = 2;
        free(d);
        return NULL;
    }
    if (strstr(filename, ".txt"))
    {
        if (err_code != NULL)
            *err_code = 3;
        free(d);
        fclose(fp);
        return NULL;
    }
    int loadvar;
    loadvar = fread(&d->size, sizeof(int), 1, fp);
    if (loadvar == 0 || d->size<=0)
    {
        if (err_code != NULL)
            *err_code = 3;
        fclose(fp);
        free(d);
        return NULL;
    }
    d->capacity = d->size;
    d->wc = malloc(sizeof(struct word_count_t)*d->size);
    if (d->wc == NULL)
    {
        if (err_code != NULL)
            *err_code = 4;
        fclose(fp);
        free(d);
        return NULL;
    }
    d->size = 0;

    for (int i = 0 ; i < d->capacity; i++, d->size++)
    {
        int len;
        loadvar = fread(&len, sizeof(int), 1, fp);
        if (loadvar == 0 || len<=0)
        {
            if (err_code != NULL)
                *err_code = 3;
            fclose(fp);
            destroy_dictionary(&d);
            return NULL;
        }
        (d->wc + i)->word = (char*)malloc(len + 1);
        if((d->wc + i)->word == NULL)
        {
            if (err_code != NULL)
                *err_code = 4;
            fclose(fp);
            destroy_dictionary(&d);
            return NULL;
        }
        *((d->wc + i)->word + len) = 0;
        loadvar = fread((d->wc + i)->word, len, 1, fp);
        if(loadvar == 0)
        {
            if (err_code != NULL)
                *err_code = 3;
            fclose(fp);
            destroy_dictionary(&d);
            return NULL;
        }
        loadvar = fread(&(d->wc + i)->counter, 4, 1, fp);
        if (loadvar == 0|| (d->wc + i)->counter<=0)
        {
            if (err_code != NULL)
                *err_code = 3;
            fclose(fp);
            destroy_dictionary(&d);
            return NULL;
        }
    }

    fclose(fp);
    return d;
}
//////////////////////////
struct dictionary_t* create_dictionary(int N, int *err_code){
    int fl=0;
    if(err_code==NULL){fl++;}
    else{*err_code=0;}

    if(N<1){if(fl==0){ *err_code=1;} return NULL;}

    struct dictionary_t* n1=(struct dictionary_t*)calloc(1, sizeof(struct dictionary_t));
    if(n1==NULL){
        if(fl==0){*err_code=2;}
        return NULL;
    }

    n1->wc=(struct word_count_t*)calloc(N, sizeof(struct word_count_t));
    if(n1->wc==NULL){
        if(fl==0){ *err_code=2;}
        free(n1); return NULL;
    }

    n1->size=0;
    n1->capacity=N;
    return n1;
}

void destroy_dictionary(struct dictionary_t** d){
    if(d==NULL||*d==NULL||(*d)->capacity<1||(*d)->size>(*d)->capacity){}
    else{
        for(int i=0; i<(*d)->size; i++){
            free(((*d)->wc+i)->word);
        }
        free((*d)->wc);
        if(*d!=NULL)
            free(*d);

    }
}
struct word_count_t* dictionary_find_word(const struct dictionary_t *d, const char *word){
    if(d==NULL||word==NULL||d->capacity<1||d->size>d->capacity||d->wc==NULL||d->size<0){return NULL;}

    for(int i=0; i<d->size; i++){
        if(strcmp((d->wc+i)->word,word)==0){
            return d->wc+i;
        }
    }
    return NULL;
}

int dictionary_add_word(struct dictionary_t *d, const char *word){
    if(d==NULL||word==NULL||d->capacity<1||d->size>d->capacity||d->wc==NULL||d->size<0){return 1;}
    //checking if there is already such word in dictionary
    struct word_count_t* n1= dictionary_find_word(d, word);
    if(n1!=NULL){
        ++(n1->counter);
        return 0;
    }

    if(d->size==d->capacity){
        struct word_count_t* temp=(struct word_count_t*)realloc(d->wc, d->capacity*2*sizeof(struct word_count_t));
        if(temp==NULL){return 2;}
        d->wc=temp;
        d->capacity*=2;
    }
    (d->wc+d->size)->word= (char*)calloc(strlen(word)+1, sizeof(char));
    if((d->wc+d->size)->word==NULL){return 2;}

    strcpy((d->wc+d->size)->word, word);
    (d->wc+d->size)->counter=1;
    d->size++;
    return 0;
}

void dictionary_display(const struct dictionary_t *d){
    if(d==NULL||d->size<1||d->capacity<1||d->size>d->capacity||d->wc==NULL){}
    else {
        for (int i = 0; i < d->size; i++) {
            printf("%s %d\n", (d->wc + i)->word, (d->wc + i)->counter);
        }
    }
}

