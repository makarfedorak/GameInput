#include <iostream>
#include <map>

std::map<std::string, bool> keys;

int main() {
    std::string input;
    while (true) {
        std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter a command: \";\n        std::cin >>"}` input;

        if (input == "w") {
            keys["up"] = true;
        } else if (input == "s") {
            keys["down"] = true;
        } else if (input == "a") {
            keys["left"] = true;
        } else if (input == "d") {
            keys["right"] = true;
        } else if (input == "exit") {
            break;
        } else {
            std::cout << "Invalid command" << std::endl;
        }

        for (auto key : keys) {
            std::cout << key.first << ": " << key.second << std::endl;
        }
        keys.clear();
    }

    return 0;
}
