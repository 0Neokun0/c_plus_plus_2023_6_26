#include <iostream>

int main()

{
/*
Character Type
*/
    char middle_initial{'N'};
    std::cout << "My middle inital is " << middle_initial << "\n";

/*
Integer Types
*/
    unsigned short int exam_score {50};
    std::cout << "My exam score was " << exam_score << "\n";

    int countries_represented_in_G7 {6};
    std::cout << "There are " << countries_represented_in_G7 << "countries represent in G7" << "\n";

    long people_in_osaka {23000000};
    std::cout << "There are approx " << people_in_osaka << "int Osaka." << "\n";

    long long distance_to_alpha_centauri {9'461'000'000'000};
    std:: cout << "The distance between earth and alpha centauri is " << distance_to_alpha_centauri << "." << "\n";

/*
Floating Point Types
*/
    float car_payment {401.23};
    std::cout << "My car payment is " << car_payment << "\n";

    double pi {3.123432};
    std::cout << "PI is "  << pi << "\n"; 

    long double large_amount {2.7e120};
    std:: cout << large_amount << "is a very big number" << "\n";

/*
Boolean Type
*/
    bool game_over {false};
    std:: cout << "The value of gameOver is " << game_over << "\n";
    
    return 0;
}