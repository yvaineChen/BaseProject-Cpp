#include "../src/main.h"
#include <assert.h>
//���F�W���ҡA�s�W������ 
void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
