#include <iostream>
#include <string>
#include <vector>
#include "File.hpp"
#include "Permissions.hpp"
#include "Node.hpp"

void File::print() const
{
    std::cout << "File: " << name << "\n";
    std::cout << "Content: " << content << "\n";
}