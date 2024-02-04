#include <stdio.h>

int main()
{

    long int temp_food = 5, count = 4, x, y, z, xc, yc, condition_y, condition_yc;
    long long int multiplier = 1, temp_row, temp_col, sort_row = 1030301312, sort_col = 1020304050;
    printf("%d\n",sizeof(sort_row));
     while (temp_food - 1) // passes
     {

        temp_row = sort_row;
        temp_col = sort_col;
        sort_col = 0;
        sort_row = 0;
        temp_food--;
        
        count=4;
        multiplier=1;
        condition_y=0;
        condition_yc=0;

        while (count)//sorting each element one by one
        {
           

            x = temp_row % 100;
            temp_row /= 100;
            y = temp_row % 100;

            xc = temp_col % 100;
            temp_col /= 100;
            yc = temp_col % 100;
            if (x > y)
            { // swap
                z = x;
                x = y;
                y = z;

                z = xc;
                xc = yc;
                yc = z;

                temp_row /= 100;
                temp_row = temp_row * 100 + y;
                temp_col /= 100;
                temp_col = temp_col * 100 + yc;
            }
            else if (x == y && xc > yc)
            {

                // swap
                z = x;
                x = y;
                y = z;

                z = xc;
                xc = yc;
                yc = z;

                temp_row /= 100;
                temp_row = temp_row * 100 + y;
                temp_col /= 100;
                temp_col = temp_col * 100 + yc;
            }
            if (count == 1)
            {
                condition_y = y * multiplier*100 ;
                condition_yc = yc * multiplier *100;
            }

            sort_row = sort_row + x * multiplier + condition_y;
            sort_col = sort_col + xc * multiplier + condition_yc;

            multiplier *= 100;
            count--;
           // printf("%10ld %10ld\n",sort_row,sort_col);
       }
     //printf("%10ld %10ld %10ld %10ld\n", sort_row, sort_col,temp_row,temp_col);
    }

  // printf("%ld %ld %ld %ld", sort_row, sort_col,temp_row,temp_col);

    return 0;
}