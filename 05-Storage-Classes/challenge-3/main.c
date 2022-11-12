/**
* create a source file named main.c
 *  - this source file should include a global variable used as a loop counter
 *  - this file includes a main function that uses the global variable to iterate through a loop 5 times
 *    - inside this loop a function should be invoked (display) that is defined in another file
 *      (do not use an include file)
 *    - the display function should take no parameters
*/

int i = 0;
extern void display();

int main() {
    for(i; i < 5; i++) {
        display();
    }
}