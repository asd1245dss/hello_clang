#include <stdio.h>
#include <float.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

extern int a, b;
extern int c;
extern float f;

/**
 * 测试变量长度
 */
void test_variable_length();

/**
 * 测试静态常量
 */
void test_const_variable();

/**
 * 测试静态局部变量
 */
void test_static_int_in_function();

/**
 * 测试逻辑运算符
 */
void test_logic_operator();

/**
 * 测试指针
 */
void test_pointer_operation();


void test() {
    test_variable_length();

    test_const_variable();

    test_static_int_in_function();
    test_static_int_in_function();
    test_static_int_in_function();

    test_logic_operator();

    test_pointer_operation();
}

void test_variable_length() {
    printf("Hello, World!\n");
    printf("Memory sizeof char : %d \n", (int) sizeof(char));
    printf("Memory sizeof int : %d \n", (int) sizeof(int));
    printf("Memory sizeof long : %d \n", (int) sizeof(long));
    printf("Memory sizeof float : %d \n", (int) sizeof(float));
    printf("Memory sizeof double : %d \n", (int) sizeof(double));
    printf("Max of float : %E \n", FLT_MAX);
    printf("Min of float : %E \n", FLT_MIN);
    printf("Precision of float : %d \n", FLT_DIG);
}

void test_const_variable() {
    int a, b;
    int c;

    float f;

    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0f / 3.0f;
    printf("value of f : %f \n", f);

    int area = LENGTH * WIDTH;

    printf("value of area : %d \n", area);
    printf("%c", NEWLINE);

    const int LENGTH1 = 100;
    const int WIDTH1 = 5;

    area = LENGTH1 * WIDTH1;

    printf("value of area : %d \n", area);
}

void test_static_int_in_function() {
    static int staticInt = 1;

    printf("value of staticInt : %d \n", staticInt);

    staticInt++;
    staticInt++;
    staticInt++;

    printf("value of staticInt : %d \n", staticInt);
}

void test_logic_operator() {
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;

    c = a & b;
    printf("a & b = %d\n", c);

    c = a | b;
    printf("a | b = %d\n", c);

    c = a ^ b;
    printf("a ^ b = %d\n", c);

    c = ~a;
    printf("~a = %d\n", c);

    c = a << 2;
    printf("a << 2 = %d\n", c);

    c = a >> 2;
    printf("a >> 2 = %d\n", c);

    printf("Address of a : %p\n", &a);
    printf("Address of b : %p\n", &b);
    printf("Address of c : %p\n", &c);
}

void test_pointer_operation() {
    int a = 20;
    int *b = &a;

    printf("Addess of a : %p\n", &a);
    printf("Addess of b : %p\n", b);
    printf("Addess of b : %d\n", *b);
}