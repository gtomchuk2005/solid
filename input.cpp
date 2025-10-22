#include <iostream>

class Keyboard {
public:
    std::string getInput() {
        return "User input from keyboard";
    }
};

class Mouse {
public:
    std::string getInput() {
        return "User input from mouse";
    }
};

// Right now this code assumes that input will come from the keyboard, 
// but we would like to be able to create an InputProcessor that 
// accepts input from the mouse (and potentially other input devices
// in the future). Note that each InputProcessor only needs to deal
// with one device.
class InputProcessor {
public:
    template<typename InputDevice>
    void processInput(InputDevice& device) {
        std::string input = device.getInput();
        std::cout << "Processing: " << input << '\n';
    }
};

// For demonstration
int main() {
    InputProcessor processor;
    Keyboard keyboard;
    Mouse mouse;
    processor.processInput(keyboard);
    processor.processInput(mouse);
}
