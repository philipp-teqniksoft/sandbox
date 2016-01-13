#include <stdio.h>
#include <stdbool.h>

void test_format(void)
{
    int i;//comment 1;
    int long_var_name;//comment2
    int very_very_very_long_var_name;//comment3
    char* ptr;
    for(i=0;i<10;i++){printf("%d",i);}
        char *unaligned = 0;



    if(i==10) printf("yes!");


    printf("Hello\n");
    switch(i)
        {
            case 1:
                break;
    case 2:
    break;
        default:
            break;
        }
    int j=5;
		int k=6;
}

void test_assign_stack_val(const char **str)
{
    char local_str[16] = "Stack string";
    *str = local_str;
}

void test_analyzer(void)
{
    const char *str;
    int i, k = 20, array[10];

    for (i = 0; i < k; ++i)
    {
        array[i] = k;
    }

    array[20] = 0;

    char *p;

    *p = 'a';

    if (*p = 'b')
    {
        return;
    }

    k = 0;
    i /= k;

    bool b;
    b = (bool)2;

    test_assign_stack_val(&str);

    p = NULL;
    char a = *p;
    a = a;
}
int main(int argc, char **argv)
{
    test_format();
    test_analyzer();
    printf("Hello World!\n");
    return 0;
}
