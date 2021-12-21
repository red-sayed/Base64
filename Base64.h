/**
 * @file    Base64.h
 * @brief   Base64 is string encryption/decryption lib.
 *
 * Copyright (c) 2020-2021 Vladimir Rogozin (vladimir20040609@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */
#ifndef RED_BASE64_H
#define RED_BASE64_H

#include <stdlib.h>
#include <memory.h>

namespace Red {
    /**
     * @brief Base64Encode
     *
     * @param in ASCII string to be encoded.
     *
     * @return Base64 format string.
     */
    char* Base64Encode(char* in);

    /**
     * @brief Base64Decode
     *
     * @param in Base64 format string.
     *
     * @return ASCII string.
     */
    char* Base64Decode(char* in);
}

#endif //RED_BASE64_H
