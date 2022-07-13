#include <stdio.h>
#include <tiger/tiger.h>

int main(int argc, char *argv[])
{
    struct two_point tp;

    tp.pointa = 2;
    tp.pointb = 10;

    printf("%d\n", add_two(tp.pointa, tp.pointb));

    return 0;
}
