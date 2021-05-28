/*
 * Test dla zadania Słownik - sortowanie
 * Autor testowanej odpowiedzi: Dariusz Majcherczyk
 * Test wygenerowano automatycznie o 2021-05-27 16:01:15.257360
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        #include "dictionary.h"
        
        struct word_count_t;
        struct dictionary_t;

        struct dictionary_t* create_dictionary(int N, int *err_code);
        void destroy_dictionary(struct dictionary_t** d);
        struct word_count_t* dictionary_find_word(const struct dictionary_t *d, const char *word);
        void dictionary_display(const struct dictionary_t *d);
        int dictionary_add_word(struct dictionary_t *d, const char *word);
        
        int dictionary_sort_alphabetically(struct dictionary_t *d);
        int dictionary_sort_occurence(struct dictionary_t *d);
        int save_dictionary_b(const struct dictionary_t *d, const char *filename);
        struct dictionary_t* load_dictionary_b(const char *filename, int *err_code);

    

#endif // _TESTED_DECLARATIONS_H_