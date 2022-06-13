
#if 0
g++ -O2 -g noreturn.cpp
exit 0;
#endif

#include    <iostream>

int count = 0;

int bug(int x) {
    std::cerr   <<  "count = "  <<  ++ count << std::endl;
}

void foo() {
    std::cerr   <<  "Call foo"  <<  std::endl;
}

int infinite_loop_when_O2(int x) {
    int ret;
    ret = bug(x);
    return ret;
}

int main(int argc, char * argv[]) {
    infinite_loop_when_O2(1);
}
