#include <cmath>
#include <random>
#include "vector3.h"




namespace Maple{
    namespace Math{

        double Math::cos(double x){
            return std::cos(x);
        }

        double Math::sin(double x){
            return std::sin(x);
        }

        double Math::tan(double x){
            return std::tan(x);
        }

        double Math::acos(double x){
            return std::acos(x);
        }

        double Math::asin(double x){
            return std::asin(x);
        }

        double Math::atan(double x){
            return std::atan(x);
        }

        double Math::atan2(double y, double x){
            return std::atan2(y, x);
        }

        double Math::sqrt(double x){
            return std::sqrt(x);
        }

        double Math::cbrt(double x){
            return std::cbrt(x);
        }

        double Math::abs(double x){
            return std::abs(x);
        }

        double Math::pow(double base, double exponent){
            return std::pow(base, exponent);
        }

        double Math::exp(double x){
            return std::exp(x);
        }

        double log(double x){
            return std::log(x);
        }

        double log10(double x){
            return std::log10(x);
        }

        double Math::rand_double(double min, double max){
            static std::random_device rd;
            static std::mt19937 mt(rd());
            std::uniform_real_distribution<double> dist(min, max);
            return dist(mt);
        }

        int Math::ceil(double x){
            return std::ceil(x);
        }

        int Math::floor(double x){
            return std::floor(x);
        }

        int Math::round(double x){
            return std::round(x);
        }
        

    }
};