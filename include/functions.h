#include "main.h"
#include <iterator>
#include <ostream>

/*void printData () {
    while (true) {
    //int printf(encoder.get_value());
    std::cout << "Encoder Value: " << encoderLeft.get_value() << std::endl;
    pros::delay(10);
}


}
*/

void testWheels () {
    while (true) {
        int leftValue = encoderLeft.get_value();
        int rightValue = encoderRight.get_value();
        if (leftValue = rightValue) {
            std::cout << "Equal " << std::endl;
            printf("equal");
        
        
        }
    
    }



}