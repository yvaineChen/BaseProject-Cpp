#include "../src/main.h"
#include <assert.h>
//為了上機課，新增的註解 
void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
