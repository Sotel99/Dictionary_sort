# Dictionary_sort
Program to sort words in dictionary
Apart from: dictionary.c, main.c, dictionary.h, coastt.txt (input data file) other files are test files. 
Test files don't work in Windows and project should be compiled as Cmake project (easiest in Clion). 
Tests can be set in 3 modes: m_normal_with_rld = 0, rm_unit_test = 1, rm_main_test = 2. 
To change modes write in one of these modes in line 5021 of file "unit_test_v2.c"- 
volatile enum run_mode_t run_mode = rm_unit_test/m_normal_with_rld/rm_unit_test;
