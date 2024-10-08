#include <iostream>
#include "company.pb.h"

int main() {
    Company my_company;
    my_company.set_foundation_year(1995);
    my_company.set_legal_address("123 Main St, City");
    my_company.set_name("TechCorp");

    my_company.set_activity_type("Software Development");
    my_company.set_foreign_economic_activity(true);

    std::cout << "Company Name: " << my_company.name() << std::endl;
    std::cout << "Foundation Year: " << my_company.foundation_year() << std::endl;
    std::cout << "Legal Address: " << my_company.legal_address() << std::endl;

    if (my_company.has_activity_type()) {
        std::cout << "Activity Type: " << my_company.activity_type() << std::endl;
    }

    if (my_company.has_foreign_economic_activity()) {
        std::cout << "Foreign Economic Activity: " << (my_company.foreign_economic_activity() ? "Yes" : "No") << std::endl;
    }

    return 0;
}
