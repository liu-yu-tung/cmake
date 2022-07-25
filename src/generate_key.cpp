#include <iostream>
#include <string>
#include "yaml-cpp/yaml.h"
std::string answer[4] = {
    "ae229a357ee49bedaf6f65e365ed2c686a1db70b3cc38216d88340b0b71ade1b", // good_merge0
    "1000a6a1dec8696ae4bec294779ab2a6a4c3c8a778cc2aaa909a9eba3008aeaa", // good_merge1
    "a51d59b89dc7468d34f9713a2dbd66a82b0cf6c49d33072399e4b1b6b5ca7e79", // good_merge2
    "cfca6ccd4eb08093dac12e9096a54a4e61a413b28d2b9b30d45f6482f153e272" // good_merge3
};
int main() {
    YAML::Node file = YAML::LoadFile("task4.yaml");
    const auto git = file["git"];
    std::string line[4];
    for(int i = 0; i < 4; i++) {
        line[i] = git["line" + std::to_string(i)].as<std::string>();
        if (line[i] != answer[i]) {
            std::cout << "Incorrect merging! Please try again." << std::endl;
            return 1;
        }
    }
    std::cout << "Congratulation, the key is 'ad936fcbed631fa67e05c3ea03953905221c9d46af0616b70badf105a966fb11'" << std::endl;
    return 0;
}