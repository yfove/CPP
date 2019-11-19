#include <iosteam>

bool morning = true;
std::string make_sandwich (){
    std::string sandwhich = "";
    sandwich += "bread\n";
    if (morning == true) {
        sandwich += "egg\n";
    }
    sandwich += "cheese\n";
    sandwich += "bread\n";
    return sandwich;
}

int main {
    std::cout << "Your sandwich now:\n" << make_sandwich();
}