#include<iostream>
#include<iomanip> //for std::setprecison

class RestaurantBillCalculator{

public:

    RestaurantBillCalculator(double mealCost, double tipPercentage) : mealCost(mealCost), tipPercentage(tipPercentage){ //constructor initializes mealCost and tipPercentage

        calculateBill();
};


double getMealCost() const { 
    return mealCost;
}
double getTipAmount() const {
    return tipAmount;
}
double getTaxAmount() const {
    return taxAmount;
}
double getTotalBill() const {
    return totalBill;
}


private:
    const double taxRate = 0.075;
    double mealCost;
    double tipPercentage;
    double tipAmount;
    double taxAmount;
    double totalBill;

                                // Function to calculate the tip, tax, and total bill
void calculateBill() {
    tipAmount = mealCost * (tipPercentage / 100);
    taxAmount = mealCost * taxRate;
    totalBill = mealCost + tipAmount + taxAmount;
};

};


int main(){

    double mealCost;
    double tipPercentage;

    std::cout << "Please input meal cost: " ;
    std::cin >> mealCost;
    std::cout << std::endl;
    std::cout << "Please input tip percentage: ";
    std::cin >> tipPercentage;
    std::cout << std::endl;


    RestaurantBillCalculator myObject(mealCost, tipPercentage);

    std::cout << "Restaurant Bill" << std::endl;
    std::cout << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << std::endl;
    std::cout << "Subtotal: $" <<  std::fixed << std::setprecision(2) << mealCost << std::endl;
    std::cout << "Taxes: $" <<  std::fixed << std::setprecision(2) << myObject.getTaxAmount() << std::endl;
    std::cout << "Tip: $" << std::fixed << std::setprecision(2) <<  myObject.getTipAmount() << std::endl;
    std::cout << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << std::endl;
    std::cout << "Total: $" << myObject.getTotalBill() << std::endl;


  return 0;
};