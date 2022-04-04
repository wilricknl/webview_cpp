#include "webview.h"

#include <filesystem>

int main() {
    webview::webview w(true, nullptr);
    w.set_title("Minimal example");
    w.set_size(480, 320, WEBVIEW_HINT_NONE);
    w.navigate(R"(file://)" + std::filesystem::current_path().string() + "/gui/index.html");
    w.run();
    return 0;
}
