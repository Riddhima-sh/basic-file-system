#include <iostream>
#include "File.hpp"
#include "Folder.hpp"

int main()
{
    std::vector<Permission> rwx = {Permission::READ, Permission::WRITE, Permission::EXECUTE};
    std::vector<Permission> ro = {Permission::READ};
    std::vector<Permission> wo = {Permission::WRITE};
    std::vector<Permission> xo = {Permission::EXECUTE};

    Folder *root = new Folder("root", rwx);
    Folder *subFol1 = new Folder("subFol1", rwx);
    Folder *subFol2 = new Folder("subFol2", rwx);

    File *file1 = new File("file1.txt", ro, "Read only content");
    File *file2 = new File("file2.txt", wo, "This is added");

    root->addChild(subFol1);
    root->addChild(subFol2);
    subFol1->addChild(file1);
    subFol2->addChild(file2);

    root->print();
    // Deletion of files

    subFol2->removeChild("file2.txt");

    std::cout << "Affter deletion" << std::endl;
    root->print();

    return 0;
}