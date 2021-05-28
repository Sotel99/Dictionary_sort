/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Słownik - sortowanie
 * Autor testowanej odpowiedzi: Dariusz Majcherczyk
 * Test wygenerowano automatycznie o 2021-05-27 16:01:15.250325
 *
 * Debug: 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <signal.h>
#include <setjmp.h>
#include <assert.h>

#if !defined(__clang__) && !defined(__GNUC__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na swoim kompilatorze C.
#error System testow jednostkowych jest przeznaczony dla kompilatorów GCC/Clang.
#endif

#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na platformie Windows.
#error System testow jednostkowych NIE jest przeznaczony dla testów uruchamianych na platformach Windows.
#endif

#define _RLDEBUG_API_
#include "unit_helper_v2.h"
#include "rdebug.h"

#include "tested_declarations.h"
#include "rdebug.h"

//
// Elementy globalne dla całego testu
//




//
//  Test 1: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(720);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(44, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 44, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 44, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(11680);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 2;

                arr = create_dictionary(729, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 729, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 729, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152064);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(9503, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 9503, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9503, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 3;

                arr = create_dictionary(0, &err_code);

                test_error(err_code == 1, "Funkcja create_dictionary() przypisać kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 0, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji create
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 3;

                arr = create_dictionary(-33, &err_code);

                test_error(err_code == 1, "Funkcja create_dictionary() przypisać kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -33, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -33, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(720);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(44, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 44, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 44, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(11680);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(729, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 729, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 729, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152064);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(9503, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 9503, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9503, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji create
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(0, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 0, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji create
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(-33, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -33, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -33, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 1;

                arr = create_dictionary(100, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(100, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1600);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 3;

                arr = create_dictionary(100, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(100, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(100, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1600);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(100, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji create
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            destroy_dictionary(NULL);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "gold", "truck", "slow", "turn", "quick", "type" };
            char *add_word = "found";

            struct dictionary_t *arr;

            arr = create_dictionary(6, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 6; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 6, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 6 na %d", arr->capacity);
            }

            for (int i = 0; i < 6; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(arr->size == 7, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 7, arr->size);
            test_error(arr->capacity == 12, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 12 na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 6; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            test_error(strcmp((arr->wc + 6)->word, add_word) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", 6, add_word, (arr->wc + 6)->word);
            test_error((arr->wc + 6)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + 6)->word, 1, (arr->wc + 6)->counter);

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "found";

            struct dictionary_t *arr;

            arr = create_dictionary(6, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -7;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "found";

            struct dictionary_t *arr;

            arr = create_dictionary(6, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -5;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;
            arr->capacity = 6;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "found";

            struct dictionary_t *arr;

            arr = create_dictionary(6, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "found";

            int err_code = dictionary_add_word(NULL, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct dictionary_t arr;

            int err_code = dictionary_add_word(&arr, NULL);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_add_word(NULL, NULL);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "thank", "raise", "should", "clock", "sudden", "cow", "could", "record", "new", "two", "coat", "shape", "were", "bottom", "head", "surprise", "hope", "hope", "record", "clock", "clock", "could", "head", "hope", "sudden", "clock", "head", "sudden", "record", "head", "hope", "new", "could", "two" };
            const int array[] = {1, 1, 1, 4, 3, 1, 3, 3, 2, 2, 1, 1, 1, 1, 4, 1, 4};

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (int i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            for (int i = 17; i < 34; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == 17, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 17, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (int i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == array[i], "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, array[i], (arr->wc + i)->counter);
            }

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 211 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 211 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(211);
    
    //
    // -----------
    //
    

                char *tab[] = { "show", "just", "hope", "love", "strong", "moment", "often", "five", "story" };
                char *add_word = "lay";

                struct dictionary_t *arr;

                arr = create_dictionary(9, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 9, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
                }

                for (int i = 0; i < 9; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                int err_code = dictionary_add_word(arr, add_word);

                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 9, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 9, arr->size);
                test_error(arr->capacity == 9, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(355);
    
    //
    // -----------
    //
    

                char *tab[] = { "show", "just", "hope", "love", "strong", "moment", "often", "five", "story" };
                char *add_word = "lay";

                struct dictionary_t *arr;

                arr = create_dictionary(9, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 9, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
                }

                for (int i = 0; i < 9; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                int err_code = dictionary_add_word(arr, add_word);

                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 9, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 9, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(355);
    
    //
    // -----------
    //
    

            char *tab[] = { "show", "just", "hope", "love", "strong", "moment", "often", "five", "story" };
            char *add_word = "lay";

            struct dictionary_t *arr;

            arr = create_dictionary(18, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 18, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 18, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);
            }

            for (int i = 0; i < 9; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(arr->size == 9, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 9, arr->size);
            test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "are", "oil", "path", "sent", "offer", "true", "among", "answer", "electric", "know", "listen", "most", "as", "learn", "chair", "our", "duck", "twenty" };

            struct dictionary_t *arr;

            arr = create_dictionary(18, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 18, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 18, a ustawiła na %d", arr->capacity);


            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 18; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);
            }

            for (i = 0; i < 18; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t* wc = dictionary_find_word(arr, *(tab + 12));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 12)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 12), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);


            wc = dictionary_find_word(arr, *(tab + 0));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 0)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 0), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            wc = dictionary_find_word(arr, *(tab + 18 - 1));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 18 - 1)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 18 - 1), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            for (i = 0; i < 5; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + 12));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(strcmp((arr->wc + 12)->word, *(tab + 12)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", 12, *(tab + 12), (arr->wc + 12)->word);
                test_error((arr->wc + 12)->counter == i + 2, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + 12)->word, i + 2, (arr->wc + 12)->counter);
            }


            wc = dictionary_find_word(arr, *(tab + 12));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 12)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 12), wc->word);
            test_error(wc->counter == 5 + 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 5 + 1, wc->counter);


            wc = dictionary_find_word(arr, "record");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "excite", "those", "lost", "them", "feet", "skin", "mind", "observe", "fresh", "sing", "great", "heard", "method", "down", "like", "language", "speak", "hear", "been" };

                struct dictionary_t *arr;

                arr = create_dictionary(19, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 19; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
                }

                for (i = 0; i < 19; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }


                struct word_count_t* wc = dictionary_find_word(arr, "['l', 'lo', 'los', 'lo']");
                test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "excite", "those", "lost", "them", "feet", "skin", "mind", "observe", "fresh", "sing", "great", "heard", "method", "down", "like", "language", "speak", "hear", "been" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -4;

            struct word_count_t* wc = dictionary_find_word(arr, "['l', 'lo', 'los', 'lo']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 19;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "excite", "those", "lost", "them", "feet", "skin", "mind", "observe", "fresh", "sing", "great", "heard", "method", "down", "like", "language", "speak", "hear", "been" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -9;
            arr->capacity = arr->size + 1;

            struct word_count_t* wc = dictionary_find_word(arr, "['l', 'lo', 'los', 'lo']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 19;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "excite", "those", "lost", "them", "feet", "skin", "mind", "observe", "fresh", "sing", "great", "heard", "method", "down", "like", "language", "speak", "hear", "been" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            struct word_count_t* wc = dictionary_find_word(arr, "['l', 'lo', 'los', 'lo']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "excite", "those", "lost", "them", "feet", "skin", "mind", "observe", "fresh", "sing", "great", "heard", "method", "down", "like", "language", "speak", "hear", "been" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t* wc = dictionary_find_word(arr, NULL);
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "['l', 'lo', 'los', 'lo']";

            struct word_count_t* wc = dictionary_find_word(NULL, add_word);
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct word_count_t* wc = dictionary_find_word(NULL, NULL);

            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Velit" };
                char *sorted_tab[] = { "Velit" };
                int sorted_count[] = { 1 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(1, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 1; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 1, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Velit", "numquam" };
                char *sorted_tab[] = { "Velit", "numquam" };
                int sorted_count[] = { 1, 1 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(2, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 2; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 2, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 2, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Velit", "numquam", "modi", "aliquam", "neque", "tempora", "Aliquam", "aliquam", "etincidunt", "tempora", "Amet", "eius", "velit", "dolor", "Quaerat", "quiquia", "etincidunt", "eius", "modi", "consectetur", "dolore", "Porro", "dolor", "neque", "ut", "Tempora", "eius", "sit", "neque", "modi", "adipisci", "Tempora", "ipsum", "quaerat", "etincidunt", "sed", "Quisquam", "labore", "etincidunt", "dolor", "porro", "magnam", "eius", "Quisquam", "consectetur", "non", "eius", "dolor", "modi", "numquam", "aliquam", "Quiquia", "sit", "ut", "eius", "modi", "porro", "tempora", "Quaerat", "sit", "est", "amet", "porro", "Sit", "dolorem", "magnam", "magnam", "Sit", "consectetur", "quiquia", "quiquia", "Quisquam", "sed", "etincidunt", "aliquam", "eius", "ipsum", "Magnam", "modi", "dolore", "sed", "voluptatem", "voluptatem", "porro", "porro", "Dolor", "numquam", "eius", "est", "dolore", "sed", "labore", "dolore", "Tempora", "aliquam", "ipsum", "neque", "est", "Dolore", "est", "sit", "sit", "non", "sit", "Dolor", "sit", "sed", "magnam", "quisquam", "Adipisci", "aliquam", "modi", "porro", "etincidunt", "magnam", "modi" };
                char *sorted_tab[] = { "Adipisci", "Aliquam", "Amet", "Dolor", "Dolore", "Magnam", "Porro", "Quaerat", "Quiquia", "Quisquam", "Sit", "Tempora", "Velit", "adipisci", "aliquam", "amet", "consectetur", "dolor", "dolore", "dolorem", "eius", "est", "etincidunt", "ipsum", "labore", "magnam", "modi", "neque", "non", "numquam", "porro", "quaerat", "quiquia", "quisquam", "sed", "sit", "tempora", "ut", "velit", "voluptatem" };
                int sorted_count[] = { 1, 1, 1, 2, 1, 1, 1, 2, 1, 3, 2, 3, 1, 1, 6, 1, 3, 4, 4, 1, 8, 4, 6, 3, 2, 5, 8, 4, 2, 3, 6, 1, 3, 1, 5, 7, 3, 2, 1, 2 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(116, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 116, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 116, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 116; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 40, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 40, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 40; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Etincidunt", "tempora", "est", "neque", "etincidunt", "velit", "aliquam", "Quiquia", "sed", "neque", "sit", "quaerat", "adipisci", "dolore", "dolor", "Voluptatem", "dolor", "quaerat", "non", "Adipisci", "quiquia", "quaerat", "ut", "etincidunt", "sed", "Adipisci", "labore", "dolore", "etincidunt", "Sed", "eius", "dolore", "neque", "labore", "Magnam", "aliquam", "labore", "labore", "Non", "neque", "dolorem", "dolor", "ut", "labore", "Modi", "ipsum", "ut", "tempora", "voluptatem", "quiquia", "tempora", "Sit", "consectetur", "dolor", "dolor", "ut", "ipsum", "Quaerat", "est", "eius", "ipsum", "dolore", "Velit", "amet", "dolore", "adipisci", "ut", "modi", "adipisci", "Amet", "non", "amet", "magnam", "dolorem", "adipisci", "non", "quisquam", "Sed", "quaerat", "modi", "sit", "Voluptatem", "ut", "porro", "magnam", "eius", "consectetur", "non", "Ipsum", "ut", "tempora", "quisquam", "consectetur", "numquam", "ut", "Adipisci", "ut", "modi", "consectetur", "aliquam", "neque", "labore", "Velit", "eius", "eius", "non", "sit", "dolor", "Dolorem", "quisquam", "ipsum", "numquam", "labore", "amet", "magnam", "Sed", "sit", "dolor", "etincidunt", "sed", "dolor", "Voluptatem", "eius", "quiquia", "dolorem", "neque", "quiquia", "amet", "Quisquam", "dolore", "etincidunt", "sed", "voluptatem", "ut", "eius", "Modi", "voluptatem", "ipsum", "quisquam", "Voluptatem", "modi", "velit", "labore", "sit", "Dolore", "dolore", "porro", "sed", "quaerat", "Labore", "sed", "ut", "dolorem", "tempora", "Dolorem", "amet", "consectetur", "consectetur", "magnam", "ipsum", "voluptatem", "dolorem", "Ipsum", "porro", "adipisci", "aliquam", "adipisci", "magnam", "dolorem", "numquam", "Aliquam", "tempora", "sed", "quiquia", "numquam", "tempora", "aliquam", "labore", "Porro", "quisquam", "tempora", "ut", "porro", "magnam", "modi", "Numquam", "numquam", "sed", "dolore", "dolor", "voluptatem", "modi", "est", "Dolor", "neque", "velit", "dolorem", "ipsum", "etincidunt", "quiquia", "velit", "Consectetur", "aliquam", "adipisci", "quaerat", "Sed", "dolore", "magnam", "etincidunt", "aliquam", "porro", "est", "Magnam", "adipisci", "quisquam", "quisquam", "modi", "tempora", "est", "Ut", "ipsum", "dolor", "ipsum", "tempora", "amet", "Velit", "quaerat", "consectetur", "dolorem", "Ut", "modi", "aliquam", "sit", "Magnam", "modi", "voluptatem", "quisquam", "tempora", "magnam", "labore", "Modi", "dolore", "dolorem", "quisquam", "sed", "Voluptatem", "sed", "labore", "numquam", "Sit", "ut", "sit", "ipsum", "etincidunt", "neque", "dolore", "Magnam", "quaerat", "velit", "est", "consectetur", "non", "Ut", "sed", "dolorem", "labore", "neque", "consectetur", "porro", "Modi", "modi", "non", "non", "dolore", "neque", "Ut", "sed", "non", "non", "neque", "porro", "Sit", "dolore", "dolor", "sed", "velit", "amet", "quiquia", "magnam", "Est", "modi", "dolor", "adipisci", "quaerat", "ipsum", "magnam", "Ipsum", "velit", "quiquia", "magnam", "Tempora", "eius", "dolorem", "magnam", "Velit", "quisquam", "magnam", "dolore", "Dolor", "velit", "quiquia", "porro", "Quisquam", "eius", "adipisci", "amet", "voluptatem", "labore", "voluptatem", "Aliquam", "dolorem", "ut", "sit", "Adipisci", "ipsum", "sed", "modi", "dolor", "dolore", "porro", "modi", "Neque", "dolorem", "porro", "ut", "aliquam", "etincidunt", "numquam", "Adipisci", "quisquam", "modi", "dolor", "dolor", "est", "non", "Neque", "dolorem", "sed", "adipisci", "Ipsum", "labore", "voluptatem", "dolorem", "ipsum", "neque", "quisquam", "tempora", "Magnam", "tempora", "ipsum", "neque", "sit", "sit", "Numquam", "consectetur", "quaerat", "quisquam", "sed", "Neque", "numquam", "velit", "magnam", "dolor", "consectetur", "non", "Voluptatem", "amet", "sit", "est", "est", "est", "adipisci", "adipisci", "Est", "voluptatem", "porro", "neque", "Dolorem", "amet", "consectetur", "tempora", "Numquam", "tempora", "non", "tempora", "etincidunt", "amet", "quaerat", "numquam", "Quaerat", "non", "neque", "neque", "etincidunt", "sit", "adipisci", "Quaerat", "velit", "consectetur", "quisquam", "quiquia", "etincidunt", "ut", "non" };
                char *sorted_tab[] = { "Adipisci", "Aliquam", "Amet", "Consectetur", "Dolor", "Dolore", "Dolorem", "Est", "Etincidunt", "Ipsum", "Labore", "Magnam", "Modi", "Neque", "Non", "Numquam", "Porro", "Quaerat", "Quiquia", "Quisquam", "Sed", "Sit", "Tempora", "Ut", "Velit", "Voluptatem", "adipisci", "aliquam", "amet", "consectetur", "dolor", "dolore", "dolorem", "eius", "est", "etincidunt", "ipsum", "labore", "magnam", "modi", "neque", "non", "numquam", "porro", "quaerat", "quiquia", "quisquam", "sed", "sit", "tempora", "ut", "velit", "voluptatem" };
                int sorted_count[] = { 5, 2, 1, 1, 2, 1, 3, 2, 1, 4, 1, 5, 4, 3, 1, 3, 1, 3, 1, 2, 4, 3, 1, 4, 4, 6, 14, 9, 11, 13, 16, 15, 15, 9, 10, 12, 14, 14, 14, 14, 16, 15, 9, 11, 11, 10, 14, 16, 12, 16, 16, 10, 10 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(414, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 414, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 414, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 414; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 53, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 53, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 53; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "science", "winter", "home", "connect", "thought", "student", "that", "claim", "single", "study", "fast", "ground", "door", "speech", "sail", "sheet", "whose", "probable", "born", "success" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -6;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
        
            arr->size = 20;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "science", "winter", "home", "connect", "thought", "student", "that", "claim", "single", "study", "fast", "ground", "door", "speech", "sail", "sheet", "whose", "probable", "born", "success" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -8;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 20;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "science", "winter", "home", "connect", "thought", "student", "that", "claim", "single", "study", "fast", "ground", "door", "speech", "sail", "sheet", "whose", "probable", "born", "success" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_sort_alphabetically(NULL);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Velit" };
                char *sorted_tab[] = { "Velit" };
                int sorted_count[] = { 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(1, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 1; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 1, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Velit", "velit" };
                char *sorted_tab[] = { "Velit", "velit" };
                int sorted_count[] = { 1, 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(2, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 2; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 2, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 2, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Velit", "velit", "aliquam", "amet", "sit", "velit", "modi", "Non", "porro", "eius", "quaerat", "Numquam", "est", "amet", "non", "etincidunt", "magnam", "Quisquam", "consectetur", "magnam", "labore", "ipsum", "non", "quiquia", "consectetur", "Quiquia", "velit", "etincidunt", "ut", "velit", "etincidunt", "neque", "quisquam", "Consectetur", "aliquam", "quaerat", "quiquia", "Dolore", "non", "est", "amet", "magnam", "magnam", "quisquam", "Ut", "modi", "non", "quiquia", "porro", "sit", "Quisquam", "adipisci", "non", "quiquia", "aliquam", "Dolore", "quiquia", "modi", "dolore", "magnam", "voluptatem", "tempora", "dolor", "Sit", "porro", "quisquam", "dolore", "voluptatem", "numquam", "quisquam", "Quiquia", "ipsum", "dolore", "eius", "neque", "dolorem", "aliquam", "quiquia", "Magnam", "dolore", "magnam", "dolore", "aliquam", "quiquia", "velit", "Ut", "dolore", "ut", "tempora", "tempora", "aliquam", "Porro", "adipisci", "velit", "sed", "Dolorem", "eius", "tempora", "voluptatem" };
                char *sorted_tab[] = { "quiquia", "aliquam", "dolore", "magnam", "velit", "non", "quisquam", "tempora", "amet", "eius", "etincidunt", "modi", "porro", "voluptatem", "Dolore", "Quiquia", "Quisquam", "Ut", "adipisci", "consectetur", "est", "ipsum", "neque", "quaerat", "sit", "ut", "Consectetur", "Dolorem", "Magnam", "Non", "Numquam", "Porro", "Sit", "Velit", "dolor", "dolorem", "labore", "numquam", "sed" };
                int sorted_count[] = { 7, 6, 6, 6, 6, 5, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(99, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 99, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 99, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 99; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 39, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 39, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 39; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Ipsum", "dolore", "magnam", "non", "neque", "numquam", "velit", "Labore", "sed", "ut", "dolore", "sit", "numquam", "Sed", "quiquia", "consectetur", "magnam", "quisquam", "velit", "sed", "Quaerat", "velit", "dolor", "quisquam", "voluptatem", "Neque", "dolore", "amet", "amet", "sit", "magnam", "non", "neque", "Neque", "sed", "dolorem", "numquam", "sed", "aliquam", "Ipsum", "labore", "dolore", "amet", "quisquam", "eius", "numquam", "Labore", "dolorem", "non", "ipsum", "velit", "eius", "consectetur", "Velit", "etincidunt", "dolorem", "velit", "Tempora", "modi", "dolorem", "aliquam", "adipisci", "consectetur", "est", "labore", "Dolor", "dolorem", "quiquia", "magnam", "Adipisci", "ut", "labore", "porro", "Est", "tempora", "magnam", "modi", "dolore", "etincidunt", "dolore", "Dolorem", "dolorem", "quisquam", "ut", "modi", "dolore", "ipsum", "voluptatem", "Ipsum", "voluptatem", "dolor", "voluptatem", "velit", "dolorem", "eius", "Magnam", "quisquam", "modi", "porro", "Porro", "labore", "amet", "modi", "sit", "ipsum", "est", "Quaerat", "tempora", "neque", "est", "etincidunt", "sit", "dolore", "Quisquam", "dolor", "non", "dolore", "tempora", "sit", "consectetur", "ipsum", "Amet", "voluptatem", "aliquam", "numquam", "voluptatem", "sed", "ipsum", "quisquam", "Magnam", "velit", "dolore", "ut", "Ipsum", "sed", "numquam", "velit", "magnam", "quiquia", "etincidunt", "Aliquam", "consectetur", "est", "labore", "neque", "Adipisci", "tempora", "magnam", "tempora", "neque", "est", "Eius", "dolore", "quaerat", "labore", "est", "ut", "etincidunt", "tempora", "Sed", "quisquam", "quisquam", "non", "voluptatem", "numquam", "Porro", "velit", "velit", "velit", "eius", "Numquam", "non", "labore", "tempora", "Velit", "non", "ipsum", "numquam", "velit", "dolorem", "Amet", "quisquam", "etincidunt", "quaerat", "quiquia", "quiquia", "amet", "modi", "Consectetur", "tempora", "sed", "adipisci", "labore", "ut", "Dolor", "adipisci", "est", "etincidunt", "numquam", "tempora", "porro", "Quisquam", "labore", "sit", "quisquam", "quisquam", "numquam", "Labore", "numquam", "ut", "sed", "aliquam", "Quiquia", "numquam", "est", "labore", "sed", "labore", "modi", "amet", "Neque", "eius", "labore", "velit", "velit", "tempora", "Non", "aliquam", "quaerat", "numquam", "eius", "neque", "Dolore", "labore", "labore", "adipisci", "dolorem", "quaerat", "neque", "Eius", "numquam", "magnam", "modi", "Quiquia", "etincidunt", "voluptatem", "labore", "Tempora", "quiquia", "eius", "non", "est", "amet", "non", "Amet", "labore", "dolore", "amet", "numquam", "magnam", "non", "etincidunt", "Sit", "neque", "numquam", "sit", "voluptatem", "Quaerat", "labore", "sit", "non", "non", "quisquam", "ut", "ut", "Modi", "modi", "voluptatem", "non", "magnam", "Quaerat", "sed", "sit", "quisquam", "Labore", "dolor", "adipisci", "tempora", "Neque", "aliquam", "non", "ipsum", "Sit", "ipsum", "etincidunt", "etincidunt", "sit", "Labore", "voluptatem", "quaerat", "non", "dolore", "Quisquam", "voluptatem", "dolore", "numquam", "modi", "non", "tempora", "Quiquia", "ipsum", "amet", "magnam", "tempora", "Amet", "eius", "labore", "etincidunt", "quaerat", "etincidunt", "quaerat", "Aliquam", "non", "ut", "labore", "consectetur", "Ut", "adipisci", "aliquam", "ipsum", "numquam", "dolore", "neque", "Quaerat", "quiquia", "quisquam", "magnam", "dolore", "sit", "etincidunt", "numquam", "Est", "est", "dolorem", "labore", "quaerat", "voluptatem", "dolorem", "labore", "Aliquam", "neque", "dolor", "magnam", "sit", "etincidunt", "etincidunt", "Etincidunt", "magnam", "quiquia", "etincidunt", "velit", "amet", "non", "ipsum", "Velit", "porro", "porro", "modi", "voluptatem", "eius", "magnam", "quiquia", "Magnam", "quaerat", "non", "adipisci", "non", "dolor", "Quiquia", "porro", "magnam", "dolore", "etincidunt", "Sit", "adipisci", "voluptatem", "tempora", "consectetur", "Consectetur", "dolore", "dolorem", "labore", "velit", "Magnam", "adipisci", "voluptatem", "amet", "velit", "Quaerat", "velit", "ut", "non", "quiquia", "aliquam", "velit", "tempora", "Porro", "est", "non", "consectetur", "non", "dolorem", "Sit", "quaerat", "adipisci", "dolor", "voluptatem", "Labore", "dolore", "quiquia", "adipisci", "quaerat", "consectetur", "dolore", "dolorem", "Quaerat", "tempora", "etincidunt", "quiquia", "velit", "non", "Porro", "magnam", "aliquam", "numquam", "adipisci", "porro", "sed", "Consectetur", "magnam", "adipisci", "amet", "porro", "quiquia", "labore", "Dolor", "consectetur", "sed", "consectetur", "ipsum", "etincidunt", "sit", "Aliquam", "modi", "neque", "ut", "amet", "ut", "sit", "dolor", "Ipsum", "porro", "numquam", "etincidunt", "Neque", "dolore", "etincidunt", "ipsum", "quiquia", "numquam", "porro", "dolorem", "Velit", "etincidunt", "non", "numquam", "numquam", "Quiquia", "aliquam", "numquam", "amet", "est", "aliquam", "velit", "est", "Dolore", "dolore", "magnam", "porro", "magnam", "tempora", "dolor", "tempora", "Aliquam", "ut", "dolore", "quiquia", "sed", "sed", "dolorem", "Voluptatem", "etincidunt", "aliquam", "tempora", "dolorem", "Non", "porro", "consectetur", "sed", "dolor", "voluptatem", "numquam", "labore", "Etincidunt", "quisquam", "quaerat", "est", "Ipsum", "quaerat", "non", "quisquam", "modi", "modi", "modi", "Voluptatem", "quiquia", "porro", "non", "numquam", "ipsum", "Porro", "tempora", "non", "dolore", "ipsum", "dolorem", "Est", "neque", "porro", "sit", "ut", "consectetur", "Modi", "modi", "voluptatem", "amet", "modi", "tempora", "dolorem", "Est", "porro", "quisquam", "dolorem", "quiquia", "Numquam", "magnam", "amet", "quisquam", "consectetur", "aliquam", "Etincidunt", "sit", "ipsum", "sed", "eius", "magnam", "porro", "Dolor", "tempora", "ipsum", "quisquam", "eius", "dolor", "etincidunt", "quaerat", "Adipisci", "ipsum", "non", "consectetur", "Non", "sit", "ut", "eius", "quaerat", "Magnam", "eius", "aliquam", "aliquam", "sed", "neque", "ipsum", "magnam", "Labore", "ipsum", "numquam", "est", "dolore", "numquam", "ipsum", "Ut", "etincidunt", "non", "dolore", "dolor", "neque", "Aliquam", "dolore", "consectetur", "quaerat", "consectetur", "non", "quiquia", "ut", "Amet", "neque", "numquam", "magnam", "consectetur", "consectetur", "etincidunt", "voluptatem", "Adipisci", "est", "ipsum", "neque", "dolorem", "consectetur", "quaerat", "Neque", "voluptatem", "est", "modi", "numquam", "ipsum", "dolore", "Quiquia", "sit", "modi", "consectetur", "Numquam", "est", "numquam", "sit", "voluptatem", "Ut", "labore", "ipsum", "consectetur", "velit", "Amet", "sit", "neque", "numquam", "velit", "porro", "est", "aliquam", "Numquam", "porro", "amet", "voluptatem", "est", "Porro", "ut", "etincidunt", "ut", "Modi", "tempora", "tempora", "est", "magnam", "ut", "eius", "quisquam", "Dolorem", "porro", "aliquam", "dolor", "quisquam", "eius", "Ipsum", "adipisci", "porro", "non", "eius", "ut", "tempora", "numquam", "Amet", "adipisci", "numquam", "sed" };
                char *sorted_tab[] = { "numquam", "non", "dolore", "etincidunt", "labore", "magnam", "tempora", "ipsum", "velit", "voluptatem", "consectetur", "dolorem", "est", "quisquam", "ut", "porro", "sit", "modi", "quiquia", "sed", "aliquam", "amet", "neque", "quaerat", "eius", "adipisci", "dolor", "Amet", "Ipsum", "Labore", "Quaerat", "Aliquam", "Neque", "Porro", "Quiquia", "Magnam", "Adipisci", "Dolor", "Est", "Numquam", "Sit", "Velit", "Consectetur", "Etincidunt", "Modi", "Non", "Quisquam", "Ut", "Dolore", "Dolorem", "Eius", "Sed", "Tempora", "Voluptatem" };
                int sorted_count[] = { 35, 32, 28, 28, 25, 25, 25, 24, 23, 23, 22, 21, 21, 21, 21, 20, 20, 19, 18, 18, 17, 17, 17, 17, 16, 15, 13, 7, 7, 7, 7, 6, 6, 6, 6, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2 };

                struct dictionary_t *arr;

                arr = create_dictionary(692, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 692, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 692, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 692; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 54, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 54, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 54; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "touch", "major", "segment", "create", "straight", "they", "wide", "again", "main", "camp", "lake", "danger", "hurry", "thin", "nature", "capital", "instant" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -5;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 17;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "touch", "major", "segment", "create", "straight", "they", "wide", "again", "main", "camp", "lake", "danger", "hurry", "thin", "nature", "capital", "instant" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -5;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 17;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "touch", "major", "segment", "create", "straight", "they", "wide", "again", "main", "camp", "lake", "danger", "hurry", "thin", "nature", "capital", "instant" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_sort_occurence(NULL);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum" };
                int sorted_count[] = { 1 };
        
                int err_code = 4;
                struct dictionary_t *arr = load_dictionary_b("leave.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 1, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 1, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum", "eius" };
                int sorted_count[] = { 1, 1 };
        
                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("enough.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 2, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 2, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum", "eius", "quisquam", "ut", "Est", "tempora", "etincidunt", "sed", "Tempora", "labore", "quiquia", "sit", "porro", "Numquam", "adipisci", "magnam", "Sed", "amet", "non", "numquam", "modi", "quaerat", "Velit", "consectetur", "dolorem", "voluptatem", "Dolore", "velit", "dolore", "Non", "Porro", "Dolor", "aliquam", "ipsum", "neque", "est", "Consectetur", "Ut", "Neque", "dolor", "Quisquam" };
                int sorted_count[] = { 2, 4, 3, 8, 3, 8, 3, 3, 2, 2, 6, 4, 4, 1, 3, 2, 1, 4, 3, 4, 5, 4, 1, 3, 4, 5, 2, 5, 3, 1, 1, 1, 1, 3, 2, 2, 1, 2, 1, 1, 1 };
        
                int err_code = 1;
                struct dictionary_t *arr = load_dictionary_b("cloud.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 41, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 41, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 41, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 41, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 41; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Neque", "velit", "adipisci", "dolore", "quiquia", "sit", "Consectetur", "eius", "porro", "dolorem", "labore", "etincidunt", "Velit", "ipsum", "modi", "dolor", "voluptatem", "quisquam", "Dolor", "sed", "aliquam", "est", "Dolore", "quaerat", "neque", "Adipisci", "amet", "consectetur", "non", "Ipsum", "tempora", "Etincidunt", "Eius", "Sit", "ut", "numquam", "Quisquam", "magnam", "Numquam", "Ut", "Quaerat", "Labore", "Sed", "Aliquam", "Dolorem", "Voluptatem", "Porro", "Tempora", "Modi", "Amet", "Est", "Non", "Magnam", "Quiquia" };
                int sorted_count[] = { 3, 19, 15, 16, 16, 29, 5, 16, 24, 15, 22, 22, 6, 12, 13, 15, 20, 16, 4, 24, 12, 13, 5, 18, 21, 2, 9, 23, 19, 2, 19, 5, 3, 7, 12, 11, 2, 14, 4, 2, 4, 4, 5, 6, 4, 4, 2, 1, 3, 3, 3, 2, 1, 1 };
        
                int err_code = 4;
                struct dictionary_t *arr = load_dictionary_b("rise.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 54, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 54, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 54, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 54, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 54; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("produce.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 2, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 3;
                struct dictionary_t *arr = load_dictionary_b("sun.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 4;
                struct dictionary_t *arr = load_dictionary_b("meet.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("rail.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 1;
                struct dictionary_t *arr = load_dictionary_b("lone.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                int err_code = 3;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(20);
    
    //
    // -----------
    //
    
                int err_code = 1;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(100);
    
    //
    // -----------
    //
    
                int err_code = 3;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(592);
    
    //
    // -----------
    //
    
                int err_code = 2;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(612);
    
    //
    // -----------
    //
    
                int err_code = 2;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(834);
    
    //
    // -----------
    //
    
                int err_code = 0;
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(20);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(100);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(592);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(612);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(834);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("all.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *sorted_tab[] = { "Dolorem", "etincidunt", "magnam", "dolore", "non", "ipsum", "velit", "Ut", "amet", "voluptatem", "est", "aliquam", "Eius", "numquam", "Numquam", "consectetur", "adipisci", "Non", "porro", "labore", "modi", "tempora", "Labore", "quisquam", "Est", "sed", "dolorem", "Voluptatem", "quaerat", "Dolor" };
            char *tab[] = { "Dolorem", "etincidunt", "magnam", "dolore", "etincidunt", "non", "ipsum", "velit", "Ut", "amet", "voluptatem", "velit", "est", "etincidunt", "dolore", "aliquam", "Eius", "magnam", "aliquam", "numquam", "Numquam", "ipsum", "aliquam", "consectetur", "adipisci", "Non", "porro", "numquam", "numquam", "labore", "modi", "tempora", "Labore", "quisquam", "ipsum", "tempora", "ipsum", "quisquam", "numquam", "Est", "etincidunt", "aliquam", "sed", "dolore", "etincidunt", "voluptatem", "ipsum", "Dolorem", "aliquam", "adipisci", "adipisci", "dolorem", "etincidunt", "etincidunt", "Voluptatem", "velit", "quaerat", "dolore", "dolorem", "dolorem", "Dolor", "numquam", "labore", "dolorem" };
            int sorted_count[] = { 2, 7, 2, 4, 1, 5, 3, 1, 1, 2, 1, 5, 1, 5, 1, 1, 3, 1, 1, 2, 1, 2, 1, 2, 1, 1, 4, 1, 1, 1 };

            struct dictionary_t *arr;

            arr = create_dictionary(64, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 64, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 64, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 64; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            }

            for (i = 0; i < 30; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
            }

            int err_code = save_dictionary_b(arr, "say.bin");
            test_error(err_code == 0, "Funkcja save_dictionary_b() powinna zwrócić wartość 0, a zwróciła %d", err_code);


            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "modi", "Etincidunt", "labore", "dolorem", "sed", "ut", "quaerat", "velit", "tempora", "eius", "sit", "dolore", "numquam", "Numquam", "quisquam", "adipisci", "consectetur", "Eius", "neque", "non", "Quiquia", "quiquia", "dolor", "porro", "Neque", "amet", "voluptatem", "Dolor" };

            struct dictionary_t *arr;

            arr = create_dictionary(28, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 28, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 28, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 28; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 28, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 28 na %d", arr->capacity);
            }

            for (i = 0; i < 28; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -1;

            int err_code = save_dictionary_b(arr, "say.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->size = 28;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "modi", "Etincidunt", "labore", "dolorem", "sed", "ut", "quaerat", "velit", "tempora", "eius", "sit", "dolore", "numquam", "Numquam", "quisquam", "adipisci", "consectetur", "Eius", "neque", "non", "Quiquia", "quiquia", "dolor", "porro", "Neque", "amet", "voluptatem", "Dolor" };

            struct dictionary_t *arr;

            arr = create_dictionary(28, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 28, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 28, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 28; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 28, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 28 na %d", arr->capacity);
            }

            for (i = 0; i < 28; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -5;
            arr->capacity = arr->size + 1;

            int err_code = save_dictionary_b(arr, "say.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->size = 28;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "modi", "Etincidunt", "labore", "dolorem", "sed", "ut", "quaerat", "velit", "tempora", "eius", "sit", "dolore", "numquam", "Numquam", "quisquam", "adipisci", "consectetur", "Eius", "neque", "non", "Quiquia", "quiquia", "dolor", "porro", "Neque", "amet", "voluptatem", "Dolor" };

            struct dictionary_t *arr;

            arr = create_dictionary(28, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 28, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 28, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 28; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 28, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 28 na %d", arr->capacity);
            }

            for (i = 0; i < 28; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

           int err_code = save_dictionary_b(arr, "say.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "modi", "Etincidunt", "labore", "dolorem", "sed", "ut", "quaerat", "velit", "tempora", "eius", "sit", "dolore", "numquam", "Numquam", "quisquam", "adipisci", "consectetur", "Eius", "neque", "non", "Quiquia", "quiquia", "dolor", "porro", "Neque", "amet", "voluptatem", "Dolor" };

            struct dictionary_t *arr;

            arr = create_dictionary(28, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 28, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 28, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 28; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 28, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 28 na %d", arr->capacity);
            }

            for (i = 0; i < 28; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

           int err_code = save_dictionary_b(arr, NULL);
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_dictionary_b(NULL, "say.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_dictionary_b(NULL, NULL);
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            char *sorted_tab[] = { "Voluptatem", "quiquia", "velit", "est", "magnam", "Sed", "dolore", "neque", "tempora", "ut", "Dolore", "eius", "sed", "Non", "consectetur", "etincidunt", "dolor", "amet", "voluptatem", "numquam", "sit", "quisquam", "ipsum", "Est", "modi", "porro", "Ut", "non", "dolorem", "Quaerat", "labore", "Numquam", "Quisquam", "adipisci", "Sit", "quaerat", "Neque", "Magnam", "aliquam", "Etincidunt", "Porro", "Aliquam" };
            char *tab[] = { "Voluptatem", "quiquia", "velit", "est", "velit", "magnam", "Sed", "dolore", "neque", "tempora", "ut", "Dolore", "eius", "tempora", "ut", "sed", "Non", "neque", "consectetur", "etincidunt", "dolor", "consectetur", "amet", "Non", "voluptatem", "velit", "numquam", "Voluptatem", "consectetur", "ut", "sit", "voluptatem", "quisquam", "ipsum", "Est", "neque", "modi", "porro", "sit", "ipsum", "quisquam", "Ut", "non", "sed", "dolore", "numquam", "velit", "Est", "voluptatem", "magnam", "sed", "eius", "dolorem", "ipsum", "eius", "Dolore", "eius", "quisquam", "eius", "est", "ipsum", "Quaerat", "labore", "sit", "dolor", "numquam", "eius", "dolorem", "Numquam", "consectetur", "numquam", "tempora", "Quisquam", "labore", "etincidunt", "dolorem", "adipisci", "modi", "sit", "ipsum", "Sit", "quaerat", "dolorem", "dolorem", "Neque", "velit", "porro", "porro", "quiquia", "dolore", "voluptatem", "tempora", "Magnam", "sed", "numquam", "numquam", "quisquam", "aliquam", "dolor", "Etincidunt", "quiquia", "consectetur", "modi", "amet", "magnam", "porro", "Porro", "voluptatem", "numquam", "tempora", "Aliquam", "dolore", "magnam", "numquam", "dolorem", "non", "neque", "Aliquam", "ipsum", "quiquia", "etincidunt", "voluptatem", "numquam", "Neque", "dolorem", "magnam", "voluptatem", "adipisci" };
            int sorted_count[] = { 2, 4, 5, 2, 5, 1, 4, 4, 5, 3, 2, 6, 4, 2, 5, 3, 3, 2, 7, 9, 4, 4, 6, 2, 3, 4, 1, 2, 7, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2 };

            struct dictionary_t *arr;

            arr = create_dictionary(128, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 128, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 128, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 128; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            }

            for (i = 0; i < 42; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
            }

            int err_code = save_dictionary_b(arr, "say.bin");
            test_error(err_code == 2, "Funkcja save_dictionary_b() powinna zwrócić wartość 2, a zwróciła %d", err_code);


            destroy_dictionary(&arr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania funkcji display
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct dictionary_t *arr;
            char *tab[] = {"leg", "some", "glass", "box", "raise", "allow"};

            arr = create_dictionary(6, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate(); 

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 6; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 6, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 6 na %d", arr->capacity);
            }


    //-------------1-----------------------

            printf("***START***\n");
            dictionary_display(NULL);
            printf("***END***\n");


    //-------------2-----------------------

            arr->capacity = 6 - 1;
            arr->size = 6;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");


    //-------------3-----------------------

            arr->capacity = 6;
            arr->size = -27;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");


    //-------------4-----------------------

            arr->capacity = 6 - 1;
            arr->size = 0;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

    //-------------5-----------------------

            arr->capacity = 6;
            arr->size = 6;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

    //-------------6-----------------------


            arr->capacity = 6;
            arr->size = 6 - 1;


            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

            arr->size = 6;


            destroy_dictionary(&arr);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci; limit ustawiono na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci; limit ustawiono na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci; limit ustawiono na 50 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci; limit ustawiono na 50 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(50);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci; limit ustawiono na 226 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci; limit ustawiono na 226 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(226);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja na brak pamięci; limit ustawiono na 350 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci; limit ustawiono na 350 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(350);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak pamięci; limit ustawiono na 50 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci; limit ustawiono na 50 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(50);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 2);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 2);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}


enum run_mode_t { rm_normal_with_rld = 0, rm_unit_test = 1, rm_main_test = 2 };

int __wrap_main(volatile int _argc, char** _argv, char** _envp)
{
    int volatile vargc = _argc;
    char ** volatile vargv = _argv, ** volatile venvp = _envp;
	volatile enum run_mode_t run_mode = rm_normal_with_rld; // -1
	volatile int selected_test = -1;

    if (vargc > 1)
	{
	    char* smode = strtok(vargv[1], ",");
	    char* stest = strtok(NULL, "");
		char *errptr = NULL;
		run_mode = (enum run_mode_t)strtol(smode, &errptr, 10);
		if (*errptr == '\x0')
		{
			memmove(vargv + 1, vargv + 2, sizeof(char*) * (vargc - 1));
			vargc--;

			if (stest != NULL)
			{
			    int val = (int)strtol(stest, &errptr, 10);
			    if (*errptr == '\x0')
			        selected_test = val;
			}
		}
	}

    // printf("runmode=%d; selected_test=%d\n", run_mode, selected_test);

    // inicjuj testy jednostkowe
    unit_test_init(run_mode, "unit_test_v2.c");
    test_limit_init();
    rldebug_set_reported_severity_level(MSL_FAILURE);

    if (run_mode == rm_normal_with_rld)
    {
        // konfiguracja ograniczników
        rldebug_reset_limits();
        

        // uruchom funkcję main Studenta a potem wyświetl podsumowanie sterty i zasobów
        volatile int ret_code = rdebug_call_main(tested_main, vargc, vargv, venvp);

        rldebug_reset_limits();
        

        int leaks_detected = rldebug_show_leaked_resources(0);
        if (leaks_detected)
            raise(SIGHEAP);

        return ret_code;
    }

    
    if (run_mode == rm_unit_test)
    {
        test_title("Testy jednostkowe");

        void (*pfcn[])(void) =
        { 
           // UTEST1, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)
           // UTEST2, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)
           // UTEST3, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)
           // UTEST4, // Sprawdzanie poprawności działania funkcji create
           // UTEST5, // Sprawdzanie poprawności działania funkcji create
            UTEST6, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 720 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11680 bajtów)
            UTEST8, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 152064 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji create
            UTEST10, // Sprawdzanie poprawności działania funkcji create
            UTEST11, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST12, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST13, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)
            UTEST14, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST15, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST16, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1600 bajtów)
            UTEST17, // Sprawdzanie poprawności działania funkcji create
            UTEST18, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST19, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST20, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST21, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST22, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST23, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST24, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST25, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST26, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 211 bajtów)
            UTEST27, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 355 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST30, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST31, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST32, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST33, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST34, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST35, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST36, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST37, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST38, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST39, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST40, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST41, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST42, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST43, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST44, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST45, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST46, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST47, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST48, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST49, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST50, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST51, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST52, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST53, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST54, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST55, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST56, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST57, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST58, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST59, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST60, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST61, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST62, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
            UTEST63, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
            UTEST64, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
            UTEST65, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)
            UTEST66, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)
            UTEST67, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)
            UTEST68, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
            UTEST69, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
            UTEST70, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
            UTEST71, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 592 bajtów)
            UTEST72, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 612 bajtów)
            UTEST73, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 834 bajtów)
            UTEST74, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST75, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST76, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST77, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST78, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST79, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST80, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST81, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST82, // Sprawdzanie poprawności działania funkcji display
            NULL
        };

        for (int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx]();

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(82); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
          //  MTEST1, // Reakcja na brak pamięci; limit ustawiono na 0 bajtów
          //  MTEST2, // Reakcja na brak pamięci; limit ustawiono na 50 bajtów
          //  MTEST3, // Reakcja na brak pamięci; limit ustawiono na 226 bajtów
          //  MTEST4, // Reakcja na brak pamięci; limit ustawiono na 350 bajtów
         //   MTEST5, // Reakcja na brak pamięci; limit ustawiono na 50 bajtów
            MTEST6, // Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
            MTEST7, // Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
            MTEST8, // Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
            MTEST9, // Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
            NULL
        };

        for (volatile int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx](vargc, vargv, venvp);

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(9); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}