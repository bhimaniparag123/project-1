#include <stdio.h>

int main() {
   
    int angle1, angle2;
    

    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    int third_angle = 180 - angle1 - angle2;
    
    // Output the third angle
    printf("The third angle is: %d degrees\n", third_angle);
    
    return 0;
}
