#include <stdio.h>

enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
    enum Day today = Thu; //they are treated as integers and not strings

    printf("%d", today);
    return 0;
}