#ifndef CIPHERFACTORY_HPP
#define CIPHERFACTORY_HPP

#include <memory>
#include <string>

#include "CipherType.hpp"
#include "Cipher.hpp"

namespace CipherFactory {

    /**
     * @brief Factory function to create a cipher object based on the specified type and mode
     *
     * @param type The type of cipher to create
     * @param key The key to use for the cipher
     * @return A unique pointer to the created cipher object
     */
    std::unique_ptr<Cipher> createCipher(CipherType type, std::string _key = "");
}

#endif    // CIPHERFACTORY_HPP