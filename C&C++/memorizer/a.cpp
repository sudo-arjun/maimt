#include <iostream>

int generate_rand(int);

int main()
{
    generate_rand(1);
    return 0;
}


int generate_rand(int n)
{
    int random;
    
        random = rand()%n;
        printf("---%d-----\n",random);
        // printf("#%d\n",arr[random].status);

    return random;

}

