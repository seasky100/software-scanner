// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from handy.djinni

#pragma once

#include <cstdint>
#include <string>
#include <vector>

// Because we target native android opencv and as of opencv 3.4.1 doesn't
// support ndk 17 (AFAIK) we have to use ndk16 which only support c++1z
#if __has_include(<optional>)
# include <optional>
#elif __has_include(<experimental/optional>)
# include <experimental/optional>
namespace std
{
  using namespace experimental;
}
#else
#error !
#endif


namespace generated {

/** @extern "handy.yaml" */
class CoreLibInterface {
public:
    virtual ~CoreLibInterface() {}

    static void cvtGray(int64_t image_ptr);

    static void draw_contour(int64_t input_ptr);

    static void software_scanner(int64_t input_ptr, int64_t output_ptr);

    static std::string hello(const std::string & name);

    static std::optional<std::vector<std::vector<int64_t>>> find_document(int64_t input_ptr);
};

}  // namespace generated