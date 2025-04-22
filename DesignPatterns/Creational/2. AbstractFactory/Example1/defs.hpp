#pragma once

#include <string>
#include <stdint.h>
#include <unordered_map>

struct Parameter {
    std::string name;
    union value {
        int32_t* i32;
        uint32_t* u32;
        int64_t* i64;
        uint64_t* u64;
        float* f32;
        double* f64;
        char* raw;
        const char* raw_const;
        uint8_t* u8;
        bool* b;
        int16_t* i16;
        uint16_t* u16;
        int8_t* i8;
        /// Only use this member.
        void* data;
    }value;
};

struct ShapeInfo {
    std::string name;
    std::string type;
    std::unordered_map<std::string, Parameter*> params;
};