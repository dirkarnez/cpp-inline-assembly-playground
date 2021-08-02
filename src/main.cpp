#include <iostream>

/*
    Copy 10 to dst and add 1 to dst.
*/
int ten_plus_one() {
    int dst;
    asm("mov $10, %0\n\t"
        "add $1, %0\n\t"
        :"=r"(dst)        /* output */
    );
    return dst;
}

int main() {
    std::cout << ten_plus_one() << std::endl;
    system("pause");
    return 0;
}
