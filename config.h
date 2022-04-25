///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_08d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iomanip>

#define PROGRAM_TITLE "Animal Farm 3"
#define PROGRAM_NAME "Animalfarm3"

#define PRINT_HEADING_FOR_DUMP \
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl

#define FORMAT_LINE_FOR_DUMP( className, member ) \
std::cout << std::setfill( ' ' )  /* Space pad */ \
              << std::left            /* Left justify */  \
              << std::boolalpha  /* Print `true` or `false` for `bool`s */ \
              << std::setw(8)  << (className)             \
              << std::setw(20) << (member)                \
              << std::setw(52)  /* (data) */
