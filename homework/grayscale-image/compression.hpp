#pragma once
#include <array>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdint>

constexpr size_t width = 240;
constexpr size_t height = 160;

std::vector<std::pair<std::uint8_t, std::uint8_t>> compressGrayscale(const std::array<std::array<std::uint8_t, width>, height>& image_array);
std::array<std::array<std::uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<std::uint8_t, std::uint8_t>>& image_vector);
