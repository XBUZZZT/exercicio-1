  #include <stdio.h>

  int main() {
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323863; // esse long double nn iria funcionar , porem tirando o long fuciona.

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;

  }