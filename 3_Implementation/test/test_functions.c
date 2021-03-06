#include "unity.h"

#include "header.h"

void test_bfast(void);
void test_lunch(void);
void test_dinner(void);
void test_main_menu(void);
void test_display(void);
void test_lunch_menucard(void);
void test_dinner_menu(void);
void test_display_bf_bill(void);
void test_display_lunch_bill(void);
void test_display_dinner_bill(void);
void test_display_bfmenu(void);
void test_repeatbf(void);
void test_repeatlunch(void);
void test_repeatdinner(void);
void test_display_total_words(void);

void setUp(){}
/**
 * @brief Required by the unity test framework
 * 
 */
void tearDown(){}

/**
 * @brief Start of the application test
 * 
 * @return int 
 */
int main()
{
  UNITY_BEGIN();
    
  RUN_TEST(test_bfast);
  RUN_TEST(test_lunch);
  RUN_TEST(test_dinner);
  RUN_TEST(test_main_menu);
  RUN_TEST(test_display);
  RUN_TEST(test_lunch_menucard);
  RUN_TEST(test_dinner_menu);
  RUN_TEST(test_display_bf_bill);
  RUN_TEST(test_display_lunch_bill);
  RUN_TEST(test_display_dinner_bill);
  RUN_TEST(test_display_bfmenu);
  RUN_TEST(test_repeatbfast);
  RUN_TEST(test_repeatlunch);
  RUN_TEST(test_repeatdinner);
  RUN_TEST(test_display_total_words);
  
  return UNITY_END();
}


