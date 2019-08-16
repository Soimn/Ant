#pragma once

inline I64
Abs(I64 num)
{
    return num & ~(1ULL << 63);
}

// TODO(soimn): Verify this
inline F32
Abs(F32 num)
{
    *(U32*)&num &= ~(1 << 31);
    
    return num;
}

inline I64
Sign(I64 num)
{
    return (num & (1ULL << 63)) * -1;
}

// TODO(soimn): Verify this
inline F32
Sign(F32 num)
{
    return (*(U32*)&num & (1 << 31)) * -1.0f;
}

// TODO(soimn): replace this with an intrinsic
inline F32
Sqrt(F32 num, U8 precision = 5)
{
    F32 result = num / 2.0f;
    
    U32 num_iterations = (num < 10.0f ? precision : (num < 1000.0f ? 2 * precision : 4 * precision));
    
    for (U32 i = 0; i < num_iterations; ++i)
    {
        result = result - (result * result - num) / (2.0f * result);
    }
    
    return result;
}