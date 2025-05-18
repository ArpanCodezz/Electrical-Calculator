#include <stdio.h>

//declaration of functions
float ohms_calc();
int Power_dissipated_calc();
int capacitor_calc();
int unit_converter();


int main() {
  int options;
  do {
    printf("\nChoose your electrical calculator: ");
    printf("\n1. Ohm's law Calculator\n");
    printf("2. Power Dissipated Calculator\n");
    printf("3. Capacitor Calculator\n");
    printf("4. Unit Converter\n");
    printf("5. Exit the program\n");
    printf("***************************************\n");
    printf(" Enter your option: ");

    if(scanf("%d",&options)!=1)
      printf("Enter between1-5 only");
    else{printf("you entered: %d",options);}
    switch (options)
    {

      case 1: {
        float result=ohms_calc();
        printf("The result is %f",result);
        break;
      }
      case 2: {
        Power_dissipated_calc();
        break;
      }
      case 3: {
        capacitor_calc();
        break;
      }
      case 4: {
        unit_converter();
        break;
      }
      default:{
        printf("\n\nPlease select from the given options\n");
      break;}
    }
  } while (options != 5);
  getchar();
  return 0;
}

float ohms_calc() {
  char choice1;
  float result = 0; // Variable to hold the calculated result

    do {
      float current, voltage, resistance;
      printf(" \nOhm's Law Calculator\n");
      printf("a. Calculate Voltage\n");
      printf("b. Calculate Current\n");
      printf("c. Calculate Resistance\n");
      printf("d. Exit the program\n");
      printf("**************************\n");
      printf(" Make your choice: ");
      scanf(" %c", &choice1);

      switch (choice1) {
        case 'a':
            printf(" Enter the value of current (in Amperes): ");
            if (scanf("%f", &current) != 1) {
              printf("\n Invalid input! Please enter a numeric value for current.\n");
              break; // Skip the rest of the case block and return to the menu
            }
            printf("\n Enter the value of resistance (in Ohms): ");
            if (scanf("%f", &resistance) != 1) {
              printf("\n Invalid input! Please enter a numeric value for resistance.\n");
              break; // Skip the rest of the case block and return to the menu
            }
            voltage = current * resistance;
            printf("\n The value of voltage is %.2f volts", voltage);
            result = voltage; // Store the calculated voltage
            break;
        case 'b':
            printf(" Enter the value of voltage (in Volts): ");
            if (scanf("%f", &voltage) != 1) {
            printf("\n Invalid input! Please enter a numeric value for voltage.\n");
            break; // Skip the rest of the case block and return to the menu
            }
            printf("\n Enter the value of resistance (in Ohms): ");
            if (scanf("%f", &resistance) != 1) {
            printf("\n Invalid input! Please enter a numeric value for resistance.\n");
            break; // Skip the rest of the case block and return to the menu
            }
            current = voltage / resistance;
            printf("\n The value of current is %.2f amperes", current);
            result = current; // Store the calculated current
            break;
        case 'c':
            printf(" Enter the value of current (in Amperes): ");
            if (scanf("%f", &current) != 1) {
            printf("\n Invalid input! Please enter a numeric value for current.\n");
            break; // Skip the rest of the case block and return to the menu
            }
            printf("\n Enter the value of voltage (in Volts): ");
            if (scanf("%f", &voltage) != 1) {
            printf("\n Invalid input! Please enter a numeric value for voltage.\n");
            break; // Skip the rest of the case block and return to the menu
            }
            resistance = voltage / current;
            printf("\n The value of resistance is %.2f ohms", resistance);
            result = resistance; // Store the calculated resistance
            break;
        case 'd':
            printf("\n Exiting the program...\n");
            break;
            default:
            printf("\n Please select from the given options\n");
            break;
            }
    } while (choice1 != 'd');
    return result; // Return the calculated result
    }

