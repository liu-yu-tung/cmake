#include <iostream>
#include "yaml-cpp/yaml.h"

int main() {
    YAML::Node file = YAML::LoadFile("../doc/test.yaml");
    const auto test = file["test"];
    int test1 = test["test1"].as<double>();
    int test2 = test["test2"].as<double>();
    std::cout << test1 << test2 << std::endl;
    return 0;
}