///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <string>
#include <ostream>
#include "config.h"

typedef float t_weight;

enum UnitOfWeight{POUND, KILO, SLUG}; //public type

static const std::string POUND_LABEL = "Pound";
static const std::string KILO_LABEL = "Kilo" ;
static const std::string SLUG_LABEL = "Slug" ;

class Weight {
public:
    static const t_weight UNKNOWN_WEIGHT;
    static const t_weight KILOS_IN_A_POUND;
    static const t_weight SLUGS_IN_A_POUND ;
private:
    bool  bIsKnown = false;
    bool  bHasMax = false;
    enum UnitOfWeight unitOfWeight = POUND;
    t_weight weight{};
    t_weight maxWeight{};

public: //static public member functions
    static float fromKilogramToPound( t_weight kilogram ) noexcept;
    static float fromPoundToKilogram (t_weight pound) noexcept;
    static float fromSlugToPound(t_weight slug) noexcept;
    static float fromPoundToSlug (t_weight pound) noexcept;
public: //public member functions
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;
    t_weight getWeight() const noexcept;
    t_weight getWeight(UnitOfWeight weightUnits) const noexcept;
    t_weight getMaxWeight() const noexcept;

    UnitOfWeight getWeightUnit() const noexcept;

    void setWeight(t_weight newWeight);
    void setWeight(t_weight newWeight, UnitOfWeight weightUnits);
    bool isWeightValid(t_weight checkWeight) const noexcept;
    bool validate() const noexcept;
    void dump() const noexcept;

    bool operator== (const Weight &rhs_Weight) const;
    bool operator< (const Weight &rhs_Weight) const;

    Weight & operator+= (float rhs_addToWeight);

    static float convertWeight (t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;
public: // public member functions
    Weight() noexcept;
    Weight(t_weight newWeight);
    Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight);
    Weight (t_weight newWeight, t_weight newMaxWeight);
    Weight (UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);
    Weight (t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);

private: //private member function
    void setMaxWeight (t_weight newMaxWeight);

};
