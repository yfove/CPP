double feet_and_inches_to_meters(int feet, double inches) {
    double meters = (feet + inches/12) / 3.28;
    std::cout << feet << " feet and " << inches << " inches is:\n";
    std::cout << meters << " meters!\n";
    
    return meters;
}

feet_and_inches_to_meters(3, 4)