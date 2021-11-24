#include "unity.h"

#include "header.h"
#define PROJECT_NAME "RestaurantBillingSystem"

void bfast(char bfmenu[][100]);
void lunch( char lunchmenu[][100]);
void dinner(char dinnermenu[][100]);
void main_menu();
void display();
void lunch_menucard();
void dinner_menu();
void display_bf_bill(char bfmenu[][100]);
void display_lunch_bill(char lunchmenu[][100]);
void display_dinner_bill(char dinnermenu[][100]);
void display_bfmenu();
void repeatbf(char bfmenu[][100]);
void repeatlunch(char lunchmenu[][100]);
void repeatdinner(char dinnermenu[][100]);
void display_total_words();

void setUp()
{
}
void tearDown()
{
}

void test_login(void)
{
    char username[10]="tanuja", userpwd[10]="123";
    //TEST_ASSERT_EQUAL_STRING(0,("tanuja","123"));
    TEST_ASSERT_EQUAL_STRING("tanuja",username);
    TEST_ASSERT_EQUAL_STRING("123",userpwd);
    
}
void test_change_prize(void)
{
    int prize1=700,prize2=900;
    TEST_ASSERT_EQUAL(700,change_prize(prize1));
    TEST_ASSERT_EQUAL(900,change_prize(prize2));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_login);
  RUN_TEST(test_change_prize);
  return UNITY_END();
}