int Power_dissipated_calc() {
    char choice2;
    do {
        float power, resistance, voltage, current;
        printf("\n Power Dissipated Calculator\n");
        printf("a. Using current and voltage\n");
        printf("b. Using voltage and resistance\n");
        printf("c. Using current and resistance\n");
        printf("d. Exit the program\n");
        printf("**************************\n");
        printf(" Make your choice: ");
        scanf(" %c", &choice2);
        switch (choice2) {
            case 'a':
                printf(" Enter the value of current (in Amperes): ");
                if (scanf("%f", &current) != 1 || current <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for current.\n");
                    break;
                }
                printf("\n Enter the value of voltage (in Volts): ");
                if (scanf("%f", &voltage) != 1 || voltage <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for voltage.\n");
                    break;
                }
                power = current * voltage;
                printf("\n The value of power is %.2f watts", power);
                break;
            case 'b':
                printf(" Enter the value of voltage (in Volts): ");
                if (scanf("%f", &voltage) != 1 || voltage <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for voltage.\n");
                    break;
                }
                printf("\n Enter the value of resistance (in Ohms): ");
                if (scanf("%f", &resistance) != 1 || resistance <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for resistance.\n");
                    break;
                }
                power = (voltage * voltage) / resistance;
                printf("\n The value of power is %.2f watts", power);
                break;
            case 'c':
                printf(" Enter the value of current (in Amperes): ");
                if (scanf("%f", &current) != 1 || current <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for current.\n");
                    break;
                }
                printf("\n Enter the value of resistance (in Ohms): ");
                if (scanf("%f", &resistance) != 1 || resistance <= 0) {
                    printf("\n Invalid input! Please enter a positive numeric value for resistance.\n");
                    break;
                }
                power = current * current * resistance;
                printf("\n The value of power is %.2f watts", power);
                break;
            case 'd':
                printf("\n Exiting the program...\n");
                break;
            default:
                printf("\n Please select from the given options\n");
                break;
        }
    } while (choice2 != 'd');
    return 0;
}


int capacitor_calc(){
  char choice3;
  do {
    printf(" \nCapacitor Calculator\n");
    printf("a. Calculate Capacitance\n");
    printf("b. Determine Charge Flow\n");
    printf("c. Calculate Energy Stored in Capacitor\n");
    printf("d. Exit the program\n");
    printf("**************************\n");
    printf(" Make your choice: ");
    scanf(" %c", &choice3);
    switch (choice3) {
            case 'a': {
                float charge, capacitance, voltage;
                printf(" Enter the value of charge (in Coulombs): ");
                if (scanf("%f", &charge) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for charge.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                printf("\n Enter the value of voltage (in Volts): ");
                if (scanf("%f", &voltage) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for voltage.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                capacitance = charge / voltage;
                printf("\n The value of capacitance is %.2f farads", capacitance);
                break;
            }
            case 'b': {
                float current, time, charge;
                printf(" Enter the value of current (in Amperes): ");
                if (scanf("%f", &current) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for current.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                printf("\n Enter the value of time (in seconds): ");
                if (scanf("%f", &time) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for time.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                charge = current * time;
                printf("\n The value of charge is %.2f coulombs", charge);
                break;
            }
            case 'c': {
                float energy, capacitor, voltage;
                printf(" Enter the value of capacitance (in Farads): ");
                if (scanf("%f", &capacitor) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for capacitance.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                printf("\n Enter the value of voltage (in volts): ");
                if (scanf("%f", &voltage) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for voltage.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                energy = 0.5 * capacitor * voltage * voltage;
                printf("\n The value of energy is %.2f joules", energy);
                break;
            }
            case 'd': {
                printf(" Exiting the program...");
                break;
            }
            default:
                printf("\n Please select from the given options\n");
                break;
        }
    } while (choice3 != 'd');
  return 0;
}

int unit_converter(){
  char choice4;
  do {

    printf(" \nUnit Converter\n");
    printf(" 'basic' here means the original value.Units could be added according to the choice,i.e. Ohm,A,V,W etc.");
    printf("a. basic into kilo \n");
    printf("b. basic into milli \n");
    printf("c. basic into micro \n");
    printf("d. basic into mega \n");
    printf("e. Exit the program\n");
    printf("**************************\n");
    printf(" Make your choice: ");
    scanf(" %c", &choice4);
        switch (choice4) {
            case 'a': {
                float basic, kilo;
                printf(" Enter the basic value: ");
                if (scanf("%f", &basic) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for basic.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                kilo = basic / 1000;
                printf(" The value can be written as %.4f k or %.4f x 10^3 ", kilo, kilo);
                break;
            }
            case 'b': {
                float basic, milli;
                printf(" Enter the basic value: ");
                if (scanf("%f", &basic) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for basic.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                milli = basic / 1000;
                printf(" The value can be written as %.4f m or %.4f x 10^-3", milli, milli);
                break;
            }
            case 'c': {
                float basic, micro;
                printf(" Enter the basic value: ");
                if (scanf("%f", &basic) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for basic.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                micro = basic * 1000000;
                printf(" The value can be written as %.4f u or %.4f x 10^-6", micro, micro);
                break;
            }
            case 'd': {
                float basic, mega;
                printf(" Enter the basic value: ");
                if (scanf("%f", &basic) != 1) {
                    printf("\n Invalid input! Please enter a valid numeric value for basic.\n");
                    break; // Skip the rest of the case block and return to the menu
                }
                mega = basic / 1000000;
                printf(" The value can be written as %.4f M or %.4f x 10^6", mega, mega);
                break;
            }
            case 'e': {
                printf(" Exiting the program...");
                break;
            }
            default: {
                printf("\n Please select from the given options\n");
                break;
            }
        }
    } while (choice4 != 'e');

    return 0;
}
