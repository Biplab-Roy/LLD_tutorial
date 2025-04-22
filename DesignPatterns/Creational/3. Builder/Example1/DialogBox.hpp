#pragma once

#include <string>

class DialogBox {
public:
    void showDialogBox() {
        printf("Pop up\n");
    }

    std::string title;
    std::string message;
    std::string backgroundColor;
    bool hasOkButton = false;
    std::string okButtonColor;
    bool hasCancleButton = false;
    std::string cancleButtonColor;
    bool hasExitButton = false;
    std::string exitButtonColor;
};