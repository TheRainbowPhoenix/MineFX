#pragma once
#include <cstdint>
#include <iostream>

struct RGB {
    uint8_t r = 0;
    uint8_t g = 0;
    uint8_t b = 0;

    // Constructors
    constexpr RGB() = default;
    constexpr RGB(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {
    }

    // Common Colors
    static constexpr RGB Black() {
        return RGB(0, 0, 0);
    }
    static constexpr RGB White() {
        return RGB(255, 255, 255);
    }
    static constexpr RGB Red() {
        return RGB(255, 0, 0);
    }
    static constexpr RGB Green() {
        return RGB(0, 255, 0);
    }
    static constexpr RGB Blue() {
        return RGB(0, 0, 255);
    }

    // Equality operators
    constexpr bool operator==(const RGB& other) const {
        return r == other.r && g == other.g && b == other.b;
    }
    constexpr bool operator!=(const RGB& other) const {
        return !(*this == other);
    }
};

// Stream output for RGB (casting to int to display numeric values)
inline std::ostream& operator<<(std::ostream& os, const RGB& color) {
    return os << "RGB(" << static_cast<int>(color.r) << ", " << static_cast<int>(color.g) << ", "
              << static_cast<int>(color.b) << ")";
}

