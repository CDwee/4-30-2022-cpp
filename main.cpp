// Started at 7:19 4-30-2022

// Section 9
// If Else Statement
#include <iostream>

using namespace std;

int main() {
    int num {};
    const int target {10};
    
    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;
    
    if (num >= target) {
        cout << "\n==================================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n==================================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    cout << endl;
    return 0;
}

// Section 9
// Grades

#include <iostream>

using namespace std;

int main() {
    
    int score {};
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;
    char letter_grade {};
    
    if (score >= 0 && score <= 100) {
        if (score >= 90) 
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70) 
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else 
            letter_grade = 'F';
            
        cout << "Your grade is: " << letter_grade << endl;
        if (letter_grade == 'F')
            cout << "Sorry, you must repeat the class" << endl;
        else 
            cout << "Congrats!" << endl;
        
    } else {
        cout << "Sorry, " << score << " is not in range" << endl;
    }
    
    
    cout << endl;
    return 0;
}

// Section 9
// Shipping

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int length{}, width{}, height{};
    double base_cost{2.50};
    
    const int tier1_threshold {100};    // volume
    const int tier2_threshold{500};    // volume
    
    int max_dimension_length {10};  // inches
    
    double tier1_surcharge {0.10};  // 10% extra
    double tier2_surcharge {0.25};  // 25% extra
    
    // All dimension must be 10 inches or less
    
    int package_volume{};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        double package_cost {};
        package_volume= length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        } else if ( package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 1surcharge" << endl;
        }
        
        cout << fixed << setprecision(2); // prints dollars nicely
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;
        
    }
    cout << endl;
    return 0;
}

// Ended at 10:43 4-30-2022
