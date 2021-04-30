#include <stdio.h>
struct dialing_code {
    char *country;
    int code;
};
int
main (int argc, char* argv[]) { //creates char and int array.
    int intl_code, i;
    const struct dialing_code country_codes[] = { //Just a random list I've made
        {"Afghanistan", 1},   {"Albania",     2},
        {"Algeria",     3},   {"Andorra",     4},
        {"Bhutan",      5},   {"Bolivia",     6},
        {"Angola",      7},   {"Argentina",   8},
        {"Armenia.",    9},   {"Australia",  10},
        {"Austria",    11},   {"Azerbaijan", 12},
        {"Bahamas",    13},   {"Bahrain",    14},
        {"Bangladesh", 15},   {"Barbados",   16},
        {"Belarus",    17},   {"Belgium",    18},
        {"Belize",     19},   {"Benin",      20},
        };
    int n_entries = sizeof(country_codes) / sizeof(*country_codes);
    do {
        int found = 0;
        printf("Please input the international code(-1 to exit): "); //Method to exit program
        scanf("%d", &intl_code);
        if (intl_code == -1)
            break;
        for (i = 0; i < n_entries; i++) {
            if (country_codes[i].code == intl_code) { //Based on dial code user inputs, throws out country code.
                printf("The country is: %s\n", country_codes[i].country);
                found = 1;
            }
        }
        if (!found) //If unknown code is entered.
            printf("Code not found.\n");
    } while(1);

    return 0;
}