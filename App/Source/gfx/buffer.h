#ifndef GFX_BUFFER_H
#define GFX_BUFFER_H
#include "common/types.h"
#include <string>

enum class BufferType : uint8_t
{
    _DEFAULT = 0,
    VERTEX,
    INDEX,
};
enum class BufferUsage : uint8_t
{
    _DEFAULT = 0,
    STATIC,
    DYNAMIC,
};

struct BufferDesc
{
    std::string Label;
    void* Data;
    BufferType Type;
    BufferUsage Usage;
};

class GPUBuffer
{
public:
    virtual ~GPUBuffer() = default;

    static Ref<GPUBuffer> Create(const BufferDesc& desc);
};

#endif