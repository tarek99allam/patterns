/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Tarek Ahmed Allam
 * @brief          : test drawing of the patterns
 ******************************************************************************
 */

 /* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
#include "patterns.h"
/* *********************** Includes Section end ************************ */



int main()
{


 hollow_Inverted_Half_Pyramid (50);

 solid_Rectangle (50 , 60 );

 full_Pyramid (50);

 hollow_Pyramid (60);

 inverted_Full_Pyramid (80);


    return 0;
}

/*
 ***************************************************************************
 User                Date               Brief
 ***************************************************************************
 Tarek Allam         15sep2022          testing the functions
 */
