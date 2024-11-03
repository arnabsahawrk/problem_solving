#include <stdio.h>
int main()
{
    long long int eyes, mouths, bodies;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    long long int min = 0;

    if (eyes <= mouths && eyes <= bodies)
        min = eyes;
    else if (mouths <= eyes && mouths <= bodies)
        min = mouths;
    else
        min = bodies;

    long long int newEyes = (eyes - min) / 2;
    long long int newMouths = mouths - min;
    long long int newBodies = bodies - min;

    if (newEyes <= newBodies)
        printf("%lld", newEyes + min);
    else
        printf("%lld", newBodies + min);

    return 0;
}