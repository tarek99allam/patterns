/*
 ************************************************************************
 * @file        : Patterns.c
 * @author      : Tarek Ahmed Allam
 * @breif       : patters Draw function
 ************************************************************************
 */

 /* ************************ INCLUDES SECTION START ******************* */
#include <stdio.h>
#include <stdlib.h>
#include "patterns.h"
 /* ************************ INCLUDES SECTION END ********************* */


 /* ********************************* RECTANGLRS ********************************** */

void solid_Rectangle (unsigned char lenght_Rectangle , unsigned char width_Rectangle )
{
    unsigned char counter_1 , counter_2 ;

    for (counter_1 = 0 ; counter_1 < lenght_Rectangle ; counter_1++)
    {
        for (counter_2 = 0 ; counter_2 < width_Rectangle ; counter_2++)
        {
         printf("*");
        }
        printf("\n");
    }
}

void hollow_Rectangle (unsigned char lenght_Rectangle , unsigned char width_Rectangle )
{
    unsigned char counter_1 , counter_2 ;

    for (counter_1 = 0 ; counter_1 < lenght_Rectangle ; counter_1++)
    {
        if (counter_1 == 0 || counter_1 == (lenght_Rectangle - 1) )
        {
            for (counter_2 = 0 ; counter_2 < width_Rectangle ; counter_2++)
            {
             printf("*");
            }
        }
        else
        {
            printf("*");

            for (counter_2 = 1 ; counter_2 < (width_Rectangle - 1) ; counter_2++)
            {
             printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

}
 /* ********************************************************************************* */

/* ***************************** HALF PYRAMIDS ******************************************* */

void half_Pyramid (unsigned char hight_Pyramid )
{
    unsigned char counter_1 , counter_2 ;

    for (counter_1 = 0 ; counter_1 <= hight_Pyramid ; counter_1++)
    {
        for (counter_2 = 0 ; counter_2 < counter_1 ; counter_2++)
        {
         printf("*");
        }
        printf("\n");
    }
}

void inverted_Half_Pyramid (unsigned char hight_Pyramid )
{
    unsigned char counter_1 , counter_2 ;

    for (counter_1 = 0 ; counter_1 <= hight_Pyramid ; counter_1++)
    {
        for (counter_2 = 0 ; counter_2 < (hight_Pyramid - counter_1 ) ; counter_2++)
        {
         printf("*");
        }
        printf("\n");
    }


}

void hollow_Inverted_Half_Pyramid (unsigned char hight_Pyramid )
{
    unsigned char counter_1 , counter_2 ;

    for (counter_1 = 0 ; counter_1 < hight_Pyramid ; counter_1++)
    {
        if (counter_1 == 0 )
        {
            for (counter_2 = 0 ; counter_2 < (hight_Pyramid - counter_1 ) ; counter_2++)
            {
             printf("*");
            }
        }
        else
        {
            printf("*");

            for (counter_2 = 1 ; counter_2 < (hight_Pyramid - counter_1 - 1 ) ; counter_2++)
            {
             printf(" ");
            }
            if (counter_1 != ( hight_Pyramid - 1) )
            printf("*");
        }
        printf("\n");
    }


}
/* **************************************************************** */

/* **************************** FULL PYRAMIDS ***************************** */

void full_Pyramid (unsigned char width_Pyramid )
{
    unsigned char counter_1 , counter_2 , counter_3 ,counter_4 , center_Pyramid ;

    center_Pyramid = width_Pyramid / 2 ;
    counter_4 = 0;

    for (counter_1 = 0 ; counter_1 < (width_Pyramid / 2) ; counter_1++)
    {

        for (counter_2 = 0 ; counter_2 < width_Pyramid ; counter_2++)
        {

         printf(" ");

         if (counter_2 == center_Pyramid )
            {
             for (counter_3 = 0 ; counter_3 <= counter_4   ; counter_3++  )
                 {
                  printf("*");

                 }
            }
        }
        printf("\n");
        center_Pyramid--;
        counter_4+=2;
    }
}


void inverted_Full_Pyramid (unsigned char width_Pyramid )
{
    unsigned char counter_1 , counter_2 , counter_3 ,counter_4 , center_Pyramid ;

    center_Pyramid = width_Pyramid / 2 ;
    counter_4 = 0;
    counter_3 = 0 ;

    for (counter_1 = 0 ; counter_1 < width_Pyramid ; counter_1++)
    {
        for (counter_2 = 0 ; counter_2 < (width_Pyramid - (counter_4 * 2 ) ) ; counter_2++)
        {
         if (counter_1 >= 0 && counter_2 == 0  )
            {
             for (counter_3 = 0 ; counter_3 <= (counter_4)   ; counter_3++  )
                 {
                  printf(" ");
                 }
            }
          printf("*");
        }

        printf("\n");
        counter_4++;


    }
}

void hollow_Pyramid (unsigned char width_Pyramid)
{
    unsigned char counter_1 , counter_2 , counter_3 ,counter_4 , center_Pyramid ;

    center_Pyramid = width_Pyramid / 2 ;
    counter_4 = 0;

    for (counter_1 = 0 ; counter_1 < (width_Pyramid / 2) ; counter_1++)
    {

        for (counter_2 = 0 ; counter_2 < width_Pyramid ; counter_2++)
        {

         printf(" ");

         if (counter_2 == center_Pyramid )
            {
             for (counter_3 = 0 ; counter_3 <= counter_4   ; counter_3++  )
                 {
                  if (counter_1 > 0 && counter_1 < ((width_Pyramid / 2) - 1))
                  {
                  if(counter_3 == 0 || counter_3 == counter_4)
                    {
                     printf("*");
                    }
                   else
                    {
                     printf(" ");

                    }
                  }
                  else
                  {
                   printf("*");

                  }

                 }
            }
        }
        printf("\n");
        center_Pyramid--;
        counter_4+=2;
    }
}
/* *************************************************************************** */



/*
 **********************************************************
 User           Date                    Brief
 **********************************************************
 Tarek Allam    15sep                   Adding Rectangles
 Tarek Allam    15sep                   Adding half and Full Pyramids
 */
