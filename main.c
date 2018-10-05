//Rodrigo Perez Solis
//A01411278
#include <stdio.h>
#include <math.h>



//variables declaration for angle and radian
double angle=0;
double radian=0;
//Sine
void sine (double angle){
    double sn = 0;
    sn = sin(angle);
    printf ("\n Sine%lf \n",sn);
}
//cosine
void cosine (double angle) {
    double cs = 0;
    cs = (cos(angle));
    printf ("\n Cosine: %lf \n",cs);

}
//tangent
void tangent (double angle) {
    double tn = 0;
    tn = tan(angle);
    printf("\n Tangent: %lf \n",tn);
}
//cotangent
void cotangent (double angle) {
    double cot = 0;
    cot = (1 / tan(angle));
    printf("\n Cotangent: %lf \n", cot);
}
//secant
void secant (double angle) {
    double sc = 0;
    sc = (1 / cos(angle));
    printf("\n Secant: %lf \n", sc);
}
//cosecant
void cosecant (double angle) {
    double csc = 0;
    csc = (1 / sin(angle));
    printf("\n Cosecant:%lf \n", csc);
}


int main() {

// we ask the user to put an angle in degrees and we change the angle
// to radians to place it in each trigonometry equation
    printf("Please input an angle in degrees:\n");
    scanf ("%lf", &angle);

    radian = (angle*0.0174533);
    sine (radian);
    cosine (radian);
    tangent (radian);
    secant (radian);
    cosecant (radian);
    cotangent (radian);


    return 0;
}